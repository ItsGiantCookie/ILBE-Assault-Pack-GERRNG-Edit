#include "script_component.hpp"

/*
  Name: tfw_radios_rf3080_fnc_place

  Author: Grezvany13
    Places the SATCOM antenna in front of the unit

  Arguments:
    0: _unit    <OBJECT>    The unit which places the SATCOM antenna
    1: _rf3080  <OBJECT>    The SATCOM antenna object (item)

  Return Value:
    None

  Example:
    [player, 'tfw_rf3080Item'] call tfw_radios_rf3080_fnc_place;

  Public: No
*/

params ["_unit", "_AntennaClass"];

_unit removeItem _AntennaClass;

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    params ["_unit"];

    private ["_direction", "_position", "_rf3080","_trg"];
    _direction = getDir _unit;
    _position = (getPosASL _unit) vectorAdd [0.8 * sin(_direction), 0.8 * cos(_direction), 0.02];

	//how to handle if object moved?
    _rf3080 = "tfw_rf3080Object" createVehicle [0, 0, 0];
    _rf3080 setDir _direction;
    _rf3080 setPosASL _position;
    if ((getPosATL _rf3080 select 2) - (getPos _rf3080 select 2) < 1E-5) then {
        _rf3080 setVectorUp (surfaceNormal (position _rf3080));
    };
    _unit reveal _rf3080;

    // add Pickup AddAction
    if (!isClass(configFile >> "CfgPatches" >> "ace_interact_menu")) then {
        // If ACE isn't present, use regular AddAction to place/pickup SATCOM

        // Place SATCOM Antenna
        _rf3080 addAction [
            "Pickup SATCOM Antenna",
            "params ['_target', '_caller', '_actionId', '_arguments']; [_caller, _target] call tfw_radios_rf3080_fnc_pickup",
            [],
            1.5,
            false,
            true,
            "",
            "true",
            5,
            false,
            "",
            ""
        ];
    };

	//rf3080trigger = createTrigger ["EmptyDetector", getPos _rf3080];
	//rf3080trigger setTriggerArea [5, 5, 0, true];

	//To do: How to handle side?
	//rf3080trigger setTriggerActivation ["ANY", "PRESENT", true];
	//rf3080trigger setTriggerStatements ["this", "player setVariable ['tf_sendingDistanceMultiplicator', 1.5]", "player setVariable //['tf_sendingDistanceMultiplicator', 1.0]"];

	//rf3080placed = true;

	/*setVariable [format ["rf3080placed_%1", 1, true]];

	while {rf3080placed_%1 true} do {
		_dist=player distance _rf3080;
		if (_dist < 6) then {
			player setVariable ['tf_sendingDistanceMultiplicator', 1.5];
			}
		else { player setVariable ['tf_sendingDistanceMultiplicator', 1.0];
		};
	};*/

}, [_unit], 1, 0] call cba_fnc_waitAndExecute;
