class CBA_Extended_EventHandlers;

class CfgVehicles {

    #include "CfgVehicles_Man.hpp"

	class TFAR_Bag_Base;

    class tfw_ilbe_Base: TFAR_Bag_Base {
        author = "Raspu";
        scope = 0;  // private
        scopeCurator = 0;
		scopeArsenal = 0;
        editorPreview = "";
        model = "\y\tfw_radios\addons\ilbe\data\model\tfw_ilbe.p3d";
        hiddenSelections[] = {"camo"};
		maximumLoad = 240;
		mass = 80;
		isbackpack = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 0;
    };

    #include "CfgVehicles_ilbe_whip.hpp"
    #include "CfgVehicles_ilbe_whipext.hpp"
    #include "CfgVehicles_ilbe_DD.hpp"
    #include "CfgVehicles_ilbe_blade.hpp"

    #include "CfgVehicles_items.hpp"
};
