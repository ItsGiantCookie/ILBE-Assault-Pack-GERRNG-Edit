class Item_Base_F;
class tfw_bladeItem: Item_Base_F {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "VHF Blade Antenna";
    model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_item.p3d";
    editorPreview = "";
    vehicleClass = "Items";
    class TransportItems {
        class tfw_blade {
            name = "tfw_blade";
            count = 1;
        };
    };
};
class tfw_ddItem: Item_Base_F {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "VHF/UHF Antenna";
    model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_item.p3d";
    editorPreview = "";
    vehicleClass = "Items";
    class TransportItems {
        class tfw_dd {
            name = "tfw_dd";
            count = 1;
        };
    };
};
class tfw_whipItem: Item_Base_F {
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "VHF Whip Antenna";
    model = "y\tfw_radios\addons\ilbe\data\model\antenna\tfw_ilbe_ant.p3d";
    editorPreview = "";
    vehicleClass = "Items";
    class TransportItems {
        class tfw_whip {
            name = "tfw_whip";
            count = 1;
        };
    };
};
