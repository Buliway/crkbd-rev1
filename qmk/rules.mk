LTO_ENABLE = yes
# Enables Link Time Optimization (LTO) when compiling the keyboard. This makes the process take longer, but it can significantly reduce the compiled size (and since the firmware is small, the added time is not noticeable).

MOUSEKEY_ENABLE = yes
# This gives you control over cursor movements and clicks via keycodes/custom functions.

EXTRAKEY_ENABLE = yes
# This allows you to use the system and audio control key codes.

NKRO_ENABLE = yes
# This allows the keyboard to tell the host OS that up to 248 keys are held down at once (default without NKRO is 6). NKRO is off by default, even if NKRO_ENABLE is set. NKRO can be forced by adding #define FORCE_NKRO to your config.h or by binding MAGIC_TOGGLE_NKRO to a key and then hitting the key.
# If this doesn’t work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work

RGBLIGHT_ENABLE = yes
# Enable keyboard underlight functionality

TAP_DANCE_ENABLE = yes
# Чтоб на нажатие клавиши было что-то одно, а на зажатие - другое. Называется TapDance

# TAPPING_TERM_PER_KEY = yes
# Я так понимаю это чтоб задавать задержку до срабатывания не одну на всю клавиатуру, а для каждой клавиши отдельно. https://docs.qmk.fm/#/tap_hold?id=tapping_term

BACKLIGHT_ENABLE = no
# This enables the in-switch LED backlighting. You can specify the backlight pin by putting this in your config.h: #define BACKLIGHT_PIN B7

MUSIC_ENABLE = no
# Не понял что это. В стоке включено. Пишут "This tranlates matrix positions into notes". Хз что это значит

OLED_ENABLE = no
# Чтоб OLED экраном на клавиатуре управлять

COMBO_ENABLE = no
# Key combo feature. https://docs.qmk.fm/#/feature_combo

KEY_OVERRIDE_ENABLE = no
# Enable the key override feature. https://docs.qmk.fm/#/feature_key_overrides

# LEADER_ENABLE = yes
# If you’re a Vim user, you probably know what a Leader key is. In contrast to Combos, the Leader key allows you to hit a sequence of up to five keys instead, which triggers some custom functionality once complete. https://docs.qmk.fm/#/feature_leader_key

# UNICODE_ENABLE = yes
# This allows you to send Unicode characters using UC(<code point>) in your keymap. Code points up to 0x7FFF are supported. This covers characters for most modern languages, as well as symbols, but it doesn’t cover emoji.

# UNICODEMAP_ENABLE = yes
# This allows you to send Unicode characters using UM(<map index>) in your keymap. You will need to maintain a mapping table in your keymap file. All possible code points (up to 0x10FFFF) are supported.

# UCIS_ENABLE = yes
# This allows you to send Unicode characters by inputting a mnemonic corresponding to the character you want to send. You will need to maintain a mapping table in your keymap file. All possible code points (up to 0x10FFFF) are supported. For further details, as well as limitations, see the Unicode page. https://docs.qmk.fm/#/feature_unicode

# KEY_LOCK_ENABLE = yes
# This enables key lock. https://docs.qmk.fm/#/feature_key_lock

# CUSTOM_MATRIX = ?
# Lets you replace the default matrix scanning routine with your own code. For further details, see the Custom Matrix page. https://docs.qmk.fm/#/custom_matrix

# DEBOUNCE_TYPE = ?
# Lets you replace the default key debouncing routine with an alternative one. If custom you will need to provide your own implementation.

# VARIABLE_TRACE = ?
# Use this to debug changes to variable values, see the tracing variables section of the Unit Testing page for more information.

# AUDIO_ENABLE = ?
# This allows you output audio on the C6 pin (needs abstracting). See the audio page for more information. https://docs.qmk.fm/#/feature_audio

# MIDI_ENABLE = ?
# This enables MIDI sending and receiving with your keyboard. To enter MIDI send mode, you can use the keycode MI_ON, and MI_OFF to turn it off. This is a largely untested feature, but more information can be found in the quantum/quantum.c file.

# SLEEP_LED_ENABLE = ?
# Enables your LED to breath while your computer is sleeping. Timer1 is being used here. This feature is largely unused and untested, and needs updating/abstracting.

# COMMAND_ENABLE = ?
# This enables magic commands, typically fired with the default magic key combo LSHIFT+RSHIFT+KEY. Magic commands include turning on debugging messages (MAGIC+D) or temporarily toggling NKRO (MAGIC+N).

# CONSOLE_ENABLE = ?
# This allows you to print messages that can be read using hid_listen https://www.pjrc.com/teensy/hid_listen.html

# BOOTMAGIC_ENABLE = ?
# This allows you to hold a key (usually Escape by default) to reset the EEPROM settings that persist over power loss and ready your keyboard to accept new firmware.

# MAGIC_ENABLE = ?
# Magic Keycodes are prefixed with MAGIC_, and allow you to access the functionality of the deprecated Bootmagic feature after your keyboard has initialized. To use the keycodes, assign them to your keymap as you would any other keycode. https://docs.qmk.fm/#/keycodes_magic

# DYNAMIC_TAPPING_TERM_ENABLE = ?
# Allows to configure the global tapping term on the fly.

# DEFERRED_EXEC_ENABLE = ?
# Enables deferred executor support – timed delays before callbacks are invoked. See https://docs.qmk.fm/#/custom_quantum_functions?id=deferred-execution for more information.

# NO_USB_STARTUP_CHECK = ?
# Disables usb suspend check after keyboard startup. Usually the keyboard waits for the host to wake it up before any tasks are performed. This is useful for split keyboards as one half will not get a wakeup call but must send commands to the master.

# SPLIT_KEYBOARD = ?
# This enables split keyboard support (dual MCU like the let’s split and bakingpy’s boards) and includes all necessary files located at quantum/split_common

# SPLIT_TRANSPORT = ?
# As there is no standard split communication driver for ARM-based split keyboards yet, SPLIT_TRANSPORT = custom must be used for these. It will prevent the standard split keyboard communication code (which is AVR-specific) from being included, allowing a custom implementation to be used.

# RING_BUFFERED_6KRO_REPORT_ENABLE = ?
# USB 6-Key Rollover - Instead of stopping any new input once 6 keys are pressed, the oldest key is released and the new key is pressed.

# BLUETOOTH_ENABLE = ?
# Current options are bluefruit_le, rn42

# WAIT_FOR_USB = ?
# Forces the keyboard to wait for a USB connection to be established before it starts up
