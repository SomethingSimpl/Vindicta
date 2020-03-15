#include "defineCommon.inc"

/*
    By: Jeroen Notenbomer

    Create dialogue based on given conversation ID.
	Check out https://github.com/Sparker95/Vindicta/wiki/Conversation-framework

	Input:
		_unit_1:
		_unit_2(optional):
		_dialogueSet_ids: String or Array, set of dialogues that will be used
		_node_id: The id of the conversation you want to start
		_script(optional): Code that needs to run at the end of the conversation
		_args(optional): arguments that will be feed to all scripts 
	Output:
		nil
*/

params[
	["_unit_1",objNull,[objNull]],
	["_unit_2",objNull,[objNull]],//optional
	["_dialogueSet_ids","",["",[]]],
	["_node_id","",[""]],
	["_end_script",{},[{}]],//optional
	["_conversation_args",[],[]]//optional
];

diag_log str ["create", _node_id];

if(isNull _unit_1)exitWith{};
if(isnull _unit_2)then {_unit_2 = _unit_1};

if(_dialogueSet_ids isEqualType "")then{_dialogueSet_ids = [_dialogueSet_ids]};

//search for dateSets that are going to be used
private _dialogueSets_registered = missionNamespace getVariable ["dialogue_dialogueSets",[]];
private _dialogueSets = [];
{
	_X params [["_dialogueSet_id_unit","",[""]]];
	{
		_x params ["_dialogueSet_id_registered","_dialogueSet_array"];
		if(tolower _dialogueSet_id_unit isEqualto tolower _dialogueSet_id_registered)exitWith{
			_dialogueSets pushBack _dialogueSet_array;
		};
	}forEach _dialogueSets_registered;

}forEach _dialogueSet_ids;

//find all default events in datasets
private _default_events = []; {_default_events set [_x, [{},[]]];}forEach EVENT_TYPES;
{
	private _dialogueSet = _x;
	{
		_x params [["_event",-1]];
		private _index  = DEFAULT_EVENT_TYPES find _event;
		if(_index != -1)then{
			_x params ["",["_script",{},[{}]],["_arg",[]]];
			_default_events set [_index, [_script,_arg]];
		};
	}forEach _dialogueSet;
}forEach _dialogueSets;

private _namespace = call CBA_fnc_createNamespace;
_namespace setVariable ["_dialogueSets",_dialogueSets];
_namespace setVariable ["_unit_1",_unit_1];
_namespace setVariable ["_unit_2",_unit_2];
_namespace setVariable ["_end_scripts",[[_end_script]]];
_namespace setVariable ["_conversation_args",_conversation_args];
_namespace setVariable ["_default_events",_default_events];
_namespace setVariable ["_events",_default_events];//temp until mainloop overwrite

private _namespaces = missionNamespace getVariable ["dialog_nameSpaces",[]];
_namespaces pushBack _namespace;
missionNamespace setVariable ["dialog_nameSpaces",_namespaces];

[_namespace,[_node_id,{},[]]] call pr0_fnc_dialogue_mainLoop;