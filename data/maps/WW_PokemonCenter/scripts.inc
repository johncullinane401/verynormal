# 1 "data/maps/WW_PokemonCenter/scripts.pory"
WW_PokemonCenter_MapScripts::
# 2 "data/maps/WW_PokemonCenter/scripts.pory"
	.byte 0

WW_PokemonCenter_EventScript_PC::
# 6 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 7 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_PC_Text_0
# 8 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_PC_Text_1
# 9 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return


WW_PokemonCenter_EventScript_Map::
# 13 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 14 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_Map_Text_0
# 15 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_Map_Text_1
# 16 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return


WW_PokemonCenter_EventScript_Bookshelf::
# 20 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 21 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return


WW_PC_Yan::
# 25 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 26 "data/maps/WW_PokemonCenter/scripts.pory"
	faceplayer
# 27 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_YAN_PC, WW_PC_Yan_2
# 41 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_8
WW_PC_Yan_1:
# 43 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_9
# 44 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DEFAULT_YAN, WW_PC_Yan_6
WW_PC_Yan_5:
# 48 "data/maps/WW_PokemonCenter/scripts.pory"
	faceplayer
# 49 "data/maps/WW_PokemonCenter/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/WW_PokemonCenter/scripts.pory"
	case 0, WW_PC_Yan_9
# 68 "data/maps/WW_PokemonCenter/scripts.pory"
	case 1, WW_PC_Yan_10
# 98 "data/maps/WW_PokemonCenter/scripts.pory"
	case 2, WW_PC_Yan_11
# 105 "data/maps/WW_PokemonCenter/scripts.pory"
	case 3, WW_PC_Yan_12
# 161 "data/maps/WW_PokemonCenter/scripts.pory"
	case 4, WW_PC_Yan_13
# 186 "data/maps/WW_PokemonCenter/scripts.pory"
	case 127, WW_PC_Yan_14
	return

WW_PC_Yan_2:
# 28 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_TO_YAN_PC
# 29 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_DEFAULT_YAN
# 30 "data/maps/WW_PokemonCenter/scripts.pory"
	setvar VAR_GIRL_OPTION, 1
# 31 "data/maps/WW_PokemonCenter/scripts.pory"
	setvar VAR_YOU_OPTION, 1
# 32 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_0
# 33 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_1
# 34 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_2
# 35 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_3
# 36 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_4
# 37 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_5
# 38 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_6
# 39 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_7
	goto WW_PC_Yan_1

WW_PC_Yan_6:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, WW_PC_Yan_Text_10, WW_PC_Yan_Text_11, WW_PC_Yan_Text_12, WW_PC_Yan_Text_13, WW_PC_Yan_Text_14
	goto WW_PC_Yan_5

WW_PC_Yan_9:
# 51 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD, WW_PC_Yan_16
# 56 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set FLAG_TALKED_BUSINESS_CARD, WW_PC_Yan_19
WW_PC_Yan_18:
# 63 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_22
WW_PC_Yan_15:
# 65 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 66 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_10:
# 69 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP, WW_PC_Yan_24
# 82 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set FLAG_TALKED_MAP, WW_PC_Yan_27
WW_PC_Yan_26:
# 93 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_22
WW_PC_Yan_23:
# 95 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 96 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_11:
# 99 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_40
# 100 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_41
# 101 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_42
# 102 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 103 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_12:
# 106 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 2
	goto_if_ge WW_PC_Yan_50
WW_PC_Yan_48:
# 109 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_ge WW_PC_Yan_47
WW_PC_Yan_45:
# 112 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_ge WW_PC_Yan_44
WW_PC_Yan_42:
# 115 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_ge WW_PC_Yan_41
WW_PC_Yan_40:
# 119 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 10
	goto_if_eq WW_PC_Yan_36
# 150 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 99
	goto_if_eq WW_PC_Yan_37
# 154 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_77
# 155 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
WW_PC_Yan_31:
# 158 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 159 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_13:
# 162 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_YOU_OPTION, 1
	goto_if_eq WW_PC_Yan_54
# 170 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_YOU_OPTION, 2
	goto_if_eq WW_PC_Yan_55
# 176 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_YOU_OPTION, 3
	goto_if_eq WW_PC_Yan_56
