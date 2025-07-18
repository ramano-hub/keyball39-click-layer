# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes        # Split common
ENCODER_ENABLE = yes        # Encoder
OLED_ENABLE = no            # OLED display
OLED_DRIVER = SSD1306       # OLED driver
LTO_ENABLE = yes            # Link Time Optimization
API_SYSEX_ENABLE = no       # System exclusive
SPACE_CADET_ENABLE = no     # Space Cadet
GRAVE_ESC_ENABLE = no       # Grave escape
MAGIC_ENABLE = no           # Magic
MUSIC_ENABLE = no           # Music
AUTO_SHIFT_ENABLE = no      # Auto shift
SERIAL_DRIVER = bitbang

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/keyball/keyball.c \
        ./lib/keyball/oled_handler.c \
        ./lib/keyball/pmw3360_driver.c

# Build with Link Time Optimization
LTO_ENABLE = yes

# Build with VIAL enabled
VIAL_ENABLE = yes
VIAL_INSECURE = yes

# Build with VIA enabled
VIA_ENABLE = yes

# Build with OLED display
OLED_ENABLE = yes

# Build with encoder enabled
ENCODER_ENABLE = yes

# Build with RGB underglow enabled
RGBLIGHT_ENABLE = yes
