#include "script_component.hpp"

/*
  Name: tfw_radios_rf3080_fnc_init

  Author: Grezvany13
    Includes addAction for changing the antennas when ACE Interact is not available.

  Arguments:
    None

  Return Value:
    None

  Example:
    call tfw_radios_rf3080_fnc_init;

  Public: No
*/

if (!local player) exitWith {false};
if(!hasInterface) exitWith {false};
if(isDedicated) exitWith {false};
waitUntil {!isNull player};
waitUntil {isPlayer player};

// fix in case this script is called before TFAR init
TFAR_currentUnit = call TFAR_fnc_currentUnit;

if (!isClass(configFile >> "CfgPatches" >> "ace_interact_menu")) then {
    // If ACE isn't present, use regular AddAction to place/pickup SATCOM

    // Place SATCOM Antenna
    player addAction [
        "Place SATCOM Antenna",
        "params ['_target', '_caller', '_actionId', '_arguments']; [_caller, 'tfw_rf3080Item'] call tfw_radios_rf3080_fnc_place",
        [],
        1.5,
        false,
        true,
        "",
        "'tfw_rf3080Item' in (items player + assignedItems player)",
        -1,
        false,
        "",
        ""
    ];
};
