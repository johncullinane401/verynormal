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
# 169 "data/maps/WW_PokemonCenter/scripts.pory"
	case 4, WW_PC_Yan_13
# 198 "data/maps/WW_PokemonCenter/scripts.pory"
	case 5, WW_PC_Yan_14
# 233 "data/maps/WW_PokemonCenter/scripts.pory"
	case 127, WW_PC_Yan_15
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
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, WW_PC_Yan_Text_10, WW_PC_Yan_Text_11, WW_PC_Yan_Text_12, WW_PC_Yan_Text_13, WW_PC_Yan_Text_14, WW_PC_Yan_Text_15
	goto WW_PC_Yan_5

WW_PC_Yan_9:
# 51 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD, WW_PC_Yan_17
# 56 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set FLAG_TALKED_BUSINESS_CARD, WW_PC_Yan_20
WW_PC_Yan_19:
# 63 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_23
WW_PC_Yan_16:
# 65 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 66 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_10:
# 69 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP, WW_PC_Yan_25
# 82 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set FLAG_TALKED_MAP, WW_PC_Yan_28
WW_PC_Yan_27:
# 93 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_23
WW_PC_Yan_24:
# 95 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 96 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_11:
# 99 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_41
# 100 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_42
# 101 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_43
# 102 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 103 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_12:
# 106 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 2
	goto_if_ge WW_PC_Yan_51
WW_PC_Yan_49:
# 109 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_ge WW_PC_Yan_48
WW_PC_Yan_46:
# 112 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_ge WW_PC_Yan_45
WW_PC_Yan_43:
# 115 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_ge WW_PC_Yan_42
WW_PC_Yan_41:
# 119 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 10
	goto_if_eq WW_PC_Yan_37
# 158 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 99
	goto_if_eq WW_PC_Yan_38
# 162 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_80
# 163 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
WW_PC_Yan_32:
# 166 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 167 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_13:
# 170 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_YOU_OPTION, 1
	goto_if_eq WW_PC_Yan_55
# 178 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_YOU_OPTION, 2
	goto_if_eq WW_PC_Yan_56
# 186 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_YOU_OPTION, 3
	goto_if_eq WW_PC_Yan_57
# 193 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_23
WW_PC_Yan_54:
# 195 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 196 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_14:
# 201 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_96
# 202 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_97
# 203 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set GOT_MAMMONA, WW_PC_Yan_63
# 206 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_set GOT_ASMODIA, WW_PC_Yan_64
# 221 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_112
# 222 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_113
# 223 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_114
# 224 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_115
# 225 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_116
# 226 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_117
# 227 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_118
# 228 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_119
# 229 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_120
WW_PC_Yan_62:
# 231 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return

WW_PC_Yan_15:
# 234 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_121
# 235 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_122
# 236 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 237 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return

WW_PC_Yan_17:
# 52 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_16
# 53 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_17
# 54 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_18
# 55 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD
	goto WW_PC_Yan_16

WW_PC_Yan_18:
# 57 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_19
# 58 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_20
# 59 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_21
# 60 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_22
# 61 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD_2
	goto WW_PC_Yan_16

WW_PC_Yan_20:
# 56 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD_2, WW_PC_Yan_18
	goto WW_PC_Yan_19

WW_PC_Yan_25:
# 70 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_24
# 71 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_25
# 72 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_26
# 73 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_27
# 74 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_28
# 75 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_29
# 76 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_30
# 77 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_31
# 78 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_32
# 79 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_33
# 80 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_MAP
	goto WW_PC_Yan_24

WW_PC_Yan_26:
# 83 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_34
# 84 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_35
# 85 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_36
# 86 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_37
# 87 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_38
# 88 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_39
# 89 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_40
# 90 "data/maps/WW_PokemonCenter/scripts.pory"
	setflag FLAG_TALKED_MAP_2
	goto WW_PC_Yan_24

WW_PC_Yan_28:
# 82 "data/maps/WW_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP_2, WW_PC_Yan_26
	goto WW_PC_Yan_27

WW_PC_Yan_33:
# 107 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_44
# 108 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_32

WW_PC_Yan_34:
# 110 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_45
# 111 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_32

WW_PC_Yan_35:
# 113 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_46
# 114 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_32

WW_PC_Yan_36:
# 116 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_47
# 117 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto WW_PC_Yan_32

