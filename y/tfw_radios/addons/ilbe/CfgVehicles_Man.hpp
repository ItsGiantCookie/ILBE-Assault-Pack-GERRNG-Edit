class Man;
class CAManBase: Man {
    class ACE_SelfActions {
        class ACE_Equipment {
            class extend_antenna {
                displayName = "Extend Whip Antenna";
                condition = QUOTE(call FUNC(canExtendWhip));
                exceptions[] =  {"isNotDragging", "isNotSwimming", "notOnMap", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement = QUOTE(call FUNC(extendWhip));
                icon = "\y\tfw_radios\addons\ilbe\data\icons\interact_icon.paa";
                showDisabled = 0;
            };
            class retract_antenna {
                displayName = "Retract Whip Antenna";
                condition =  QUOTE(call FUNC(canRetractWhip));
                exceptions[] =  {"isNotDragging", "isNotSwimming", "notOnMap", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement =  QUOTE(call FUNC(retractWhip));
                icon = "\y\tfw_radios\addons\ilbe\data\icons\interact_icon.paa";
                showDisabled = 0;
            };

            class exchange_whip {
                displayName = "Exchange to Whip Antenna";
                condition =  QUOTE(call FUNC(canAddWhip));
                exceptions[] =  {"isNotDragging", "isNotSwimming", "notOnMap", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement =  QUOTE(call FUNC(addWhip));
                icon = "\y\tfw_radios\addons\ilbe\data\icons\interact_icon.paa";
                showDisabled = 0;
            };
            class exchange_blade {
                displayName = "Exchange to VHF Blade Antenna";
                condition =  QUOTE(call FUNC(canAddBlade));
                exceptions[] =  {"isNotDragging", "isNotSwimming", "notOnMap", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement =  QUOTE(call FUNC(addBlade));
                icon = "\y\tfw_radios\addons\ilbe\data\icons\interact_icon.paa";
                showDisabled = 0;
            };
            class exchange_dd {
                displayName = "Exchange to VHF/ UHF Antenna";
                condition =  QUOTE(call FUNC(canAddDD));
                exceptions[] =  {"isNotDragging", "isNotSwimming", "notOnMap", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement =  QUOTE(call FUNC(addDD));
                icon = "\y\tfw_radios\addons\ilbe\data\icons\interact_icon.paa";
                showDisabled = 0;
            };
        };
    };
};