WW_PC_Yan_53:
# 183 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 184 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_14:
# 187 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_91
# 188 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_92
# 189 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 190 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_16:
# 52 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_15
# 53 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_16
# 54 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_17
# 55 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD
	goto WW_PC_Yan_15

WW_PC_Yan_17:
# 57 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_18
# 58 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_19
# 59 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_20
# 60 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_21
# 61 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD_2
	goto WW_PC_Yan_15

WW_PC_Yan_19:
# 56 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD_2, WW_PC_Yan_17
	goto WW_PC_Yan_18

WW_PC_Yan_24:
# 70 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_23
# 71 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_24
# 72 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_25
# 73 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_26
# 74 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_27
# 75 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_28
# 76 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_29
# 77 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_30
# 78 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_31
# 79 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_32
# 80 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_MAP
	goto WW_PC_Yan_23

WW_PC_Yan_25:
# 83 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_33
# 84 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_34
# 85 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_35
# 86 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_36
# 87 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_37
# 88 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_38
# 89 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_39
# 90 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_MAP_2
	goto WW_PC_Yan_23

WW_PC_Yan_27:
# 82 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP_2, WW_PC_Yan_25
	goto WW_PC_Yan_26

WW_PC_Yan_32:
# 107 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_43
# 108 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_31

WW_PC_Yan_33:
# 110 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_44
# 111 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_31

WW_PC_Yan_34:
# 113 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_45
# 114 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_31

WW_PC_Yan_35:
# 116 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_46
# 117 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_31

WW_PC_Yan_36:
# 120 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_47
# 121 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_48
# 122 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_49
# 123 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_50
# 124 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_51
# 125 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_52
# 126 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_53
# 127 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_54
# 128 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_55
# 129 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_56
# 130 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_57
# 131 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_58
# 132 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_59
# 133 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_60
# 134 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_61
# 135 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_62
# 136 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_63
# 137 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_64
# 138 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_65
# 139 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_66
# 140 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_67
# 141 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_68
# 142 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_69
# 143 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_70
# 144 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_71
# 145 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_72
# 146 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_73
# 147 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_74
# 148 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_75
# 149 "data/maps/WW_PokemonCenter/scripts.pory"
	setvar VAR_GIRL_OPTION, 99
	goto WW_PC_Yan_31

WW_PC_Yan_37:
# 151 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_22
# 152 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_76
	goto WW_PC_Yan_31

WW_PC_Yan_41:
# 115 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 10
	goto_if_lt WW_PC_Yan_35
	goto WW_PC_Yan_40

WW_PC_Yan_44:
# 112 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_lt WW_PC_Yan_34
	goto WW_PC_Yan_42

WW_PC_Yan_47:
# 109 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_lt WW_PC_Yan_33
	goto WW_PC_Yan_45

WW_PC_Yan_50:
# 106 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_lt WW_PC_Yan_32
	goto WW_PC_Yan_48

WW_PC_Yan_54:
# 163 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_78
# 164 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_79
# 165 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_80
# 166 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_81
# 167 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_82
# 168 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto WW_PC_Yan_53

WW_PC_Yan_55:
# 171 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_83
# 172 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_84
# 173 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_85
# 174 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_86
# 175 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto WW_PC_Yan_53

WW_PC_Yan_56:
# 177 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_87
# 178 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_88
# 179 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_89
# 180 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_90
# 181 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto WW_PC_Yan_53


# 199 "data/maps/WW_PokemonCenter/scripts.pory"
yanfaceright:
# 200 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	step_end

WW_PokemonCenter_EventScript_PC_Text_0:
# 7 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "The PC is turned off.$"

WW_PokemonCenter_EventScript_PC_Text_1:
# 8 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "There's a thick layer of dust\ncovering the keyboard.$"

WW_PokemonCenter_EventScript_Map_Text_0:
# 14 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It's a map of Earth.$"

WW_PokemonCenter_EventScript_Map_Text_1:
# 15 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...?$"

WW_PC_Yan_Text_0:
# 32 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Oh, hey, {PLAYER}.$"

WW_PC_Yan_Text_1:
# 33 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Good to see you again.$"

WW_PC_Yan_Text_2:
# 34 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm just taking a break from\ninvestigating.$"

