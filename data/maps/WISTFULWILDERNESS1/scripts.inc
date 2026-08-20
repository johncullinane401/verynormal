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


WISTFULWILDERNESS1_EventScipt_Sign_Text_0:
# 8 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "                                          $"
