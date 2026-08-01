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


GREYFOREST1_EventScript_CaveWarp::
# 18 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 19 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_WEIRDCAVE1, 9, 42
# 20 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 21 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_SwampWarp::
# 25 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 26 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_FORESTOFREFLECTION, 9, 9
# 27 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 28 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_Yan::
# 32 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 33 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_0
# 34 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_1
# 35 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_2
# 36 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_3
# 37 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_4
# 38 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_5
# 39 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_6
# 40 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_7
# 41 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_8
# 42 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_9
# 43 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_10
# 44 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_11
# 45 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_12
# 46 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_13
# 47 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_12
# 48 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_14
# 49 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_15
# 50 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_16
	return


GREYFOREST1_EventScript_Exit_Text_0:
# 9 "data/maps/GREYFOREST1/scripts.pory"
	.string "Your hand is no longer on fire.$"

GREYFOREST1_EventScript_Yan_Text_0:
# 33 "data/maps/GREYFOREST1/scripts.pory"
	.string "{COLOR RED}...it's you!$"

GREYFOREST1_EventScript_Yan_Text_1:
# 34 "data/maps/GREYFOREST1/scripts.pory"
	.string "Wha...what are you doing here?$"

GREYFOREST1_EventScript_Yan_Text_2:
# 35 "data/maps/GREYFOREST1/scripts.pory"
	.string "......$"

GREYFOREST1_EventScript_Yan_Text_3:
# 36 "data/maps/GREYFOREST1/scripts.pory"
	.string "Ha...you didn't call.$"

GREYFOREST1_EventScript_Yan_Text_4:
# 37 "data/maps/GREYFOREST1/scripts.pory"
	.string "But it seems you've stumbled upon\nsomething interesting, huh?$"

GREYFOREST1_EventScript_Yan_Text_5:
# 38 "data/maps/GREYFOREST1/scripts.pory"
	.string "Well, I won't hold you back or\nanything.$"

GREYFOREST1_EventScript_Yan_Text_6:
# 39 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'm still trying to understand\nit myself.$"

GREYFOREST1_EventScript_Yan_Text_7:
# 40 "data/maps/GREYFOREST1/scripts.pory"
	.string "Speaking of...$"

GREYFOREST1_EventScript_Yan_Text_8:
# 41 "data/maps/GREYFOREST1/scripts.pory"
	.string "...you still have that card I gave\nyou?$"

GREYFOREST1_EventScript_Yan_Text_9:
# 42 "data/maps/GREYFOREST1/scripts.pory"
	.string "If you find yourself stuck or trapped\nor something, call me.$"

GREYFOREST1_EventScript_Yan_Text_10:
# 43 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll save ya.$"

GREYFOREST1_EventScript_Yan_Text_11:
# 44 "data/maps/GREYFOREST1/scripts.pory"
	.string "You never know what could happen in\nhere.$"

GREYFOREST1_EventScript_Yan_Text_12:
# 45 "data/maps/GREYFOREST1/scripts.pory"
	.string "...$"

GREYFOREST1_EventScript_Yan_Text_13:
# 46 "data/maps/GREYFOREST1/scripts.pory"
	.string "You really aren't much of a talker, are ya?$"

GREYFOREST1_EventScript_Yan_Text_14:
# 48 "data/maps/GREYFOREST1/scripts.pory"
	.string "Ha...$"

GREYFOREST1_EventScript_Yan_Text_15:
# 49 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll be leaving, now.$"

GREYFOREST1_EventScript_Yan_Text_16:
# 50 "data/maps/GREYFOREST1/scripts.pory"
	.string "See ya!$"
