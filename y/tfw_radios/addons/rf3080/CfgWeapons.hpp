class CfgWeapons {
    class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class tfw_rf3080Item: CBA_MiscItem {
		author = "Raspu";
        scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "SATCOM Antenna";
		descriptionShort = "RF-3080-AT001";
		model = "\y\tfw_radios\addons\rf3080\data\model\rf3080_item.p3d";
		picture = "\y\tfw_radios\addons\rf3080\data\icons\icon_rf3080.paa";
		// editorPreview = "\y\tfw_radios\addons\rf3080\data\editorui\rf3080.jpg";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 58;
		};
	};
};