WW_PC_Yan_Text_3:
# 35 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Every second I'm in this...'world'...$"

WW_PC_Yan_Text_4:
# 36 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I feel like my body is shutting down.$"

WW_PC_Yan_Text_5:
# 37 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm so tired...hah.$"

WW_PC_Yan_Text_6:
# 38 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'll be staying here for a bit...\nwhile I rest up.$"

WW_PC_Yan_Text_7:
# 39 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "In the meantime, I'd be happy to\ntalk to you.$"

WW_PC_Yan_Text_8:
# 41 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Hey, {PLAYER}.$"

WW_PC_Yan_Text_9:
# 43 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What'd you want to talk about?$"

WW_PC_Yan_Text_10:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Business Card$"

WW_PC_Yan_Text_11:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "This Place$"

WW_PC_Yan_Text_12:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "This World$"

WW_PC_Yan_Text_13:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Girl$"

WW_PC_Yan_Text_14:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You$"

WW_PC_Yan_Text_15:
# 52 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Ah, the card?$"

WW_PC_Yan_Text_16:
# 53 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "That's my special business card.$"

WW_PC_Yan_Text_17:
# 54 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It even has a watermark!$"

WW_PC_Yan_Text_18:
# 57 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Hm?$"

WW_PC_Yan_Text_19:
# 58 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What, still on the card?$"

WW_PC_Yan_Text_20:
# 59 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Yes, I know it's great.$"

WW_PC_Yan_Text_21:
# 60 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You've got good taste, my friend!$"

WW_PC_Yan_Text_22:
# 63 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(Seems there's nothing left to discuss.)$"

WW_PC_Yan_Text_23:
# 70 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "This place?$"

WW_PC_Yan_Text_24:
# 71 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, I'm sorry to say, I don't\nreally have an answer for you.$"

WW_PC_Yan_Text_25:
# 72 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But if I had to take a guess...hmm.$"

WW_PC_Yan_Text_26:
# 73 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, obviously, it resembles a\nPokemon Center.$"

WW_PC_Yan_Text_27:
# 74 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But, it's, uh, not, obviously.$"

WW_PC_Yan_Text_28:
# 75 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It doesn't seem dangerous or\nanything, though.$"

WW_PC_Yan_Text_29:
# 76 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Seems safe enough for taking a nap.$"

WW_PC_Yan_Text_30:
# 77 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "..oh! There is something interesting,\nactually.$"

WW_PC_Yan_Text_31:
# 78 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Why don't you take a look at the map?$"

WW_PC_Yan_Text_32:
# 79 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "The one on the wall, I mean.$"

WW_PC_Yan_Text_33:
# 83 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "See what I mean?$"

WW_PC_Yan_Text_34:
# 84 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It quite odd...it looks familiar,\nbut it's definitely not Hoenn.$"

WW_PC_Yan_Text_35:
# 85 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, if you were asking about this\ntown, I'm afraid I know even less.$"

WW_PC_Yan_Text_36:
# 86 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It's got a nostalgic vibe, I guess.\nIt's pretty cute.$"

WW_PC_Yan_Text_37:
# 87 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "God, I feel like I'm...missing\nsomething,y'know?$"

WW_PC_Yan_Text_38:
# 88 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Maybe if I hang out here longer,\nI might make a connection.$"

WW_PC_Yan_Text_39:
# 89 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "For now, let's just enjoy this\nlittle safe room, eheh.$"

WW_PC_Yan_Text_40:
# 99 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "This world, huh?$"

WW_PC_Yan_Text_41:
# 100 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm sorry, {PLAYER}, but I don't have\nany real answers for you.$"

WW_PC_Yan_Text_42:
# 101 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I know as much as you do.$"

WW_PC_Yan_Text_43:
# 107 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This option is Unavailable.)$"

WW_PC_Yan_Text_44:
# 110 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This OPTION IS UNAVAILABLE.)$"

WW_PC_Yan_Text_45:
# 113 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This OPTION IS UNAVAILABLE.\nThis OPTION IS UNAVAILABLE.This\nOPTION IS UNAVAILABLE.This OPTION IS\nUNAVAILABLE.This OPTION IS UNAVAILABLE.)$"

WW_PC_Yan_Text_46:
# 116 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(Thi.s Opt.ion is Unavai.lable.)$"

