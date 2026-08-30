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
	goto_if_unset FLAG_SECOND_YAN_MEETING, GREYFOREST1_EventScript_Yan_2
GREYFOREST1_EventScript_Yan_1:
# 80 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return

GREYFOREST1_EventScript_Yan_2:
# 36 "data/maps/GREYFOREST1/scripts.pory"
	addobject 1
# 37 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_0
# 38 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanMoveDownAlot
# 39 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 40 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_1
# 41 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_2
# 42 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_3
# 43 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanUp
# 44 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 45 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_4
# 46 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanDown
# 47 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_5
# 48 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_6
# 49 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_7
# 50 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_8
# 51 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_9
# 52 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_10
# 53 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_11
# 54 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_12
# 55 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_13
# 56 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_14
# 57 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_15
# 58 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_16
# 59 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_17
# 60 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_18
# 61 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_19
# 62 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_20
# 63 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_21
# 64 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_22
# 65 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanUp
# 66 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 67 "data/maps/GREYFOREST1/scripts.pory"
	delay 5
# 68 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanDown
# 69 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 70 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_23
# 71 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_24
# 72 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_25
# 73 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_26
# 74 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Yan_Text_27
# 75 "data/maps/GREYFOREST1/scripts.pory"
	applymovement 1, YanLeave
# 76 "data/maps/GREYFOREST1/scripts.pory"
	waitmovement 1
# 77 "data/maps/GREYFOREST1/scripts.pory"
	removeobject 1
# 78 "data/maps/GREYFOREST1/scripts.pory"
	setflag FLAG_SECOND_YAN_MEETING
	goto GREYFOREST1_EventScript_Yan_1


# 85 "data/maps/GREYFOREST1/scripts.pory"
YanMoveDownAlot:
# 86 "data/maps/GREYFOREST1/scripts.pory"
	face_down
# 87 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 87 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 87 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 87 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 87 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 87 "data/maps/GREYFOREST1/scripts.pory"
	walk_down
# 88 "data/maps/GREYFOREST1/scripts.pory"
	face_player
	step_end

# 91 "data/maps/GREYFOREST1/scripts.pory"
YanLeave:
# 92 "data/maps/GREYFOREST1/scripts.pory"
	face_up
# 93 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 93 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 93 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 93 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 93 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 93 "data/maps/GREYFOREST1/scripts.pory"
	walk_up
# 94 "data/maps/GREYFOREST1/scripts.pory"
	face_player
	step_end

# 97 "data/maps/GREYFOREST1/scripts.pory"
YanUp:
# 98 "data/maps/GREYFOREST1/scripts.pory"
	face_up
	step_end

# 101 "data/maps/GREYFOREST1/scripts.pory"
YanDown:
# 102 "data/maps/GREYFOREST1/scripts.pory"
	face_player
	step_end

GREYFOREST1_EventScript_Window::
# 106 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 107 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Window_Text_0
# 108 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Window_Text_1
# 109 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Window_Text_2
# 110 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Window_Text_3
# 111 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Window_Text_4
# 112 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_Doorway::
# 116 "data/maps/GREYFOREST1/scripts.pory"
	lockall
# 117 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Doorway_Text_0
# 118 "data/maps/GREYFOREST1/scripts.pory"
	msgbox GREYFOREST1_EventScript_Doorway_Text_1
# 119 "data/maps/GREYFOREST1/scripts.pory"
	warp MAP_WARPHOUSE2, 3, 7
# 120 "data/maps/GREYFOREST1/scripts.pory"
	waitstate
# 121 "data/maps/GREYFOREST1/scripts.pory"
	releaseall
	return


GREYFOREST1_EventScript_Exit_Text_0:
# 11 "data/maps/GREYFOREST1/scripts.pory"
	.string "Your hand is no longer on fire.$"

GREYFOREST1_EventScript_Yan_Text_0:
# 37 "data/maps/GREYFOREST1/scripts.pory"
	.string "{COLOR RED}...it's you!$"

GREYFOREST1_EventScript_Yan_Text_1:
# 40 "data/maps/GREYFOREST1/scripts.pory"
	.string "{PLAYER}!$"

GREYFOREST1_EventScript_Yan_Text_2:
# 41 "data/maps/GREYFOREST1/scripts.pory"
	.string "Wha...what are you doing here!?$"

GREYFOREST1_EventScript_Yan_Text_3:
# 42 "data/maps/GREYFOREST1/scripts.pory"
	.string "......$"

GREYFOREST1_EventScript_Yan_Text_4:
# 45 "data/maps/GREYFOREST1/scripts.pory"
	.string "Ha...you didn't call.$"

GREYFOREST1_EventScript_Yan_Text_5:
# 47 "data/maps/GREYFOREST1/scripts.pory"
	.string "Seems you've stumbled upon something\ninteresting.$"

