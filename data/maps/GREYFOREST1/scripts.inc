# 1 "data/maps/GREYFOREST1/scripts.pory"
GREYFOREST1_MapScripts::
# 2 "data/maps/GREYFOREST1/scripts.pory"
	.byte 0

GREYFOREST1_EventScript_Exit::
# 6 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 8 "data/maps/GREYFOREST1/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, GREYFOREST1_EventScript_Exit_2
GREYFOREST1_EventScript_Exit_1:
# 12 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_ROUTE103, 4, 1
# 13 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 14 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return

GREYFOREST1_EventScript_Exit_2:
# 9 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Exit_Text_0
# 10 "data/maps/GREYFOREST1/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
	goto GREYFOREST1_EventScript_Exit_1


GREYFOREST1_EventScript_Exit_Text_0:
# 9 "data/maps/GREYFOREST1/scripts.pory"
	.string "Your hand is no longer on fire.$"
