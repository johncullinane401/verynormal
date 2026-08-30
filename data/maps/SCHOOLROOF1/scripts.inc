# 1 "data/maps/SCHOOLROOF1/scripts.pory"
SCHOOLROOF1_MapScripts::
# 2 "data/maps/SCHOOLROOF1/scripts.pory"
	.byte 0

SCHOOLROOF1_EventScript_Mystery::
# 6 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 7 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_0
# 8 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_1
# 9 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_2
# 10 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_NOTBEHIND::
# 14 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 15 "data/maps/SCHOOLROOF1/scripts.pory"
	clearflag FLAG_CANPUSH
# 16 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Behind::
# 20 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 21 "data/maps/SCHOOLROOF1/scripts.pory"
	setflag FLAG_CANPUSH
# 22 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_DestroyGirl::
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	removeobject 5
# 27 "data/maps/SCHOOLROOF1/scripts.pory"
	setflag FLAG_BEACH_GIRL
# 28 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Wallace::
# 32 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 33 "data/maps/SCHOOLROOF1/scripts.pory"
	applymovement 4, LookAtPlayer
# 34 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Wallace_Text_0
# 35 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Wallace_Text_1
# 36 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Wallace_Text_2
# 37 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Wallace_Text_3
# 38 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Boy::
# 42 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 43 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Boy_Text_0
# 44 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Tutorial::
# 48 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 49 "data/maps/SCHOOLROOF1/scripts.pory"
	applymovement 7, LookAtPlayer
# 50 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_0
# 51 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_1
# 52 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_2
# 53 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_3
# 54 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_4
# 55 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_5
# 56 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Tutorial_Text_6
# 57 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Doorway::
# 61 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 62 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Doorway_Text_0
# 63 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Doorway_Text_1
# 64 "data/maps/SCHOOLROOF1/scripts.pory"
	warp MAP_WARPHOUSE1, 3, 7
# 65 "data/maps/SCHOOLROOF1/scripts.pory"
	waitstate
# 66 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


# 69 "data/maps/SCHOOLROOF1/scripts.pory"
LookAtPlayer:
# 70 "data/maps/SCHOOLROOF1/scripts.pory"
	face_player
	step_end

SCHOOLROOF1_EventScript_Mystery_Text_0:
# 7 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...it's beautiful.$"

SCHOOLROOF1_EventScript_Mystery_Text_1:
# 8 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Please, just leave me alone.$"

SCHOOLROOF1_EventScript_Mystery_Text_2:
# 9 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Why don't you explore down there?$"

SCHOOLROOF1_EventScript_Wallace_Text_0:
# 34 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "The storm gets worse and worse\nevery day.$"

SCHOOLROOF1_EventScript_Wallace_Text_1:
# 35 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "You should leave, before it swallows\nyou whole.$"

SCHOOLROOF1_EventScript_Wallace_Text_2:
# 36 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Before the riptide pulls you too far,\nwhere your feet can't touch the sand,\pand you realize you can't breathe.$"

SCHOOLROOF1_EventScript_Wallace_Text_3:
# 37 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "But it'll be too late.$"

SCHOOLROOF1_EventScript_Boy_Text_0:
# 43 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "What a lovely day.$"

SCHOOLROOF1_EventScript_Tutorial_Text_0:
# 50 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "You've seen houses like this,\nI presume?$"

SCHOOLROOF1_EventScript_Tutorial_Text_1:
# 51 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Houses with no doors.$"

SCHOOLROOF1_EventScript_Tutorial_Text_2:
# 52 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Just windows, so you can see inside.$"

SCHOOLROOF1_EventScript_Tutorial_Text_3:
# 53 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "But you want to enter?$"

SCHOOLROOF1_EventScript_Tutorial_Text_4:
# 54 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "How nosy of you.$"

SCHOOLROOF1_EventScript_Tutorial_Text_5:
# 55 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Well, if you want to enter, you'll\nhave to ask the other person.$"

SCHOOLROOF1_EventScript_Tutorial_Text_6:
# 56 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "The one staring through the window,\nright next to you.$"

SCHOOLROOF1_EventScript_Doorway_Text_0:
# 62 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "You sense someone breathing close to\nyou.$"

SCHOOLROOF1_EventScript_Doorway_Text_1:
# 63 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "You grasp their hand...$"
