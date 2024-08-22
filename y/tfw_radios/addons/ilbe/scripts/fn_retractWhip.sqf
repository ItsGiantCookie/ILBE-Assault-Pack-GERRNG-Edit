#include "script_component.hpp"

/*
  Name: tfw_radios_ilbe_fnc_retractWhip

  Author: Grezvany13
    Changes the current backpack to the retracted Whip Antenna variant

  Arguments:
    None

  Return Value:
    None

  Example:
    call tfw_radios_ilbe_fnc_retractWhip;

  Public: No
*/

private ["_backpack","_items","_mags"];

_backpack = backpack player;
_items = backpackItems player;
_mags = backpackMagazines player;

_currentBackpack = ((_backpack splitString "_") select [0,2]) joinString "_";
_currentAntenna = (_backpack splitString "_") select 2;
_currentColor = (_backpack splitString "_") select 3;

_newAntenna = "whip";
_newBackpack = [_currentBackpack, _newAntenna, _currentColor] joinString "_";

[_newBackpack, _newAntenna, _currentAntenna] call FUNC(changeRadioBackpack);
