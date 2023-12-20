
using System.Diagnostics;
using System.Runtime.InteropServices;
using Newtonsoft.Json.Linq;
using UnrealEngine.Gvas;
using UnrealEngine.Gvas.FProperties;
namespace AbilityPickerV2
{
    public partial class Form1 : Form
    {
        private class AbilityClass
        {
            public string Name;
            public string Path;
        }
        private static List<AbilityClass> AbilityList = new List<AbilityClass>();
        private static string[] LoadoutPaths = new string[7];
        private string SaveFilePath = Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData) + "\\AimGods\\Saved\\SaveGames\\Slot_01.sav";
        public Form1()
        {
            InitializeComponent();

        }
        static string ConvertString(string original)
        {
            int lastSlashIndex = original.LastIndexOf('/');
            if (lastSlashIndex == -1)
            {
                return original;
            }

            string lastPart = original.Substring(lastSlashIndex + 1);
            return original + "." + lastPart + "_C";
        }
        
        private void Form1_Load(object sender, EventArgs e)
        {
            AllocConsole();
            string[] abilityNames = File.ReadAllLines("abilitynames.txt");
            string[] abilityPaths = File.ReadAllLines("abilitypaths.txt");
            string responseString = "";
            using (var client = new HttpClient())
            {
                var response = client.GetAsync("http://google.com").Result;

                if (response.IsSuccessStatusCode)
                {
                    var responseContent = response.Content; 

                    // by calling .Result you are synchronously reading the result
                    responseString = responseContent.ReadAsStringAsync().Result;

                    
                }
            }
           
            richTextBox1.Text =
                responseString;
            //init ability list
            {
                for (int i = 0; i < abilityNames.Length; i++)
                {
                    AbilityList.Add(new AbilityClass() { Name = abilityNames[i], Path = ConvertString(abilityPaths[i]) });
                }
                foreach (AbilityClass ability in AbilityList)
                {
                    Console.WriteLine(ability.Name + " " + ability.Path);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox1.Items.Add(ability.Name);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox2.Items.Add(ability.Name);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox3.Items.Add(ability.Name);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox4.Items.Add(ability.Name);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox5.Items.Add(ability.Name);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox6.Items.Add(ability.Name);
                }

                foreach (AbilityClass ability in AbilityList)
                {
                    comboBox7.Items.Add(ability.Name);
                }
                comboBox1.SelectedIndex = 0;
                comboBox2.SelectedIndex = 0;
                comboBox3.SelectedIndex = 0;
                comboBox4.SelectedIndex = 0;
                comboBox5.SelectedIndex = 0;
                comboBox6.SelectedIndex = 0;
                comboBox7.SelectedIndex = 0;
            }
            Console.WriteLine("Loaded");
            Console.WriteLine("Save file path: " + SaveFilePath);



        }
        [DllImport("kernel32.dll",
            EntryPoint = "AllocConsole",
            SetLastError = true,
            CharSet = CharSet.Auto,
            CallingConvention = CallingConvention.StdCall)]
        private static extern int AllocConsole();

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[0] = AbilityList[comboBox1.SelectedIndex].Path;
        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[1] = AbilityList[comboBox2.SelectedIndex].Path;
        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[2] = AbilityList[comboBox3.SelectedIndex].Path;
        }

        private void comboBox6_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[3] = AbilityList[comboBox6.SelectedIndex].Path;
        }

        private void comboBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[4] = AbilityList[comboBox5.SelectedIndex].Path;
        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[5] = AbilityList[comboBox4.SelectedIndex].Path;
        }

        private void button1_Click(object sender, EventArgs e)
        {

            var data = SaveGameFile.LoadFrom(SaveFilePath);
            var loadout = data.Root.Fields["SavedLoadoutAbilities"] as FArrayProperty;
            int i = 0;
            foreach (var slot in loadout.Elements)
            {
                var fsp = slot as FStructProperty;
                fsp?.Fields["AbilityClass"]?.SetValue(LoadoutPaths[i]);
                i++;
            }
            
            data.Save(SaveFilePath);
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void comboBox7_SelectedIndexChanged(object sender, EventArgs e)
        {
            LoadoutPaths[6] = AbilityList[comboBox7.SelectedIndex].Path;
        }
    }
}