#include "script_component.hpp"

/*
  Name: tfw_radios_ilbe_fnc_init

  Author: Grezvany13
    Includes addAction for changing the antennas when ACE Interact is not available.

  Arguments:
    None

  Return Value:
    None

  Example:
    call tfw_radios_ilbe_fnc_init;

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
    // If ACE isn't present, use regular AddAction to exchange the antennas

    // Extend Whip Antenna
    player addAction [
        "Extend Whip Antenna",
        "_this call tfw_radios_ilbe_fnc_extendWhip",
        [],
        1.5,
        false,
        true,
        "",
        "_return = _this call tfw_radios_ilbe_fnc_canExtendWhip; _return",
        -1,
        false,
        "",
        ""
    ];

    // Retract Whip Antenna
    player addAction [
        "Retract Whip Antenna",
        "_this call tfw_radios_ilbe_fnc_retractWhip",
        [],
        1.5,
        false,
        true,
        "",
        "_return = _this call tfw_radios_ilbe_fnc_canRetractWhip; _return",
        -1,
        false,
        "",
        ""
    ];

    // Exchange to Whip Antenna
    player addAction [
        "Exchange to Whip Antenna",
        "_this call tfw_radios_ilbe_fnc_addWhip",
        [],
        1.5,
        false,
        true,
        "",
        "_return = _this call tfw_radios_ilbe_fnc_canAddWhip; _return",
        -1,
        false,
        "",
        ""
    ];

    // Exchange to VHF Blade Antenna
    player addAction [
        "Exchange to VHF Blade Antenna",
        "_this call tfw_radios_ilbe_fnc_addBlade",
        [],
        1.5,
        false,
        true,
        "",
        "_return = _this call tfw_radios_ilbe_fnc_canAddBlade; _return",
        -1,
        false,
        "",
        ""
    ];

    // Exchange to VHF/ UHF Antenna
    player addAction [
        "Exchange to VHF/ UHF Antenna",
        "_this call tfw_radios_ilbe_fnc_addDD",
        [],
        1.5,
        false,
        true,
        "",
        "_return = _this call tfw_radios_ilbe_fnc_canAddDD; _return",
        -1,
        false,
        "",
        ""
    ];
};
