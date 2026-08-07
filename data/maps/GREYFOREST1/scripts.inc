# 1 "data/maps/GREYFOREST1/scripts.pory"
GREYFOREST1_MapScripts::
# 2 "data/maps/GREYFOREST1/scripts.pory"
	.byte 0

GREYFOREST1_EventScript_Exit::
# 6 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 8 "data/maps/GREYFOREST1/scripts.pory"
	clearflag FLAG_DREAMING
# 10 "data/maps/GREYFOREST1/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, GREYFOREST1_EventScript_Exit_2
GREYFOREST1_EventScript_Exit_1:
# 14 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_ROUTE103, 4, 1
# 15 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 16 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return

GREYFOREST1_EventScript_Exit_2:
# 11 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Exit_Text_0
# 12 "data/maps/GREYFOREST1/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
	goto GREYFOREST1_EventScript_Exit_1


GREYFOREST1_EventScript_CaveWarp::
# 20 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 21 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_WEIRDCAVE1, 9, 42
# 22 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 23 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_SwampWarp::
# 27 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 28 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_FORESTOFREFLECTION, 2, 5
# 29 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 30 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_Yan::
# 34 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 35 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_0
# 36 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_1
# 37 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_2
# 38 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_3
# 39 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_4
# 40 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_5
# 41 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_6
# 42 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_7
# 43 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_8
# 44 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_9
# 45 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_10
# 46 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_11
# 47 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_12
# 48 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_13
# 49 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_12
# 50 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_14
# 51 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_15
# 52 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_16
# 53 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_Exit_Text_0:
# 11 "data/maps/GREYFOREST1/scripts.pory"
	.string "Your hand is no longer on fire.$"

GREYFOREST1_EventScript_Yan_Text_0:
# 35 "data/maps/GREYFOREST1/scripts.pory"
	.string "{COLOR RED}...it's you!$"

GREYFOREST1_EventScript_Yan_Text_1:
# 36 "data/maps/GREYFOREST1/scripts.pory"
	.string "Wha...what are you doing here?$"

GREYFOREST1_EventScript_Yan_Text_2:
# 37 "data/maps/GREYFOREST1/scripts.pory"
	.string "......$"

GREYFOREST1_EventScript_Yan_Text_3:
# 38 "data/maps/GREYFOREST1/scripts.pory"
	.string "Ha...you didn't call.$"

GREYFOREST1_EventScript_Yan_Text_4:
# 39 "data/maps/GREYFOREST1/scripts.pory"
	.string "But it seems you've stumbled upon\nsomething interesting$"

GREYFOREST1_EventScript_Yan_Text_5:
# 40 "data/maps/GREYFOREST1/scripts.pory"
	.string "Well, I won't hold you back or\nanything.$"

GREYFOREST1_EventScript_Yan_Text_6:
# 41 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'm still trying to understand\nit myself.$"

GREYFOREST1_EventScript_Yan_Text_7:
# 42 "data/maps/GREYFOREST1/scripts.pory"
	.string "Speaking of...$"

GREYFOREST1_EventScript_Yan_Text_8:
# 43 "data/maps/GREYFOREST1/scripts.pory"
	.string "...you still have that card I gave\nyou?$"

GREYFOREST1_EventScript_Yan_Text_9:
# 44 "data/maps/GREYFOREST1/scripts.pory"
	.string "If you find yourself stuck or trapped\nor something, call me.$"

GREYFOREST1_EventScript_Yan_Text_10:
# 45 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll save you.$"

GREYFOREST1_EventScript_Yan_Text_11:
# 46 "data/maps/GREYFOREST1/scripts.pory"
	.string "You never know what could happen in\nhere.$"

GREYFOREST1_EventScript_Yan_Text_12:
# 47 "data/maps/GREYFOREST1/scripts.pory"
	.string "...$"

GREYFOREST1_EventScript_Yan_Text_13:
# 48 "data/maps/GREYFOREST1/scripts.pory"
	.string "You really aren't much of a talker, are\n ya?$"

GREYFOREST1_EventScript_Yan_Text_14:
# 50 "data/maps/GREYFOREST1/scripts.pory"
	.string "Ha...$"

GREYFOREST1_EventScript_Yan_Text_15:
# 51 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll be leaving, now.$"

GREYFOREST1_EventScript_Yan_Text_16:
# 52 "data/maps/GREYFOREST1/scripts.pory"
	.string "See ya!$"