WW_PC_Yan_37:
# 120 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_48
# 121 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_49, MSGBOX_YESNO
# 122 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WW_PC_Yan_69
# 127 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_50
# 128 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_51
# 129 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_52
# 130 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_53
# 131 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_54
# 132 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_55
# 133 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_56
# 134 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_57
# 135 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_58
# 136 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_59
# 137 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_60
# 138 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_61
# 139 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_62
# 140 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_63
# 141 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_64
# 142 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_65
# 143 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_66
# 144 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_67
# 145 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_68
# 146 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_69
# 147 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_70
# 148 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_71
# 149 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_72
# 150 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_73
# 151 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_74
# 152 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_75
# 153 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_76
# 154 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_77
# 155 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_78
# 156 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_VENOM, 5
# 157 "data/maps/WW_PokemonCenter/scripts.pory"
	setvar VAR_GIRL_OPTION, 99
	goto WW_PC_Yan_32

WW_PC_Yan_38:
# 159 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_23
# 160 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_79
	goto WW_PC_Yan_32

WW_PC_Yan_42:
# 115 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 9
	goto_if_le WW_PC_Yan_36
	goto WW_PC_Yan_41

WW_PC_Yan_45:
# 112 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_lt WW_PC_Yan_35
	goto WW_PC_Yan_43

WW_PC_Yan_48:
# 109 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_lt WW_PC_Yan_34
	goto WW_PC_Yan_46

WW_PC_Yan_51:
# 106 "data/maps/WW_PokemonCenter/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_lt WW_PC_Yan_33
	goto WW_PC_Yan_49

WW_PC_Yan_55:
# 171 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_81
# 172 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_82
# 173 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_83
# 174 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_84
# 175 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_85
# 176 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto WW_PC_Yan_54

WW_PC_Yan_56:
# 179 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_86
# 180 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_87
# 181 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_88
# 182 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_89
# 183 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_90
# 184 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_91
# 185 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto WW_PC_Yan_54

WW_PC_Yan_57:
# 187 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_92
# 188 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_93
# 189 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_94
# 190 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_95
# 191 "data/maps/WW_PokemonCenter/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto WW_PC_Yan_54

WW_PC_Yan_63:
# 204 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_98
	goto WW_PC_Yan_62

WW_PC_Yan_64:
# 207 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_99
# 208 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_100
# 209 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_101
# 210 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_102
# 211 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_103
# 212 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_104
# 213 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_105
# 214 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_106
# 215 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_107
# 216 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_108
# 217 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_109
# 218 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_110
# 219 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PC_Yan_Text_111
	goto WW_PC_Yan_62

WW_PC_Yan_69:
# 123 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
# 124 "data/maps/WW_PokemonCenter/scripts.pory"
	face_right
	return


# 246 "data/maps/WW_PokemonCenter/scripts.pory"
yanfaceright:
# 247 "data/maps/WW_PokemonCenter/scripts.pory"
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
	.string "Silver Girl$"

WW_PC_Yan_Text_14:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You$"

WW_PC_Yan_Text_15:
# 45 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What Should I Do Now$"

WW_PC_Yan_Text_16:
# 52 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Ah, the card?$"

WW_PC_Yan_Text_17:
# 53 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "That's my special business card.$"

WW_PC_Yan_Text_18:
# 54 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It even has a watermark!$"

WW_PC_Yan_Text_19:
# 57 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Hm?$"

WW_PC_Yan_Text_20:
# 58 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What, still on the card?$"

WW_PC_Yan_Text_21:
# 59 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Yes, I know it's great.$"

WW_PC_Yan_Text_22:
# 60 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You've got good taste, my friend!$"

WW_PC_Yan_Text_23:
# 63 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(Seems there's nothing left to discuss.)$"

WW_PC_Yan_Text_24:
# 70 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "This place?$"

WW_PC_Yan_Text_25:
# 71 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, I'm sorry to say, I don't\nreally have an answer for you.$"

WW_PC_Yan_Text_26:
# 72 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But if I had to take a guess...hmm.$"

WW_PC_Yan_Text_27:
# 73 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, obviously, it resembles a\nPokemon Center.$"

WW_PC_Yan_Text_28:
# 74 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But, it's, uh, not, obviously.$"

WW_PC_Yan_Text_29:
# 75 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It doesn't seem dangerous or\nanything, though.$"

WW_PC_Yan_Text_30:
# 76 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Seems safe enough for taking a nap.$"

WW_PC_Yan_Text_31:
# 77 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "..oh! There is something interesting,\nactually.$"

WW_PC_Yan_Text_32:
# 78 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Why don't you take a look at the map?$"