WW_PC_Yan_Text_47:
# 120 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(...your words get through.)$"

WW_PC_Yan_Text_48:
# 121 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...a girl?$"

WW_PC_Yan_Text_49:
# 122 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I think...I know what you are\ntalking about.$"

WW_PC_Yan_Text_50:
# 123 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "So, you have seen her.$"

WW_PC_Yan_Text_51:
# 124 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "The woman in gray.$"

WW_PC_Yan_Text_52:
# 125 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "That phantom girl...of my dreams.$"

WW_PC_Yan_Text_53:
# 126 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't know her name...or who she is.$"

WW_PC_Yan_Text_54:
# 127 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't even know if she's real.$"

WW_PC_Yan_Text_55:
# 128 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But if you've seen her too, well...$"

WW_PC_Yan_Text_56:
# 129 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Maybe I'm not losing my mind after\nall.$"

WW_PC_Yan_Text_57:
# 130 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't think I've told you this,\nand I don't know how else it\pwould come up...$"

WW_PC_Yan_Text_58:
# 131 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But I dream in black and white.$"

WW_PC_Yan_Text_59:
# 132 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It's a real phenomenon.$"

WW_PC_Yan_Text_60:
# 133 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "All of them are dreadful and...\nquiet. And hollow.$"

WW_PC_Yan_Text_61:
# 134 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But in all my dreams, and in my\nfaintest of memories, I see her.$"

WW_PC_Yan_Text_62:
# 135 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "There's no color in her face, of course.$"

WW_PC_Yan_Text_63:
# 136 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "She's always watching from a distance,\njust far enough from my reach.$"

WW_PC_Yan_Text_64:
# 137 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Recently, though, she appeared to me\nagain.$"

WW_PC_Yan_Text_65:
# 138 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "And this time, things were different.$"

WW_PC_Yan_Text_66:
# 139 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Once again, I found myself in a garden\nof gray and white flowers.$"

WW_PC_Yan_Text_67:
# 140 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "And again, this girl was standing\nacross from me.$"

WW_PC_Yan_Text_68:
# 141 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Her hair was still jet black,\nbut this time.$"

WW_PC_Yan_Text_69:
# 142 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Her face was full of color and life.\nAnd her smile...it was warm.$"

WW_PC_Yan_Text_70:
# 143 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "She's beautiful...$"

WW_PC_Yan_Text_71:
# 144 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...I need to find her.$"

WW_PC_Yan_Text_72:
# 145 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Then maybe, I'll understand.$"

WW_PC_Yan_Text_73:
# 146 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What all this means. Why I'm here.$"

WW_PC_Yan_Text_74:
# 147 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...thanks for talking to me, {PLAYER}.$"

WW_PC_Yan_Text_75:
# 148 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I think this is a mystery I'll\nhave to work on myself.$"

WW_PC_Yan_Text_76:
# 152 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...hope you're satisfied.$"

WW_PC_Yan_Text_77:
# 154 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This option is unavailable.)$"

WW_PC_Yan_Text_78:
# 163 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Me?$"

WW_PC_Yan_Text_79:
# 164 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What, didja forget my name already?$"

WW_PC_Yan_Text_80:
# 165 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm Yan!$"

WW_PC_Yan_Text_81:
# 166 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "And it's my job to figure out what's\ngoing on.$"

WW_PC_Yan_Text_82:
# 167 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Y'know, with the weirdness and all.$"

WW_PC_Yan_Text_83:
# 171 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...I just told you, dude.$"

WW_PC_Yan_Text_84:
# 172 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Yan.$"

WW_PC_Yan_Text_85:
# 173 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm a detective.$"

WW_PC_Yan_Text_86:
# 174 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Don't make me investigate your case of\nmemory loss, now!$"

WW_PC_Yan_Text_87:
# 177 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...$"

WW_PC_Yan_Text_88:
# 178 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Alright, your kind of starting\nto creep me out now.$"

WW_PC_Yan_Text_89:
# 179 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Are you feeling alright, {PLAYER}?$"

WW_PC_Yan_Text_90:
# 180 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You know my name.$"

WW_PC_Yan_Text_91:
# 187 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "See you, then!$"

WW_PC_Yan_Text_92:
# 188 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Come back if anything happens, alright?$"
