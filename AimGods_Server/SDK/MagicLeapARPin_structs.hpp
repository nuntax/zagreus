#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMagicLeapAutoPinType : uint8
{
	OnlyOnDataRestoration          = 0,
	Always                         = 1,
	Never                          = 2,
	EMagicLeapAutoPinType_MAX      = 3,
};

enum class EMagicLeapPassableWorldError : uint8
{
	None                           = 0,
	LowMapQuality                  = 1,
	UnableToLocalize               = 2,
	Unavailable                    = 3,
	PrivilegeDenied                = 4,
	InvalidParam                   = 5,
	UnspecifiedFailure             = 6,
	PrivilegeRequestPending        = 7,
	EMagicLeapPassableWorldError_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


