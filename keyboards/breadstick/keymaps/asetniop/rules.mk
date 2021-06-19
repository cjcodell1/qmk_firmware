VIRTSER_ENABLE      =   no
NKRO_ENABLE         =   no
DEBOUNCE_TYPE       =   eager_pr

# Lets try and save some space eh?
MOUSEKEY_ENABLE     =   no
EXTRAKEY_ENABLE     =   no
CONSOLE_ENABLE      =   yes
COMMAND_ENABLE      =   no

SRC                 +=  engine.c config_engine.c
OPT_DEFS            +=  -DONLYQWERTY 
LTO_ENABLE          =   yes
