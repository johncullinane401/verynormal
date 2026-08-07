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
# 17 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_ReturnSign_2:
# 9 "data/maps/WEIRDCAVE1/scripts.pory"
	warp MAP_GREYFOREST1, 13, 4
# 10 "data/maps/WEIRDCAVE1/scripts.pory"
	waitstate
# 11 "data/maps/WEIRDCAVE1/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, WEIRDCAVE1_EventScript_ReturnSign_4
	goto WEIRDCAVE1_EventScript_ReturnSign_1

WEIRDCAVE1_EventScript_ReturnSign_4:
# 12 "data/maps/WEIRDCAVE1/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
# 13 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_ReturnSign_Text_1
	goto WEIRDCAVE1_EventScript_ReturnSign_1


WEIRDCAVE1_EventScript_Rock1::
# 22 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 23 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 24 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 0
	goto_if_lt WEIRDCAVE1_EventScript_Rock1_2
# 24 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 5
	goto_if_gt WEIRDCAVE1_EventScript_Rock1_2
WEIRDCAVE1_EventScript_Rock1_1:
# 27 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock1_7
WEIRDCAVE1_EventScript_Rock1_6:
# 38 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock1_2:
# 25 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
	goto WEIRDCAVE1_EventScript_Rock1_1

WEIRDCAVE1_EventScript_Rock1_7:
# 28 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 29 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_2
# 30 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 0
	goto_if_eq WEIRDCAVE1_EventScript_Rock1_9
# 33 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 0
	goto_if_eq WEIRDCAVE1_EventScript_Rock1_10
	goto WEIRDCAVE1_EventScript_Rock1_6

WEIRDCAVE1_EventScript_Rock1_9:
# 31 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 32 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock1_6

WEIRDCAVE1_EventScript_Rock1_10:
# 34 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 35 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock1_6


WEIRDCAVE1_EventScript_Rock2::
# 42 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 43 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 44 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock2_2
WEIRDCAVE1_EventScript_Rock2_1:
# 58 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock2_2:
# 45 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 46 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock2_Text_0
# 48 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_eq WEIRDCAVE1_EventScript_Rock2_4
# 51 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_gt WEIRDCAVE1_EventScript_Rock2_5
	goto WEIRDCAVE1_EventScript_Rock2_1

WEIRDCAVE1_EventScript_Rock2_4:
# 49 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 50 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock2_1

WEIRDCAVE1_EventScript_Rock2_5:
# 52 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 53 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock2_1


WEIRDCAVE1_EventScript_Rock3::
# 63 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 64 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 65 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock3_2
WEIRDCAVE1_EventScript_Rock3_1:
# 76 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock3_2:
# 66 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 67 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock3_Text_0
# 68 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 2
	goto_if_eq WEIRDCAVE1_EventScript_Rock3_4
# 71 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 2
	goto_if_gt WEIRDCAVE1_EventScript_Rock3_5
# 71 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_eq WEIRDCAVE1_EventScript_Rock3_5
	goto WEIRDCAVE1_EventScript_Rock3_1

WEIRDCAVE1_EventScript_Rock3_4:
# 69 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 70 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock3_1

WEIRDCAVE1_EventScript_Rock3_5:
# 72 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 73 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock3_1


WEIRDCAVE1_EventScript_Rock4::
# 81 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 82 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 83 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_2
WEIRDCAVE1_EventScript_Rock4_1:
# 94 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock4_2:
# 84 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 85 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock4_Text_0
# 86 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 3
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_4
# 89 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 3
	goto_if_gt WEIRDCAVE1_EventScript_Rock4_5
# 89 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 2
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_5
# 89 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 1
	goto_if_eq WEIRDCAVE1_EventScript_Rock4_5
	goto WEIRDCAVE1_EventScript_Rock4_1

WEIRDCAVE1_EventScript_Rock4_4:
# 87 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 88 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_3
	goto WEIRDCAVE1_EventScript_Rock4_1

WEIRDCAVE1_EventScript_Rock4_5:
# 90 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 91 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock4_1


