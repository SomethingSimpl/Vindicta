#include "common.h"

/*
OOP class for one civilian.
First create a civilian unit/agent, then create this object and attach it to this unit.
*/

#define pr private

#define CIV_VAR_NAME "__civ"

#define OOP_CLASS_NAME Civilian
CLASS("Civilian", "GOAP_Agent")

	VARIABLE("hO");
	VARIABLE("AI");

	METHOD(new)
		params [P_THISOBJECT, P_OBJECT("_civObjectHandle"), P_OOP_OBJECT("_civPresence")];

		OOP_INFO_1("NEW: %1", _civObjectHandle);

		if (isNull _civObjectHandle) then {
			OOP_ERROR_0("Passed object handle is null!");
		};

		T_SETV("hO", _civObjectHandle);

		// Mark object
		_hO setVariable [CIV_VAR_NAME, _thisObject];

		// Create AI
		pr _AI = NEW("AIUnitCivilian", [_thisObject ARG _civPresence]);
		T_SETV("AI", _AI);
		CALLM0(_AI, "start");
	ENDMETHOD;

	METHOD(delete)
		params [P_THISOBJECT];

		OOP_INFO_0("DELETE");

		DELETE(T_GETV("AI"));

		pr _hO = T_GETV("hO");
		deleteVehicle _hO;
	ENDMETHOD;

	/* override */ METHOD(getAI)
		params [P_THISOBJECT];
		T_GETV("AI")
	ENDMETHOD;

	/* override */ METHOD(getSubagents)
		params [P_THISOBJECT];
		[]
	ENDMETHOD;

	METHOD(getObjectHandle)
		params [P_THISOBJECT];
		T_GETV("hO")
	ENDMETHOD;

	STATIC_METHOD(getCivilianFromObjectHandle)
		params [P_THISOBJECT, P_OBJECT("_hO")];

		_hO getVariable [CIV_VAR_NAME, NULL_OBJECT];
	ENDMETHOD;

ENDCLASS;