#include "Events.h"
void Events::EventHandler(SDK::UObject *Object, SDK::UFunction *Function) {}
int Events::RegisterEvent(void *Callback, std::string ObjectName,
                          std::string FunctionName) {
  this->EventMap.ins
}
