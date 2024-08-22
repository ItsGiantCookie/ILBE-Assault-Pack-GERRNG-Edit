/*
  Name: tfw_radios_rf3080_fnc_distanceMultiplicator

  Author: Grezvany13
    Set distance multiplicator (booster) when player is within 5 meters of SATCOM

  Arguments:
    None

  Return Value:
    None

  Example:
    call tfw_radios_rf3080_fnc_distanceMultiplicator;

  Public: No
*/

[{
    private _object = getPos player nearestObject "tfw_rf3080Object";
    if ((_object distance player) < 6) then {
		player setVariable ['tf_sendingDistanceMultiplicator', 4, true];
	} else {
        player setVariable ['tf_sendingDistanceMultiplicator', 1, true];
	};
	if (isNull _object) exitWith {
        (_this select 1) call CBA_fnc_removePerFrameHandler;
	};
}, 10] call CBA_fnc_addPerframeHandler;
