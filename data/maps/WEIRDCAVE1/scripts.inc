# 1 "data/maps/WEIRDCAVE1/scripts.pory"
WEIRDCAVE1_MapScripts::
# 2 "data/maps/WEIRDCAVE1/scripts.pory"
	.byte 0

WEIRDCAVE1_EventScript_ReturnSign::
# 6 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 7 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_ReturnSign_Text_0, MSGBOX_YESNO
# 8 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WEIRDCAVE1_EventScript_ReturnSign_2
WEIRDCAVE1_EventScript_ReturnSign_1:
# 15 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_ReturnSign_2:
# 9 "data/maps/WEIRDCAVE1/scripts.pory"
	warp MAP_ROUTE103, 4, 1
# 10 "data/maps/WEIRDCAVE1/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, WEIRDCAVE1_EventScript_ReturnSign_4
	goto WEIRDCAVE1_EventScript_ReturnSign_1

WEIRDCAVE1_EventScript_ReturnSign_4:
# 11 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_ReturnSign_Text_1
# 12 "data/maps/WEIRDCAVE1/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
	goto WEIRDCAVE1_EventScript_ReturnSign_1


WEIRDCAVE1_EventScript_Rock1::
# 20 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 21 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 22 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 0
	goto_if_lt WEIRDCAVE1_EventScript_Rock1_2
# 22 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 5
	goto_if_gt WEIRDCAVE1_EventScript_Rock1_2
WEIRDCAVE1_EventScript_Rock1_1:
# 25 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock1_7
WEIRDCAVE1_EventScript_Rock1_6:
# 36 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock1_2:
# 23 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
	goto WEIRDCAVE1_EventScript_Rock1_1

WEIRDCAVE1_EventScript_Rock1_7:
# 26 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 27 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_2
# 28 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 0
	goto_if_eq WEIRDCAVE1_EventScript_Rock1_9
# 31 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 0
	goto_if_eq WEIRDCAVE1_EventScript_Rock1_10
	goto WEIRDCAVE1_EventScript_Rock1_6

WEIRDCAVE1_EventScript_Rock1_9:
# 29 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 30 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock1_6

WEIRDCAVE1_EventScript_Rock1_10:
# 32 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 33 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock1_6


WEIRDCAVE1_EventScript_Rock2::
# 40 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 41 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 42 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock2_2
WEIRDCAVE1_EventScript_Rock2_1:
# 56 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock2_2:
# 43 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 44 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock2_Text_0
# 46 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_eq WEIRDCAVE1_EventScript_Rock2_4
# 49 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_gt WEIRDCAVE1_EventScript_Rock2_5
	goto WEIRDCAVE1_EventScript_Rock2_1

WEIRDCAVE1_EventScript_Rock2_4:
# 47 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 48 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock2_1

WEIRDCAVE1_EventScript_Rock2_5:
# 50 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 51 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock2_1


WEIRDCAVE1_EventScript_Rock3::
# 61 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 62 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 63 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock3_2
WEIRDCAVE1_EventScript_Rock3_1:
# 74 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock3_2:
# 64 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 65 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock3_Text_0
# 66 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 2
	goto_if_eq WEIRDCAVE1_EventScript_Rock3_4
# 69 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 2
	goto_if_gt WEIRDCAVE1_EventScript_Rock3_5
# 69 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_eq WEIRDCAVE1_EventScript_Rock3_5
	goto WEIRDCAVE1_EventScript_Rock3_1

WEIRDCAVE1_EventScript_Rock3_4:
# 67 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 68 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock3_1

WEIRDCAVE1_EventScript_Rock3_5:
# 70 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 71 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock3_1


WEIRDCAVE1_EventScript_Rock4::
# 79 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 80 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 81 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_2
WEIRDCAVE1_EventScript_Rock4_1:
# 92 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock4_2:
# 82 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 83 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock4_Text_0
# 84 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 3
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_4
# 87 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 3
	goto_if_gt WEIRDCAVE1_EventScript_Rock4_5
# 87 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 2
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_5
# 87 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_5
	goto WEIRDCAVE1_EventScript_Rock4_1

WEIRDCAVE1_EventScript_Rock4_4:
# 85 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 86 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock4_1

WEIRDCAVE1_EventScript_Rock4_5:
# 88 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 89 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock4_1


WEIRDCAVE1_EventScript_Rock5::
# 96 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 97 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 98 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock5_2
WEIRDCAVE1_EventScript_Rock5_1:
# 114 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock5_2:
# 99 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 100 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_0
# 101 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 4
	goto_if_eq WEIRDCAVE1_EventScript_Rock5_4
# 111 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_7
	goto WEIRDCAVE1_EventScript_Rock5_1

WEIRDCAVE1_EventScript_Rock5_4:
# 102 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 103 "data/maps/WEIRDCAVE1/scripts.pory"
	setflag FLAG_ROCK_PUZZLE
# 104 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_1
# 105 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_2
# 106 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_3
# 107 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_4
# 108 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_5
# 109 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_6
	goto WEIRDCAVE1_EventScript_Rock5_1


WEIRDCAVE1_EventScript_ReturnSign_Text_0:
# 7 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Leave this place?$"

WEIRDCAVE1_EventScript_ReturnSign_Text_1:
# 11 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Your hand is no longer on fire.$"

WEIRDCAVE1_EventScript_Rock1_Text_0:
# 21 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Put your hand on the rock?$"

WEIRDCAVE1_EventScript_Rock1_Text_1:
# 26 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "(You put your hand on the rock.)$"

WEIRDCAVE1_EventScript_Rock1_Text_2:
# 27 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's cold to the touch.$"

WEIRDCAVE1_EventScript_Rock1_Text_3:
# 30 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "You feel your heat tolerance increase.$"

WEIRDCAVE1_EventScript_Rock1_Text_4:
# 33 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "You feel your heat tolerance reset.$"

WEIRDCAVE1_EventScript_Rock2_Text_0:
# 44 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's not warm, but not cold.$"

WEIRDCAVE1_EventScript_Rock3_Text_0:
# 65 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's comfortably warm to the touch.$"

WEIRDCAVE1_EventScript_Rock4_Text_0:
# 83 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's toasty. Your hand starts to feel\nuncomfortable.$"

WEIRDCAVE1_EventScript_Rock5_Text_0:
# 100 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's burning hot, like pressing against\nthe tray of an oven.$"

WEIRDCAVE1_EventScript_Rock5_Text_1:
# 104 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "(And yet, you keep pressing your\nhand against the rock.)$"

WEIRDCAVE1_EventScript_Rock5_Text_2:
# 105 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It is an agonizing pain. Words fail\nto describe it.$"

WEIRDCAVE1_EventScript_Rock5_Text_3:
# 106 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Your hand is on fire.$"

WEIRDCAVE1_EventScript_Rock5_Text_4:
# 107 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "...$"

WEIRDCAVE1_EventScript_Rock5_Text_5:
# 108 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "This rock can't hurt you anymore.$"

WEIRDCAVE1_EventScript_Rock5_Text_6:
# 109 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "After all, your hand is on fire.$"

WEIRDCAVE1_EventScript_Rock5_Text_7:
# 111 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "You instinctively pull your hand back.$"
