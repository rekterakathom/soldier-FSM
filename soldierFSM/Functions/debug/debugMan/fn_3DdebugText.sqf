params["_man"];
if(isPlayer _man)exitwith{};
//if man is in a vehicle
if!(typeOf (vehicle _man) isEqualTo typeOf _man)exitwith{};

private _3dPos          = (ASLToAGL getPosASL _man);
private _supp           = [(getSuppression _man), 2]  call ObjScan_fnc_Decimals;
private _rps            = [_man, "roundsPrSecond"]     call SFSM_fnc_unitData;
private _suppColor      = [_supp, 0.4, 0.4, 1];
private _sprinting      = _man getVariable ["SFSM_Sprinting", false];
private _unconscious    = _man getVariable ["ace_isunconscious", false];
private _injured        = (_man getVariable ["dam_ignore_injured0",false]);
private _supPos         = [(_3dPos # 0), (_3dPos # 1), ((_3dPos # 2) + 2.1)];
private _incPos         = [(_3dPos # 0), (_3dPos # 1), ((_3dPos # 2) + 1.9)];
private _selected       = SFSM_currentCurObj isEqualTo _man;
private _forcedMovement = [_man, "forcedMovement"] call SFSM_fnc_unitData;

/*
3D icons works in layers, the last one to be added is on the top.
Hence the most important should be called last.
*/
private _aimPos = ASLToAGL(aimPos _man);
private _eyePos = ASLToAGL(eyePos _man);
private _inFipo = [_man, "inFipo"] call SFSM_fnc_unitData;

if(_rps > 1)                   then{[_incPos, _suppColor, _rps] call SFSM_fnc_dbgTxtRPS;};
if(_supp > 0)                  then{[_supPos, _suppColor, _supp] call SFSM_fnc_dbgTxtSupression;};

if(_forcedMovement)            then{[_man] call SFSM_fnc_dbgTxtForcedMovement;};
if(_sprinting)                 then{[_aimPos] call SFSM_fnc_dbgTxtSprint;};
if(_inFipo)                    then{[_eyePos] call SFSM_fnc_dbgTxtFipo;};
if(_selected)                  then{[_man] call SFSM_fnc_dbgTxtSelectedMan;};

[_man, _supp] call SFSM_fnc_dbgTxtAction;

if(_excluded)                  exitWith{[_man]    call SFSM_fnc_dbgTxtExcluded;};
if(_unconscious)               exitWith{[_aimPos] call SFSM_fnc_dbgTxtUncon;};
if(_injured)                   exitWith{[_eyePos] call SFSM_fnc_dbgTxtInjured;};

private _marksmanInfo = [_man] call SFSM_fnc_dbgTxtMarksman;

true;