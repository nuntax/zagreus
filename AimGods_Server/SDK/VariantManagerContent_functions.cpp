#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VariantManagerContent.LevelVariantSets
// (None)

class UClass* ULevelVariantSets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSets");

	return Clss;
}


// LevelVariantSets VariantManagerContent.Default__LevelVariantSets
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelVariantSets* ULevelVariantSets::GetDefaultObj()
{
	static class ULevelVariantSets* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelVariantSets*>(ULevelVariantSets::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariantSetName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariantSet*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVariantSet* ULevelVariantSets::GetVariantSetByName(const class FString& VariantSetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSetByName");

	Params::ULevelVariantSets_GetVariantSetByName_Params Parms{};

	Parms.VariantSetName = VariantSetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VariantSetIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariantSet*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVariantSet* ULevelVariantSets::GetVariantSet(int32 VariantSetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSet");

	Params::ULevelVariantSets_GetVariantSet_Params Parms{};

	Parms.VariantSetIndex = VariantSetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULevelVariantSets::GetNumVariantSets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetNumVariantSets");

	Params::ULevelVariantSets_GetNumVariantSets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VariantManagerContent.LevelVariantSetsActor
// (Actor)

class UClass* ALevelVariantSetsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSetsActor");

	return Clss;
}


// LevelVariantSetsActor VariantManagerContent.Default__LevelVariantSetsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelVariantSetsActor* ALevelVariantSetsActor::GetDefaultObj()
{
	static class ALevelVariantSetsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelVariantSetsActor*>(ALevelVariantSetsActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantSetName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariantName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ALevelVariantSetsActor::SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByName");

	Params::ALevelVariantSetsActor_SwitchOnVariantByName_Params Parms{};

	Parms.VariantSetName = VariantSetName;
	Parms.VariantName = VariantName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              VariantSetIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VariantIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByIndex");

	Params::ALevelVariantSetsActor_SwitchOnVariantByIndex_Params Parms{};

	Parms.VariantSetIndex = VariantSetIndex;
	Parms.VariantIndex = VariantIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*           InVariantSets                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SetLevelVariantSets");

	Params::ALevelVariantSetsActor_SetLevelVariantSets_Params Parms{};

	Parms.InVariantSets = InVariantSets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLoad                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelVariantSets*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "GetLevelVariantSets");

	Params::ALevelVariantSetsActor_GetLevelVariantSets_Params Parms{};

	Parms.bLoad = bLoad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// (None)

class UClass* ULevelVariantSetsFunctionDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSetsFunctionDirector");

	return Clss;
}


// LevelVariantSetsFunctionDirector VariantManagerContent.Default__LevelVariantSetsFunctionDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelVariantSetsFunctionDirector* ULevelVariantSetsFunctionDirector::GetDefaultObj()
{
	static class ULevelVariantSetsFunctionDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelVariantSetsFunctionDirector*>(ULevelVariantSetsFunctionDirector::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValue
// (None)

class UClass* UPropertyValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValue");

	return Clss;
}


// PropertyValue VariantManagerContent.Default__PropertyValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValue* UPropertyValue::GetDefaultObj()
{
	static class UPropertyValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValue*>(UPropertyValue::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.PropertyValue.HasRecordedData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPropertyValue::HasRecordedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "HasRecordedData");

	Params::UPropertyValue_HasRecordedData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UPropertyValue::GetPropertyTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "GetPropertyTooltip");

	Params::UPropertyValue_GetPropertyTooltip_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPropertyValue::GetFullDisplayString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "GetFullDisplayString");

	Params::UPropertyValue_GetFullDisplayString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VariantManagerContent.PropertyValueTransform
// (None)

class UClass* UPropertyValueTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueTransform");

	return Clss;
}


// PropertyValueTransform VariantManagerContent.Default__PropertyValueTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueTransform* UPropertyValueTransform::GetDefaultObj()
{
	static class UPropertyValueTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueTransform*>(UPropertyValueTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueVisibility
// (None)

class UClass* UPropertyValueVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueVisibility");

	return Clss;
}


// PropertyValueVisibility VariantManagerContent.Default__PropertyValueVisibility
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueVisibility* UPropertyValueVisibility::GetDefaultObj()
{
	static class UPropertyValueVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueVisibility*>(UPropertyValueVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueColor
// (None)

class UClass* UPropertyValueColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueColor");

	return Clss;
}


// PropertyValueColor VariantManagerContent.Default__PropertyValueColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueColor* UPropertyValueColor::GetDefaultObj()
{
	static class UPropertyValueColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueColor*>(UPropertyValueColor::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueMaterial
// (None)

class UClass* UPropertyValueMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueMaterial");

	return Clss;
}


// PropertyValueMaterial VariantManagerContent.Default__PropertyValueMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueMaterial* UPropertyValueMaterial::GetDefaultObj()
{
	static class UPropertyValueMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueMaterial*>(UPropertyValueMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueOption
// (None)

class UClass* UPropertyValueOption::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueOption");

	return Clss;
}


// PropertyValueOption VariantManagerContent.Default__PropertyValueOption
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueOption* UPropertyValueOption::GetDefaultObj()
{
	static class UPropertyValueOption* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueOption*>(UPropertyValueOption::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.SwitchActor
// (Actor)

class UClass* ASwitchActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitchActor");

	return Clss;
}


// SwitchActor VariantManagerContent.Default__SwitchActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ASwitchActor* ASwitchActor::GetDefaultObj()
{
	static class ASwitchActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwitchActor*>(ASwitchActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.SwitchActor.SelectOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OptionIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASwitchActor::SelectOption(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "SelectOption");

	Params::ASwitchActor_SelectOption_Params Parms{};

	Parms.OptionIndex = OptionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ASwitchActor::GetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "GetSelectedOption");

	Params::ASwitchActor_GetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.SwitchActor.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> ASwitchActor::GetOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "GetOptions");

	Params::ASwitchActor_GetOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VariantManagerContent.Variant
// (None)

class UClass* UVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Variant");

	return Clss;
}


// Variant VariantManagerContent.Default__Variant
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariant* UVariant::GetDefaultObj()
{
	static class UVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariant*>(UVariant::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.Variant.SwitchOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariant::SwitchOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SwitchOn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVariant::SetDisplayText(class FText& NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetDisplayText");

	Params::UVariant_SetDisplayText_Params Parms{};

	Parms.NewDisplayText = NewDisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetNumActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVariant::GetNumActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetNumActors");

	Params::UVariant_GetNumActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UVariant::GetDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDisplayText");

	Params::UVariant_GetDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.GetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ActorIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UVariant::GetActor(int32 ActorIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetActor");

	Params::UVariant_GetActor_Params Parms{};

	Parms.ActorIndex = ActorIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VariantManagerContent.VariantObjectBinding
// (None)

class UClass* UVariantObjectBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantObjectBinding");

	return Clss;
}


// VariantObjectBinding VariantManagerContent.Default__VariantObjectBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariantObjectBinding* UVariantObjectBinding::GetDefaultObj()
{
	static class UVariantObjectBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantObjectBinding*>(UVariantObjectBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.VariantSet
// (None)

class UClass* UVariantSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantSet");

	return Clss;
}


// VariantSet VariantManagerContent.Default__VariantSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariantSet* UVariantSet::GetDefaultObj()
{
	static class UVariantSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantSet*>(UVariantSet::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVariantSet::SetDisplayText(class FText& NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetDisplayText");

	Params::UVariantSet_SetDisplayText_Params Parms{};

	Parms.NewDisplayText = NewDisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetVariantByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariantName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariant*                    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVariant* UVariantSet::GetVariantByName(const class FString& VariantName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetVariantByName");

	Params::UVariantSet_GetVariantByName_Params Parms{};

	Parms.VariantName = VariantName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.VariantSet.GetVariant
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VariantIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariant*                    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVariant* UVariantSet::GetVariant(int32 VariantIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetVariant");

	Params::UVariantSet_GetVariant_Params Parms{};

	Parms.VariantIndex = VariantIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVariantSet::GetNumVariants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetNumVariants");

	Params::UVariantSet_GetNumVariants_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UVariantSet::GetDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetDisplayText");

	Params::UVariantSet_GetDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


