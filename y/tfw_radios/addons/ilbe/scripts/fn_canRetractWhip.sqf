/*
  Name: tfw_radios_ilbe_fnc_canRetractWhip

  Author: Grezvany13
    Checks if it's possible to change the current backpack to the retracted Whip Antenna variant

  Arguments:
    None

  Return Value:
    If it's possible to retract the Whip Antenna. <BOOL>

  Example:
    call tfw_radios_ilbe_fnc_canRetractWhip;

  Public: No
*/

private ["_backpack"];

_backpack = backpack player;
_return = false;

if (_backpack isKindOf "tfw_ilbe_Base") then {
    _currentBackpack = ((_backpack splitString "_") select [0,2]) joinString "_";
    _currentAntenna = (_backpack splitString "_") select 2;
    _currentColor = (_backpack splitString "_") select 3;

    _return = (_currentAntenna == "whipext");
};

_return