GREYFOREST1_EventScript_Yan_Text_6:
# 48 "data/maps/GREYFOREST1/scripts.pory"
	.string "I don't think...you should be in this\nplace.$"

GREYFOREST1_EventScript_Yan_Text_7:
# 49 "data/maps/GREYFOREST1/scripts.pory"
	.string "Despite that, though...$"

GREYFOREST1_EventScript_Yan_Text_8:
# 50 "data/maps/GREYFOREST1/scripts.pory"
	.string "I won't hold you back.$"

GREYFOREST1_EventScript_Yan_Text_9:
# 51 "data/maps/GREYFOREST1/scripts.pory"
	.string "You know, if you wanted to explore it.$"

GREYFOREST1_EventScript_Yan_Text_10:
# 52 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'm still trying to understand\nthis place myself.$"

GREYFOREST1_EventScript_Yan_Text_11:
# 53 "data/maps/GREYFOREST1/scripts.pory"
	.string "Speaking of which...$"

GREYFOREST1_EventScript_Yan_Text_12:
# 54 "data/maps/GREYFOREST1/scripts.pory"
	.string "...you still have that card I gave\nyou?$"

GREYFOREST1_EventScript_Yan_Text_13:
# 55 "data/maps/GREYFOREST1/scripts.pory"
	.string "If you find yourself stuck or trapped\nor something, call me.$"

GREYFOREST1_EventScript_Yan_Text_14:
# 56 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll pull you out of here.$"

GREYFOREST1_EventScript_Yan_Text_15:
# 57 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'm a detective, after all.$"

GREYFOREST1_EventScript_Yan_Text_16:
# 58 "data/maps/GREYFOREST1/scripts.pory"
	.string "Can't have anyone going missing, now.$"

GREYFOREST1_EventScript_Yan_Text_17:
# 59 "data/maps/GREYFOREST1/scripts.pory"
	.string "...$"

GREYFOREST1_EventScript_Yan_Text_18:
# 60 "data/maps/GREYFOREST1/scripts.pory"
	.string "You really aren't much of a talker, are\nya?$"

GREYFOREST1_EventScript_Yan_Text_19:
# 61 "data/maps/GREYFOREST1/scripts.pory"
	.string "Well, just don't forget what I told you.$"

GREYFOREST1_EventScript_Yan_Text_20:
# 62 "data/maps/GREYFOREST1/scripts.pory"
	.string "I'll be leaving, now.$"

GREYFOREST1_EventScript_Yan_Text_21:
# 63 "data/maps/GREYFOREST1/scripts.pory"
	.string "I hope I run into you again, {PLAYER}.$"

GREYFOREST1_EventScript_Yan_Text_22:
# 64 "data/maps/GREYFOREST1/scripts.pory"
	.string "See ya!$"

GREYFOREST1_EventScript_Yan_Text_23:
# 70 "data/maps/GREYFOREST1/scripts.pory"
	.string "Oh, yeah.$"

GREYFOREST1_EventScript_Yan_Text_24:
# 71 "data/maps/GREYFOREST1/scripts.pory"
	.string "You look like a smart kid, so I'm sure\nyou can find your way around here.$"

GREYFOREST1_EventScript_Yan_Text_25:
# 72 "data/maps/GREYFOREST1/scripts.pory"
	.string "But here's a little secret I figured\nout myself.$"

GREYFOREST1_EventScript_Yan_Text_26:
# 73 "data/maps/GREYFOREST1/scripts.pory"
	.string "If you see any strange rocks...\nyou should check them out.$"

GREYFOREST1_EventScript_Yan_Text_27:
# 74 "data/maps/GREYFOREST1/scripts.pory"
	.string "That's all for now!$"

GREYFOREST1_EventScript_Window_Text_0:
# 107 "data/maps/GREYFOREST1/scripts.pory"
	.string "A house with no door.$"

GREYFOREST1_EventScript_Window_Text_1:
# 108 "data/maps/GREYFOREST1/scripts.pory"
	.string "You can hear several people talking\ninside.$"

GREYFOREST1_EventScript_Window_Text_2:
# 109 "data/maps/GREYFOREST1/scripts.pory"
	.string "They sound like they are having a\ngood time.$"

GREYFOREST1_EventScript_Window_Text_3:
# 110 "data/maps/GREYFOREST1/scripts.pory"
	.string "...or maybe they are arguing.$"

GREYFOREST1_EventScript_Window_Text_4:
# 111 "data/maps/GREYFOREST1/scripts.pory"
	.string "It's muffled, so it's impossible to\ntell.$"

GREYFOREST1_EventScript_Doorway_Text_0:
# 117 "data/maps/GREYFOREST1/scripts.pory"
	.string "You sense someone breathing close to\nyou.$"

GREYFOREST1_EventScript_Doorway_Text_1:
# 118 "data/maps/GREYFOREST1/scripts.pory"
	.string "You grasp their hand...$"
