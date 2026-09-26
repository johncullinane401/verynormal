# 1 "data/maps/WISTFULWILDERNESS1/scripts.pory"
WISTFULWILDERNESS1_MapScripts::
# 2 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.byte 0

WISTFULWILDERNESS1_EventScipt_Sign::
# 7 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 8 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Sign_Text_0
# 9 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
	return


WISTFULWILDERNESS1_EventScript_PokemonCenter::
# 13 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 14 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	random 25
# 15 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	compare VAR_RESULT, 20
	goto_if_eq WISTFULWILDERNESS1_EventScript_PokemonCenter_4
WISTFULWILDERNESS1_EventScript_PokemonCenter_3:
# 21 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 22 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	warp MAP_WW_POKEMON_CENTER, 6, 8
# 23 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	setflag FLAG_ENTERED_PC
# 24 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	waitstate
# 25 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	fadescreen FADE_FROM_BLACK
WISTFULWILDERNESS1_EventScript_PokemonCenter_1:
# 27 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
	return

WISTFULWILDERNESS1_EventScript_PokemonCenter_2:
# 16 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	warp MAP_DARKCAVE1, 25, 19
# 17 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
# 18 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 19 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	waitstate
	goto WISTFULWILDERNESS1_EventScript_PokemonCenter_1

WISTFULWILDERNESS1_EventScript_PokemonCenter_4:
# 15 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	goto_if_set FLAG_ENTERED_PC, WISTFULWILDERNESS1_EventScript_PokemonCenter_2
	goto WISTFULWILDERNESS1_EventScript_PokemonCenter_3


WISTFULWILDERNESS1_EventScipt_Hole::
# 31 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 32 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_0
# 33 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_1
# 34 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, WISTFULWILDERNESS1_EventScipt_Hole_Text_2, WISTFULWILDERNESS1_EventScipt_Hole_Text_3, WISTFULWILDERNESS1_EventScipt_Hole_Text_4
# 35 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	case 0, WISTFULWILDERNESS1_EventScipt_Hole_3
# 41 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	case 1, WISTFULWILDERNESS1_EventScipt_Hole_4
# 62 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	case 3, WISTFULWILDERNESS1_EventScipt_Hole_5
WISTFULWILDERNESS1_EventScipt_Hole_1:
# 65 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
	return

WISTFULWILDERNESS1_EventScipt_Hole_3:
# 37 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_5
# 38 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_6
# 39 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_7
	goto WISTFULWILDERNESS1_EventScipt_Hole_1

WISTFULWILDERNESS1_EventScipt_Hole_4:
# 42 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_8
# 43 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_9
# 44 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_10, MSGBOX_YESNO
# 45 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WISTFULWILDERNESS1_EventScipt_Hole_6
# 59 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_18
	goto WISTFULWILDERNESS1_EventScipt_Hole_1

WISTFULWILDERNESS1_EventScipt_Hole_5:
	goto WISTFULWILDERNESS1_EventScipt_Hole_1

WISTFULWILDERNESS1_EventScipt_Hole_6:
# 46 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_11
# 47 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	warp MAP_PIT_LEVEL1, 2, 10
# 49 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	waitstate
# 50 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_12
# 51 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_13
# 52 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_14
# 53 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 54 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_15
# 55 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_16
# 56 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_17
	goto WISTFULWILDERNESS1_EventScipt_Hole_1


WISTFULWILDERNESS1_EventScipt_HoleSign::
# 69 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 70 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_HoleSign_Text_0
# 71 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_HoleSign_Text_1
# 72 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
	return


WISTFULWILDERNESS1_EventScipt_Sign_Text_0:
# 8 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "                                          $"

WISTFULWILDERNESS1_EventScipt_Hole_Text_0:
# 32 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "There is a hole here.$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_1:
# 33 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "What will you do?$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_2:
# 34 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "Investigate$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_3:
# 34 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "Jump Down$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_4:
# 34 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "Leave$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_5:
# 37 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(You peer into the hole.)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_6:
# 38 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(The darkness runs very deep into\nthe earth...)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_7:
# 39 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(You can't discern how far down it\ngoes.)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_8:
# 42 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(You step towards the hole.)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_9:
# 43 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string ".......$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_10:
# 44 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(Are you sure you want to continue?)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_11:
# 46 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(You take another step into the abyss....!)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_12:
# 50 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string ".$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_13:
# 51 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "..$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_14:
# 52 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "...$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_15:
# 54 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(....)$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_16:
# 55 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "You survived the fall.$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_17:
# 56 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "If this was a different game, your\nlegs would surely be shattered.$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_18:
# 59 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "(You step back from the pit.)$"

WISTFULWILDERNESS1_EventScipt_HoleSign_Text_0:
# 70 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "The deepest pit in the dream.$"

WISTFULWILDERNESS1_EventScipt_HoleSign_Text_1:
# 71 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "Face the four sins and return when\nyou are ready.$"
