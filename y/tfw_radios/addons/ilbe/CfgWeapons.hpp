class CfgWeapons {
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class tfw_blade: CBA_MiscItem {
		author = "Raspu";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_item_90.p3d";
		picture = "\y\tfw_radios\addons\ilbe\data\icons\icon_blade.paa";
		//editorPreview = "\y\tfw_radios\addons\ilbe\data\editorui\blade.jpg";
		displayName = "VHF Blade Antenna";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 10;
		};
	};
	class tfw_dd: CBA_MiscItem {
		author = "Raspu";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "y\tfw_radios\addons\ilbe\data\model\dd\tfw_dd_item_90.p3d";
		picture = "\y\tfw_radios\addons\ilbe\data\icons\icon_dd.paa";
		//editorPreview = "\y\tfw_radios\addons\ilbe\data\editorui\dd.jpg";
		displayName = "VHF/ UHF Antenna";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 10;
		};
	};
	class tfw_whip: CBA_MiscItem {
		author = "Raspu";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "y\tfw_radios\addons\ilbe\data\model\whip\tfw_whip_item_90.p3d";
		picture = "\y\tfw_radios\addons\ilbe\data\icons\icon_whip.paa";
		//editorPreview = "\y\tfw_radios\addons\ilbe\data\editorui\whip.jpg";
		displayName = "VHF Whip Antenna";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 10;
		};
	};
};
