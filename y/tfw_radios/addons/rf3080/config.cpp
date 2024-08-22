#include "script_component.hpp"

class CfgPatches {
	class ADDON {
        units[] = {
            "tfw_rf3080",
            "tfw_rf3080Object"
        };
		weapons[] = {
            "tfw_rf3080Item"
        };
		requiredVersion = 1.0;
		requiredAddons[] = {
            "tfw_radios_main"
        };
		author = "Raspu";
		version = 1.1;
		versionStr = "1.1";
		versionAr[] = {1,1,0};
	};
};

#include "CfgEventHandlers.hpp"

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "CfgFunctions.hpp"