#include "script_component.hpp"

class ACE_Arsenal_Stats {
    class statBase;
    class TFW_Radio: statBase {
        scope = 2;
        priority = 1;
        stats[] = {"tfw_radio"};
        displayName = "Radio";
        showText = 1;
        textStatement = "params ['_stat','_config']; private _radio = getText (_config >> _stat select 0); _radio";
        condition = "params ['_stat','_config']; isText (_config >> _stat select 0) && (getText (_config >> _stat select 0) != '')";
        tabs[] = {{12,5},{}};
    };
    class TFW_Antenna: statBase {
        scope = 2;
        priority = 1;
        stats[] = {"tfw_antenna"};
        displayName = "Antenna";
        showText = 1;
        textStatement = "params ['_stat','_config']; private _antenna = getText (_config >> _stat select 0); _antenna";
        condition = "params ['_stat','_config']; isText (_config >> _stat select 0) && (getText (_config >> _stat select 0) != '')";
        tabs[] = {{12,5},{}};
    };
};
