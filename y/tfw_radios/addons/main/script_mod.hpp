// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX y
#define PREFIX tfw_radios

// TODO: Consider Mod-wide or Component-narrow versions  (or both, depending on wishes!)
// We will use the DATE for the BUILD# in the format YYMMDD - VM
#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.94
#define REQUIRED_CBA_VERSION {3,8,0}
