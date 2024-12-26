#define MODIFIERKEY_CTRL 0x01
#define MODIFIERKEY_SHIFT 0x02
#define MODIFIERKEY_ALT 0x04
#define MODIFIERKEY_GUI 0x08
#define MODIFIERKEY_LEFT_CTRL 0x01
#define MODIFIERKEY_LEFT_SHIFT 0x02
#define MODIFIERKEY_LEFT_ALT 0x04
#define MODIFIERKEY_LEFT_GUI 0x08
#define MODIFIERKEY_RIGHT_CTRL 0x10
#define MODIFIERKEY_RIGHT_SHIFT 0x20
#define MODIFIERKEY_RIGHT_ALT 0x40
#define MODIFIERKEY_RIGHT_GUI 0x80
#define MODIFIERKEY_RIGHT_ALT_AND_LEFT_SHIFT 0x42
#define KEY_MEDIA_VOLUME_INC 0x80
#define KEY_MEDIA_VOLUME_DEC 0x81
#define KEY_MEDIA_MUTE 0x7F
#define KEY_MEDIA_PLAY_PAUSE 0x08
#define KEY_MEDIA_NEXT_TRACK 0x10
#define KEY_MEDIA_PREV_TRACK 0x20
#define KEY_A 4
#define KEY_B 5
#define KEY_C 6
#define KEY_D 7
#define KEY_E 8
#define KEY_F 9
#define KEY_G 10
#define KEY_H 11
#define KEY_I 12
#define KEY_J 13
#define KEY_K 14
#define KEY_L 15
#define KEY_M 16
#define KEY_N 17
#define KEY_O 18
#define KEY_P 19
#define KEY_Q 20
#define KEY_R 21
#define KEY_S 22
#define KEY_T 23
#define KEY_U 24
#define KEY_V 25
#define KEY_W 26
#define KEY_X 27
#define KEY_Y 28
#define KEY_Z 29
#define KEY_1 30
#define KEY_2 31
#define KEY_3 32
#define KEY_4 33
#define KEY_5 34
#define KEY_6 35
#define KEY_7 36
#define KEY_8 37
#define KEY_9 38
#define KEY_0 39
#define KEY_ENTER 40
#define KEY_ESC 41
#define KEY_BACKSPACE 42
#define KEY_TAB 43
#define KEY_SPACE 44
#define KEY_MINUS 45
#define KEY_EQUAL 46
#define KEY_LEFT_BRACE 47
#define KEY_RIGHT_BRACE 48
#define KEY_BACKSLASH 49
#define KEY_NON_US_NUM 50
#define KEY_SEMICOLON 51
#define KEY_QUOTE 52
#define KEY_TILDE 53
#define KEY_COMMA 54
#define KEY_PERIOD 55
#define KEY_SLASH 56
#define KEY_CAPS_LOCK 57
#define KEY_F1 58
#define KEY_F2 59
#define KEY_F3 60
#define KEY_F4 61
#define KEY_F5 62
#define KEY_F6 63
#define KEY_F7 64
#define KEY_F8 65
#define KEY_F9 66
#define KEY_F10 67
#define KEY_F11 68
#define KEY_F12 69
#define KEY_PRINTSCREEN 70
#define KEY_SCROLL_LOCK 71
#define KEY_PAUSE 72
#define KEY_INSERT 73
#define KEY_HOME 74
#define KEY_PAGEUP 75
#define KEY_DELETE 76
#define KEY_END 77
#define KEY_PAGEDOWN 78
#define KEY_RIGHT 79
#define KEY_LEFT 80
#define KEY_DOWN 81
#define KEY_UP 82
#define KEY_NUM_LOCK 83
#define KEYPAD_SLASH 84
#define KEYPAD_ASTERIX 85
#define KEYPAD_MINUS 86
#define KEYPAD_PLUS 87
#define KEYPAD_ENTER 88
#define KEYPAD_EQUALS 103
#define KEYPAD_1 89
#define KEYPAD_2 90
#define KEYPAD_3 91
#define KEYPAD_4 92
#define KEYPAD_5 93
#define KEYPAD_6 94
#define KEYPAD_7 95
#define KEYPAD_8 96
#define KEYPAD_9 97
#define KEYPAD_0 98
#define KEYPAD_PERIOD 99
#define KEY_APP 0x65
#define KEY_POWER 0x66
#define KEY_EXE 0x74
#define KEY_HELP 0x75
#define KEY_MENU 0x76
#define KEY_SELECT 0x77
#define KEY_STOP 0x78
#define KEY_AGAIN 0x79
#define KEY_UNDO 0x7A
#define KEY_CUT 0x7B
#define KEY_COPY 0x7C
#define KEY_PASTE 0x7D
#define KEY_FIND 0x7E
#define KEY_SYSTEM_POWER 0x81
#define KEY_SYSTEM_SLEEP 0x82
#define KEY_SYSTEM_WAKE 0x83
#define KEYPAD_PIPE 0xC9
#define KEY_LEFT_CTRL 0xE0
#define KEY_LEFT_SHIFT 0xE1
#define KEY_LEFT_ALT 0xE2
#define KEY_LEFT_GUI 0xE3
#define KEY_COMMAND 0xE3
#define KEY_RIGHT_CTRL 0xE4
#define KEY_RIGHT_SHIFT 0xE5
#define KEY_RIGHT_ALT 0xE6
#define KEY_RIGHT_GUI 0xE7
#define KEY_NON_US_100 100
#define ASCII_09 KEY_TAB
#define ASCII_0A KEY_ENTER
#define ASCII_20 KEY_SPACE
#define ASCII_21 KEY_SLASH
#define ASCII_22 KEY_3
#define ASCII_23 KEY_3, MODIFIERKEY_RIGHT_ALT
#define ASCII_24 KEY_RIGHT_BRACE
#define ASCII_25 KEY_QUOTE, MODIFIERKEY_SHIFT
#define ASCII_26 KEY_1
#define ASCII_27 KEY_4
#define ASCII_28 KEY_5
#define ASCII_29 KEY_MINUS
#define ASCII_2A KEY_BACKSLASH
#define ASCII_2B KEY_EQUAL, MODIFIERKEY_SHIFT
#define ASCII_2C KEY_M
#define ASCII_2D KEY_6
#define ASCII_2E KEY_COMMA, MODIFIERKEY_SHIFT
#define ASCII_2F KEY_PERIOD, MODIFIERKEY_SHIFT
#define ASCII_30 KEY_0, MODIFIERKEY_SHIFT
#define ASCII_31 KEY_1, MODIFIERKEY_SHIFT
#define ASCII_32 KEY_2, MODIFIERKEY_SHIFT
#define ASCII_33 KEY_3, MODIFIERKEY_SHIFT
#define ASCII_34 KEY_4, MODIFIERKEY_SHIFT
#define ASCII_35 KEY_5, MODIFIERKEY_SHIFT
#define ASCII_36 KEY_6, MODIFIERKEY_SHIFT
#define ASCII_37 KEY_7, MODIFIERKEY_SHIFT
#define ASCII_38 KEY_8, MODIFIERKEY_SHIFT
#define ASCII_39 KEY_9, MODIFIERKEY_SHIFT
#define ASCII_3A KEY_PERIOD
#define ASCII_3B KEY_COMMA
#define ASCII_3C KEY_NON_US_100
#define ASCII_3D KEY_EQUAL
#define ASCII_3E KEY_NON_US_100, MODIFIERKEY_SHIFT
#define ASCII_3F KEY_M, MODIFIERKEY_SHIFT
#define ASCII_40 KEY_0, MODIFIERKEY_RIGHT_ALT
#define ASCII_41 KEY_Q, MODIFIERKEY_SHIFT
#define ASCII_42 KEY_B, MODIFIERKEY_SHIFT
#define ASCII_43 KEY_C, MODIFIERKEY_SHIFT
#define ASCII_44 KEY_D, MODIFIERKEY_SHIFT
#define ASCII_45 KEY_E, MODIFIERKEY_SHIFT
#define ASCII_46 KEY_F, MODIFIERKEY_SHIFT
#define ASCII_47 KEY_G, MODIFIERKEY_SHIFT
#define ASCII_48 KEY_H, MODIFIERKEY_SHIFT
#define ASCII_49 KEY_I, MODIFIERKEY_SHIFT
#define ASCII_4A KEY_J, MODIFIERKEY_SHIFT
#define ASCII_4B KEY_K, MODIFIERKEY_SHIFT
#define ASCII_4C KEY_L, MODIFIERKEY_SHIFT
#define ASCII_4D KEY_SEMICOLON, MODIFIERKEY_SHIFT
#define ASCII_4E KEY_N, MODIFIERKEY_SHIFT
#define ASCII_4F KEY_O, MODIFIERKEY_SHIFT
#define ASCII_50 KEY_P, MODIFIERKEY_SHIFT
#define ASCII_51 KEY_A, MODIFIERKEY_SHIFT
#define ASCII_52 KEY_R, MODIFIERKEY_SHIFT
#define ASCII_53 KEY_S, MODIFIERKEY_SHIFT
#define ASCII_54 KEY_T, MODIFIERKEY_SHIFT
#define ASCII_55 KEY_U, MODIFIERKEY_SHIFT
#define ASCII_56 KEY_V, MODIFIERKEY_SHIFT
#define ASCII_57 KEY_Z, MODIFIERKEY_SHIFT
#define ASCII_58 KEY_X, MODIFIERKEY_SHIFT
#define ASCII_59 KEY_Y, MODIFIERKEY_SHIFT
#define ASCII_5A KEY_W, MODIFIERKEY_SHIFT
#define ASCII_5B KEY_5, MODIFIERKEY_RIGHT_ALT
#define ASCII_5C KEY_8, MODIFIERKEY_RIGHT_ALT
#define ASCII_5D KEY_MINUS, MODIFIERKEY_RIGHT_ALT
#define ASCII_5E KEY_9, MODIFIERKEY_RIGHT_ALT
#define ASCII_5F KEY_8
#define ASCII_60 KEY_7, MODIFIERKEY_RIGHT_ALT
#define ASCII_61 KEY_Q
#define ASCII_62 KEY_B
#define ASCII_63 KEY_C
#define ASCII_64 KEY_D
#define ASCII_65 KEY_E
#define ASCII_66 KEY_F
#define ASCII_67 KEY_G
#define ASCII_68 KEY_H
#define ASCII_69 KEY_I
#define ASCII_6A KEY_J
#define ASCII_6B KEY_K
#define ASCII_6C KEY_L
#define ASCII_6D KEY_SEMICOLON
#define ASCII_6E KEY_N
#define ASCII_6F KEY_O
#define ASCII_70 KEY_P
#define ASCII_71 KEY_A
#define ASCII_72 KEY_R
#define ASCII_73 KEY_S
#define ASCII_74 KEY_T
#define ASCII_75 KEY_U
#define ASCII_76 KEY_V
#define ASCII_77 KEY_Z
#define ASCII_78 KEY_X
#define ASCII_79 KEY_Y
#define ASCII_7A KEY_W
#define ASCII_7B KEY_4, MODIFIERKEY_RIGHT_ALT
#define ASCII_7C KEY_6, MODIFIERKEY_RIGHT_ALT
#define ASCII_7D KEY_EQUAL, MODIFIERKEY_RIGHT_ALT
#define ASCII_7E KEY_2, MODIFIERKEY_RIGHT_ALT
#define ASCII_7F KEY_BACKSPACE
#define ISO_8859_1_A0 KEY_SPACE
#define ISO_8859_1_A3 KEY_RIGHT_BRACE, MODIFIERKEY_SHIFT
#define ISO_8859_1_A4 KEY_RIGHT_BRACE, MODIFIERKEY_RIGHT_ALT
#define ISO_8859_1_A7 KEY_SLASH, MODIFIERKEY_SHIFT
#define ISO_8859_1_B0 KEY_MINUS, MODIFIERKEY_SHIFT
#define ISO_8859_1_B2 KEY_TILDE
#define ISO_8859_1_B5 KEY_BACKSLASH, MODIFIERKEY_SHIFT
#define ISO_8859_1_E0 KEY_0
#define ISO_8859_1_E7 KEY_9
#define ISO_8859_1_E8 KEY_7
#define ISO_8859_1_E9 KEY_2
#define ISO_8859_1_F9 KEY_COMMA
#define UNICODE_20AC KEY_E, MODIFIERKEY_RIGHT_ALT