using System.Data.Common;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Reloaded.Injector;
using Newtonsoft.Json.Bson;
using System.Runtime.InteropServices;
using Newtonsoft.Json;

namespace Launcher
{
    public partial class Launcher : Form
    {

        public struct MatchConfig
        {
            public String serverip { get; set; }
            public String username { get; set; }

        }

        private String serverinstallationpath = "";
        private String clientinstallationpath = "";
        private MatchConfig matchConfig = new MatchConfig
        {
            serverip = "",
            username = "hallo"
        };

        public struct ServerConfig
        {
            public String map { get; set; }
            public int maxplayers { get; set; }
        }
        private ServerConfig serverConfig = new ServerConfig
        {

            maxplayers = 0
        };

        struct Settings
        {
            public string serverpath;
            public string clientpath;
            public string ip;
            public string mode;
            public string map;

        }
        private void LoadFromSettings()
        {
            //load the settings.json file
            if (!File.Exists("settings.json"))
            {
                File.Create("settings.json");
                return;
            }

            try
            {
                var settings = File.ReadAllText("settings.json");
                var settingsJson = JsonConvert.DeserializeObject<Settings>(settings);
                if (settingsJson.mode != "1vs1" && settingsJson.mode != "2vs2" && settingsJson.mode != "")
                {
                    MessageBox.Show("Invalid mode in settings.json, setting to 1vs1");
                    settingsJson.mode = "1vs1";
                }

                if (settingsJson.map != "colosseum_p" && settingsJson.map != "egypt_p" && settingsJson.map != "")
                {
                    MessageBox.Show("Invalid map in settings.json, setting to colosseum_p");
                    settingsJson.map = "colosseum_p";
                }
                serverinstallationpath = settingsJson.serverpath;
                clientinstallationpath = settingsJson.clientpath;
                maskedTextBox1.Text = settingsJson.ip;
                comboBox1.Text = settingsJson.mode;
                comboBox2.Text = settingsJson.map;
                if (serverinstallationpath != "")
                {
                    button1.Text = "Set!";

                }

                if (clientinstallationpath != "")
                {
                    button2.Text = "Set!";
                }
            }
            catch (Exception e)
            {
                MessageBox.Show("Error while loading settings.json: " + e.Message);
                throw;
            }

        }

        
        private void SaveToSettings()
        {
            //save the settings.json file
            Settings settings = new Settings();
            settings.serverpath = serverinstallationpath;
            settings.clientpath = clientinstallationpath;
            settings.ip = maskedTextBox1.Text;
            settings.mode = comboBox1.Text;
            settings.map = comboBox2.Text;
            string json = JsonConvert.SerializeObject(settings);
            File.WriteAllText("settings.json", json);

              
        }
        public Launcher()
        {
            InitializeComponent();
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.maskedTextBox1.ValidatingType = typeof(System.Net.IPAddress);
            this.maskedTextBox1.Text = matchConfig.serverip;
            LoadFromSettings();

            //check if 
        }
        [DllImport("kernel32.dll", SetLastError = true)]
        [return: MarshalAs(UnmanagedType.Bool)]
        static extern bool AllocConsole();
        private void Launcher_Load(object sender, EventArgs e)
        {

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }
        //connect button
        private void button3_Click(object sender, EventArgs e)
        {
            if (clientinstallationpath == "")
            {
                MessageBox.Show("No installation path set!");
                return;
            }

            if (matchConfig.serverip == "")
            {
                MessageBox.Show("No server IP set!");
                return;
            }
            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.FileName = clientinstallationpath + "\\AimGods-Win64-Shipping.exe";
            startInfo.Arguments = "-NoEAC";
            Process aimgods = Process.Start(startInfo);
            while (true)
            {
                try
                {
                    var time = aimgods.StartTime;
                    break;
                }
                catch (Exception)
                {
                    continue;
                }
            }
            Injector injector = new Injector(aimgods);
            injector.Inject(Directory.GetCurrentDirectory() + "\\AimGods_Client.dll");
            if (File.Exists(clientinstallationpath + "\\matchconfig.ag"))
            {
                File.Delete(clientinstallationpath + "\\matchconfig.ag");
            }
            BinaryWriter fileWriter = new BinaryWriter(new FileStream(clientinstallationpath + "\\matchconfig.ag", FileMode.Create));
            using (BsonWriter writer = new BsonWriter(fileWriter))
            {
                JsonSerializer serializer = new JsonSerializer();
                serializer.Serialize(writer, matchConfig);
            }
            fileWriter.Close();

        }
        //host button
        private void button4_Click(object sender, EventArgs e)
        {
            if (serverinstallationpath == "")
            {
                MessageBox.Show("No installation path set!");
                return;
            }

            if (serverConfig.map == "")
            {
                MessageBox.Show("No server IP set!");
                return;
            }
            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.FileName = serverinstallationpath + "\\AimGods-Win64-Shipping.exe";
            startInfo.Arguments = "-NoEAC";
            Process aimgods = Process.Start(startInfo);
            while (true)
            {
                try
                {
                    var time = aimgods.StartTime;
                    break;
                }
                catch (Exception)
                {
                    continue;
                }
            }
            Injector injector = new Injector(aimgods);
            injector.Inject(Directory.GetCurrentDirectory() + "\\AimGods_Server.dll");
            if (File.Exists(serverinstallationpath + "\\matchconfig_server.ag"))
            {
                File.Delete(serverinstallationpath + "\\matchconfig_server.ag");
            }
            BinaryWriter fileWriter = new BinaryWriter(new FileStream(serverinstallationpath + "\\matchconfig_server.ag", FileMode.Create));
            using (BsonWriter writer = new BsonWriter(fileWriter))
            {
                JsonSerializer serializer = new JsonSerializer();
                serializer.Serialize(writer, serverConfig);
            }
            fileWriter.Close();

        }
        //file dialog button client
        private void button1_Click(object sender, EventArgs e)
        {
            using (var fbd = new FolderBrowserDialog())
            {
                fbd.Description = "Select your installation folder";
                DialogResult result = fbd.ShowDialog();

                if (result == DialogResult.OK && !string.IsNullOrWhiteSpace(fbd.SelectedPath))
                {
                    if (File.Exists(fbd.SelectedPath + "\\AimGods-Win64-Shipping.exe"))
                    {
                        clientinstallationpath = fbd.SelectedPath;
                        button1.Text = "Set!";
                    }
                    else
                    {
                        MessageBox.Show("Invalid installation path");
                        button1.Text = "Select";
                    }
                }
            }

        }
        //server ip
        private void maskedTextBox1_TextChanged(object sender, EventArgs e)
        {
            matchConfig.serverip = maskedTextBox1.Text;
        }
        //map select
        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            serverConfig.map = comboBox2.Text;
        }
        //mode select
        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.Text == "1vs1")
            {
                serverConfig.maxplayers = 3;
            }

            if (comboBox1.Text == "2vs2")
            {
                serverConfig.maxplayers = 5;
            }
        }
        //file dialog button server
        private void button2_Click(object sender, EventArgs e)
        {
            using (var fbd = new FolderBrowserDialog())
            {
                fbd.Description = "Select your installation folder";
                DialogResult result = fbd.ShowDialog();

                if (result == DialogResult.OK && !string.IsNullOrWhiteSpace(fbd.SelectedPath))
                {
                    if (File.Exists(fbd.SelectedPath + "\\AimGods-Win64-Shipping.exe"))
                    {
                        serverinstallationpath = fbd.SelectedPath;
                        button2.Text = "Set!";
                    }
                    else
                    {
                        MessageBox.Show("Invalid installation path");
                        button2.Text = "Select";
                    }
                }
            }
        }

        private void Launcher_FormClosing(object sender, FormClosingEventArgs e)
        {
            SaveToSettings();
        }
    }
}