WW_PC_Yan_Text_33:
# 79 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "The one on the wall, I mean.$"

WW_PC_Yan_Text_34:
# 83 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "See what I mean?$"

WW_PC_Yan_Text_35:
# 84 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It quite odd...it looks familiar,\nbut it's definitely not Hoenn.$"

WW_PC_Yan_Text_36:
# 85 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, if you were asking about this\ntown, I'm afraid I know even less.$"

WW_PC_Yan_Text_37:
# 86 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It's got a nostalgic vibe, I guess.\nIt's pretty cute.$"

WW_PC_Yan_Text_38:
# 87 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "God, I feel like I'm...missing\nsomething,y'know?$"

WW_PC_Yan_Text_39:
# 88 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Maybe if I hang out here longer,\nI might make a connection.$"

WW_PC_Yan_Text_40:
# 89 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "For now, let's just enjoy this\nlittle safe room, eheh.$"

WW_PC_Yan_Text_41:
# 99 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "This world, huh?$"

WW_PC_Yan_Text_42:
# 100 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm sorry, {PLAYER}, but I don't have\nany real answers for you.$"

WW_PC_Yan_Text_43:
# 101 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I know as much as you do.$"

WW_PC_Yan_Text_44:
# 107 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This option is unavailable.)$"

WW_PC_Yan_Text_45:
# 110 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This OPTION IS UNAVAILABLE.)$"

WW_PC_Yan_Text_46:
# 113 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This OPTION IS UNAVAILABLE.\nThis OPTION IS UNAVAILABLE.This\nOPTION IS UNAVAILABLE.This OPTION IS\nUNAVAILABLE.This OPTION IS UNAVAILABLE.)$"

WW_PC_Yan_Text_47:
# 116 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(Thi.s Opt.ion is Unavai.lable.)$"

WW_PC_Yan_Text_48:
# 120 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "WARNING!\pThe following option will\ndelete all saved data.{PAUSE_UNTIL_PRESS}$"

WW_PC_Yan_Text_49:
# 121 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Is it really okay to delete all saved\ndata? This cannot be undone.{PAUSE_UNTIL_PRESS}$"

WW_PC_Yan_Text_50:
# 127 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(...your words get through.)$"

WW_PC_Yan_Text_51:
# 128 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...a girl?$"

WW_PC_Yan_Text_52:
# 129 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I think...I know what you are\ntalking about.$"

WW_PC_Yan_Text_53:
# 130 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "So, you have seen her.$"

WW_PC_Yan_Text_54:
# 131 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "The woman in gray.$"

WW_PC_Yan_Text_55:
# 132 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "That phantom girl...of my dreams.$"

WW_PC_Yan_Text_56:
# 133 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't know her name...or who she is.$"

WW_PC_Yan_Text_57:
# 134 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't even know if she's real.$"

WW_PC_Yan_Text_58:
# 135 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But if you've seen her too, well...$"

WW_PC_Yan_Text_59:
# 136 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Maybe I'm not losing my mind after\nall.$"

WW_PC_Yan_Text_60:
# 137 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't think I've told you this,\nand I don't know how else it\pwould come up...$"

WW_PC_Yan_Text_61:
# 138 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But I dream in black and white.$"

WW_PC_Yan_Text_62:
# 139 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It's a real phenomenon.$"

WW_PC_Yan_Text_63:
# 140 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "All of them are dreadful and...\nquiet. And hollow.$"

WW_PC_Yan_Text_64:
# 141 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But in all my dreams, and in my\nfaintest of memories, I see her.$"

WW_PC_Yan_Text_65:
# 142 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "There's no color in her face, of course.$"

WW_PC_Yan_Text_66:
# 143 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "She's always watching from a distance,\njust far enough from my reach.$"

WW_PC_Yan_Text_67:
# 144 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Recently, though, she appeared to me\nagain.$"

WW_PC_Yan_Text_68:
# 145 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "And this time, things were different.$"

WW_PC_Yan_Text_69:
# 146 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Once again, I found myself in a garden\nof gray and white flowers.$"

WW_PC_Yan_Text_70:
# 147 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "And again, this girl was standing\nacross from me.$"

WW_PC_Yan_Text_71:
# 148 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Her hair was still jet black,\nbut this time.$"

WW_PC_Yan_Text_72:
# 149 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Her face was full of color and life.\nAnd her smile...it was warm.$"

WW_PC_Yan_Text_73:
# 150 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "She's beautiful...$"

WW_PC_Yan_Text_74:
# 151 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...I need to find her.$"

