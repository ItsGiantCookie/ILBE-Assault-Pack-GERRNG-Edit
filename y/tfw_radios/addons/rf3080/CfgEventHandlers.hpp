class Extended_PreStart_EventHandlers {
	class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
	};
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = QUOTE(_this call COMPILE_FILE(XEH_init));
        };
    };
    class tfw_rf3080Object {
		class ADDON {
            init = QUOTE(_this call FUNC(distanceMultiplicator));
            // init = QUOTE(_this call ACE_dragging_fnc_initObject);   // no idea why though...
		};
	};
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