WEIRDCAVE1_EventScript_Rock5::
# 98 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 99 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_0, MSGBOX_YESNO
# 100 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVE1_EventScript_Rock5_2
WEIRDCAVE1_EventScript_Rock5_1:
# 118 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return

WEIRDCAVE1_EventScript_Rock5_2:
# 101 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_1
# 102 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_0
# 103 "data/maps/WEIRDCAVE1/scripts.pory"
	compare VAR_HOTNESS, 4
	goto_if_eq WEIRDCAVE1_EventScript_Rock5_4
# 113 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_7
# 114 "data/maps/WEIRDCAVE1/scripts.pory"
	setvar VAR_HOTNESS, 0
# 115 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock1_Text_4
	goto WEIRDCAVE1_EventScript_Rock5_1

WEIRDCAVE1_EventScript_Rock5_4:
# 104 "data/maps/WEIRDCAVE1/scripts.pory"
	addvar VAR_HOTNESS, 1
# 105 "data/maps/WEIRDCAVE1/scripts.pory"
	setflag FLAG_ROCK_PUZZLE
# 106 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_1
# 107 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_2
# 108 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_3
# 109 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_4
# 110 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_5
# 111 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_Rock5_Text_6
	goto WEIRDCAVE1_EventScript_Rock5_1


WEIRDCAVE1_EventScript_BigRock::
# 122 "data/maps/WEIRDCAVE1/scripts.pory"
	lockall
# 123 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_BigRock_Text_0
# 124 "data/maps/WEIRDCAVE1/scripts.pory"
	msgbox WEIRDCAVE1_EventScript_BigRock_Text_1
# 125 "data/maps/WEIRDCAVE1/scripts.pory"
	releaseall
	return


WEIRDCAVE1_EventScript_ReturnSign_Text_0:
# 7 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "$"

WEIRDCAVE1_EventScript_ReturnSign_Text_1:
# 13 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "The power of teleportation has\nextinguished your hand fire.$"

WEIRDCAVE1_EventScript_Rock1_Text_0:
# 23 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Put your hand on the rock?$"

WEIRDCAVE1_EventScript_Rock1_Text_1:
# 28 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "(You put your hand on the rock.)$"

WEIRDCAVE1_EventScript_Rock1_Text_2:
# 29 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's cold to the touch.$"

WEIRDCAVE1_EventScript_Rock1_Text_3:
# 32 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "You feel your heat tolerance increase.$"

WEIRDCAVE1_EventScript_Rock1_Text_4:
# 35 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "You feel your heat tolerance reset.$"

WEIRDCAVE1_EventScript_Rock2_Text_0:
# 46 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's not warm, but not cold.$"

WEIRDCAVE1_EventScript_Rock3_Text_0:
# 67 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's comfortably warm to the touch.$"

WEIRDCAVE1_EventScript_Rock4_Text_0:
# 85 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's toasty. Your hand starts to feel\nuncomfortable.$"

WEIRDCAVE1_EventScript_Rock5_Text_0:
# 102 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It's burning hot, like pressing against\nthe tray of an oven.$"

WEIRDCAVE1_EventScript_Rock5_Text_1:
# 106 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "(And yet, you keep pressing your\nhand against the rock.)$"

WEIRDCAVE1_EventScript_Rock5_Text_2:
# 107 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "It is an agonizing pain. Words fail\nto describe it.$"

WEIRDCAVE1_EventScript_Rock5_Text_3:
# 108 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Your hand is on fire.$"

WEIRDCAVE1_EventScript_Rock5_Text_4:
# 109 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "...$"

WEIRDCAVE1_EventScript_Rock5_Text_5:
# 110 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "This rock can't hurt you anymore.$"

WEIRDCAVE1_EventScript_Rock5_Text_6:
# 111 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "After all, your hand is on fire.$"

WEIRDCAVE1_EventScript_Rock5_Text_7:
# 113 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "You instinctively pull your hand back.$"

WEIRDCAVE1_EventScript_BigRock_Text_0:
# 123 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "There is a big orange rock here.$"

WEIRDCAVE1_EventScript_BigRock_Text_1:
# 124 "data/maps/WEIRDCAVE1/scripts.pory"
	.string "Nice.$"
