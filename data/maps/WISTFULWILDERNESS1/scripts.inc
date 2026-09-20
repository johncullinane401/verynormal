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
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_2, MSGBOX_YESNO
# 35 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WISTFULWILDERNESS1_EventScipt_Hole_2
WISTFULWILDERNESS1_EventScipt_Hole_1:
# 40 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
	return

WISTFULWILDERNESS1_EventScipt_Hole_2:
# 36 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_3
# 37 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_4
# 38 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Hole_Text_5
	goto WISTFULWILDERNESS1_EventScipt_Hole_1


WISTFULWILDERNESS1_EventScipt_HoleSign::
# 44 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 45 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_HoleSign_Text_0
# 46 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_HoleSign_Text_1
# 47 "data/maps/WISTFULWILDERNESS1/scripts.pory"
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
	.string "You can't see the bottom...$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_2:
# 34 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "...Jump down the hole?$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_3:
# 36 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "...$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_4:
# 37 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "...You cannot bring yourself to do it.$"

WISTFULWILDERNESS1_EventScipt_Hole_Text_5:
# 38 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "Not yet.$"

WISTFULWILDERNESS1_EventScipt_HoleSign_Text_0:
# 45 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "The deepest pit in the dream.$"

WISTFULWILDERNESS1_EventScipt_HoleSign_Text_1:
# 46 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "Face the four sins and return when\nyou are ready.$"
