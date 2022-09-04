addMissionEventHandler ["EntityCreated", {
	params ["_entity"];
	if!(_entity isKindOf "man")
	exitwith{
		if (_entity isKindOf "land"
		|| _entity isKindOf "air") 
		then {[_entity] call SFSM_fnc_vehicleFiredEh};
	};
	
	[_entity] call SFSM_fnc_initMan;
	"Unit spawned in" call dbgmsg;
}];

addMissionEventHandler ["GroupCreated", {
	params ["_group"];
	[_group] call SFSM_fnc_initGroup;
	"Group spawned in" call dbgmsg;
}];

addMissionEventHandler ["GroupDeleted", {
	params ["_group"];
	"Group deleted" call dbgmsg;
}];