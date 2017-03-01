#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define FORCE_NKRO
#define PREVENT_STUCK_MODIFIERS
#define NO_ACTION_ONESHOT // temporarily to avoid "undefined reference to
                          //`has_oneshot_mods_timed_out'"

#undef TAPPING_TERM
#undef IGNORE_MOD_TAP_INTERRUPT

#endif