WW_PC_Yan_Text_75:
# 152 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Then maybe, I'll understand.$"

WW_PC_Yan_Text_76:
# 153 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What all this means. Why I'm here.$"

WW_PC_Yan_Text_77:
# 154 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...thanks for talking to me, {PLAYER}.$"

WW_PC_Yan_Text_78:
# 155 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I think this is a mystery I'll\nhave to work on myself.$"

WW_PC_Yan_Text_79:
# 160 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...I hope you're satisfied.$"

WW_PC_Yan_Text_80:
# 162 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "(This optioin is unavailable.)$"

WW_PC_Yan_Text_81:
# 171 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Me?$"

WW_PC_Yan_Text_82:
# 172 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What, didja forget my name already?$"

WW_PC_Yan_Text_83:
# 173 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm Yan!$"

WW_PC_Yan_Text_84:
# 174 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "And it's my job to figure out what's\ngoing on.$"

WW_PC_Yan_Text_85:
# 175 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Y'know, with the weirdness and all.$"

WW_PC_Yan_Text_86:
# 179 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...I just told you, dude.$"

WW_PC_Yan_Text_87:
# 180 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Yan.$"

WW_PC_Yan_Text_88:
# 181 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm a detective.$"

WW_PC_Yan_Text_89:
# 182 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Don't make me investigate your case of\nmemory loss, now!$"

WW_PC_Yan_Text_90:
# 183 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...eheh. Bad joke.$"

WW_PC_Yan_Text_91:
# 184 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "....mm.$"

WW_PC_Yan_Text_92:
# 187 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...$"

WW_PC_Yan_Text_93:
# 188 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Alright, your kind of starting\nto creep me out now.$"

WW_PC_Yan_Text_94:
# 189 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Are you feeling alright, {PLAYER}?$"

WW_PC_Yan_Text_95:
# 190 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You know my name.$"

WW_PC_Yan_Text_96:
# 201 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "What to do, eh?$"

WW_PC_Yan_Text_97:
# 202 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Hmmmm....$"

WW_PC_Yan_Text_98:
# 204 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...what?$"

WW_PC_Yan_Text_99:
# 207 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "So you found something in\nthe depths of the forest?$"

WW_PC_Yan_Text_100:
# 208 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Ho ho, now we're talking!$"

WW_PC_Yan_Text_101:
# 209 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "..what, you're not gonna tell me?$"

WW_PC_Yan_Text_102:
# 210 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, I'll have to go try looking\nmyself.$"

WW_PC_Yan_Text_103:
# 211 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Last time I went though, I got\nlost...$"

WW_PC_Yan_Text_104:
# 212 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "But that's no obstacle to someone like\nme!$"

WW_PC_Yan_Text_105:
# 213 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...oh, sorry, you wanted some\nadvice.$"

WW_PC_Yan_Text_106:
# 214 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Hmmm, well...$"

WW_PC_Yan_Text_107:
# 215 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "One thing I've noticed is there\nmight be multiple entrances to this place.$"

WW_PC_Yan_Text_108:
# 216 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "You probably got here from Route 103,\nright?$"

WW_PC_Yan_Text_109:
# 217 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, if there are other entrances,\nthey might lead to different places.$"

WW_PC_Yan_Text_110:
# 218 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "That's my current theory.$"

WW_PC_Yan_Text_111:
# 219 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Maybe that's helpful?$"

WW_PC_Yan_Text_112:
# 221 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Well, exploration is the most fun\npart of adventure, right?$"

WW_PC_Yan_Text_113:
# 222 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Why don't you try and see if you\ncan, y'know, get stuck?$"

WW_PC_Yan_Text_114:
# 223 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Find a dead end or something.$"

WW_PC_Yan_Text_115:
# 224 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I'm not even trying to be vague or\nanything, by the way.$"

WW_PC_Yan_Text_116:
# 225 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I genuinely just got here.$"

WW_PC_Yan_Text_117:
# 226 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "I don't really\nhave anything else to share.$"

WW_PC_Yan_Text_118:
# 227 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Except for that thing with the\nrocks, I guess.$"

WW_PC_Yan_Text_119:
# 228 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "So just, go crazy, dude!$"

WW_PC_Yan_Text_120:
# 229 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "If you don't go out of your way to explore,\nyou'll never learn anything!$"

WW_PC_Yan_Text_121:
# 234 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "See you, then!$"

WW_PC_Yan_Text_122:
# 235 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "Come back if anything happens, alright?$"
