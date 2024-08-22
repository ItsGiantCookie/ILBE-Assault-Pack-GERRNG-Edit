/*
  Name: tfw_radios_ilbe_fnc_canAddBlade

  Author: Grezvany13
    Checks if it's possible to change the current backpack to the Blade Antenna variant

  Arguments:
    None

  Return Value:
    If it's possible to add the Blade Antenna. <BOOL>

  Example:
    call tfw_radios_ilbe_fnc_canAddBlade;

  Public: No
*/

private ["_backpack"];

_backpack = backpack player;
_return = false;

if (_backpack isKindOf "tfw_ilbe_Base") then {
    _currentBackpack = ((_backpack splitString "_") select [0,2]) joinString "_";
    _currentAntenna = (_backpack splitString "_") select 2;
    _currentColor = (_backpack splitString "_") select 3;

    _return = (_currentAntenna != "blade") && ("tfw_blade" in (items player + assignedItems player));
};

_return
