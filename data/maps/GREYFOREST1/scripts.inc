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
	addobject 1
# 36 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_0
# 37 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanMoveDownAlot
# 38 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 39 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_1
# 40 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_2
# 41 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_3
# 42 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanUp
# 43 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 44 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_4
# 45 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanDown
# 46 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_5
# 47 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_6
# 48 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_7
# 49 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_8
# 50 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_9
# 51 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_10
# 52 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_11
# 53 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_12
# 54 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_13
# 55 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_14
# 56 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_15
# 57 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_16
# 58 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_17
# 59 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_18
# 60 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_19
# 61 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_20
# 62 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_21
# 63 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_22
# 64 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanLeave
# 65 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 66 "data/maps/GREYFOREST1/scripts.pory"
	removeobject 1
# 67 "data/maps/GREYFOREST1/scripts.pory"
	setflag FLAG_SECOND_YAN_MEETING
# 68 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


# 72 "data/maps/GREYFOREST1/scripts.pory"
YanMoveDownAlot:
# 73 "data/maps/GREYFOREST1/scripts.pory"
	face_down
# 74 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 74 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 74 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 74 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 74 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 74 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 75 "data/maps/GREYFOREST1/scripts.pory"
	face_player
	step_end

# 78 "data/maps/GREYFOREST1/scripts.pory"
YanLeave:
# 79 "data/maps/GREYFOREST1/scripts.pory"
	face_up
# 80 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 80 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 80 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 80 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 80 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 80 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 81 "data/maps/GREYFOREST1/scripts.pory"
	face_player
	step_end

# 84 "data/maps/GREYFOREST1/scripts.pory"
YanUp:
# 85 "data/maps/GREYFOREST1/scripts.pory"
	face_up
	step_end

# 88 "data/maps/GREYFOREST1/scripts.pory"
YanDown:
# 89 "data/maps/GREYFOREST1/scripts.pory"
	face_player
	step_end

GREYFOREST1_EventScript_Exit_Text_0:
# 11 "data/maps/GREYFOREST1/scripts.pory"
	.string "Your hand is no longer on fire.$"

GREYFOREST1_EventScript_Yan_Text_0:
# 36 "data/maps/GREYFOREST1/scripts.pory"
	.string "{COLOR RED}...it's you!$"

GREYFOREST1_EventScript_Yan_Text_1:
# 39 "data/maps/GREYFOREST1/scripts.pory"
	.string "{PLAYER}!$"

GREYFOREST1_EventScript_Yan_Text_2:
# 40 "data/maps/GREYFOREST1/scripts.pory"
	.string "Wha...what are you doing here!?$"

GREYFOREST1_EventScript_Yan_Text_3:
# 41 "data/maps/GREYFOREST1/scripts.pory"
	.string "......$"

GREYFOREST1_EventScript_Yan_Text_4:
# 44 "data/maps/GREYFOREST1/scripts.pory"
	.string "Ha...you didn't call.$"

GREYFOREST1_EventScript_Yan_Text_5:
# 46 "data/maps/GREYFOREST1/scripts.pory"
	.string "Seems you've stumbled upon something\ninteresting.$"

GREYFOREST1_EventScript_Yan_Text_6:
# 47 "data/maps/GREYFOREST1/scripts.pory"
	.string "I don't think...you should be in this\nplace.$"

GREYFOREST1_EventScript_Yan_Text_7:
# 48 "data/maps/GREYFOREST1/scripts.pory"
	.string "Despite that, though...$"

GREYFOREST1_EventScript_Yan_Text_8:
# 49 "data/maps/GREYFOREST1/scripts.pory"
	.string "I won't hold you back or\nanything.$"

GREYFOREST1_EventScript_Yan_Text_9:
# 50 "data/maps/GREYFOREST1/scripts.pory"
	.string "You know, if you wanted to explore and\n all.$"

GREYFOREST1_EventScript_Yan_Text_10:
# 51 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'm still trying to understand\nthis place myself.$"

GREYFOREST1_EventScript_Yan_Text_11:
# 52 "data/maps/GREYFOREST1/scripts.pory"
	.string "Speaking of which...$"

GREYFOREST1_EventScript_Yan_Text_12:
# 53 "data/maps/GREYFOREST1/scripts.pory"
	.string "...you still have that card I gave\nyou?$"

GREYFOREST1_EventScript_Yan_Text_13:
# 54 "data/maps/GREYFOREST1/scripts.pory"
	.string "If you find yourself stuck or trapped\nor something, call me.$"

GREYFOREST1_EventScript_Yan_Text_14:
# 55 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll save you.$"

GREYFOREST1_EventScript_Yan_Text_15:
# 56 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'm the detective, after all.$"

GREYFOREST1_EventScript_Yan_Text_16:
# 57 "data/maps/GREYFOREST1/scripts.pory"
	.string "Can't have anyone else going missing!$"

GREYFOREST1_EventScript_Yan_Text_17:
# 58 "data/maps/GREYFOREST1/scripts.pory"
	.string "...$"

GREYFOREST1_EventScript_Yan_Text_18:
# 59 "data/maps/GREYFOREST1/scripts.pory"
	.string "You really aren't much of a talker, are\nya?$"

GREYFOREST1_EventScript_Yan_Text_19:
# 60 "data/maps/GREYFOREST1/scripts.pory"
	.string "Well, just don't forget what I told ya.$"

GREYFOREST1_EventScript_Yan_Text_20:
# 61 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll be leaving, now.$"

GREYFOREST1_EventScript_Yan_Text_21:
# 62 "data/maps/GREYFOREST1/scripts.pory"
	.string "I hope I run into you again, {PLAYER}.$"

GREYFOREST1_EventScript_Yan_Text_22:
# 63 "data/maps/GREYFOREST1/scripts.pory"
	.string "See ya!$"
