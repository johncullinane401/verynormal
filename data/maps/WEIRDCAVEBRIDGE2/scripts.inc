# 1 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
WEIRDCAVEBRIDGE2_MapScripts::
# 2 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.byte 0

WEIRDCAVEBRIDGE2_EventScript_Briney::
# 6 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	lockall
# 7 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_unset FLAG_BRINEY_CONVO_1, WEIRDCAVEBRIDGE2_EventScript_Briney_2
# 45 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_25
# 46 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_14, MSGBOX_YESNO
# 47 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_15
WEIRDCAVEBRIDGE2_EventScript_Briney_13:
# 50 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_12
WEIRDCAVEBRIDGE2_EventScript_Briney_11:
# 56 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_28
# 57 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_23
WEIRDCAVEBRIDGE2_EventScript_Briney_1:
# 61 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	releaseall
	return

WEIRDCAVEBRIDGE2_EventScript_Briney_2:
# 8 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_0
# 9 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	applymovement 1, BrineyMovement1
# 10 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	waitmovement 0
# 11 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_1
# 12 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_2
# 13 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_set FLAG_MET_OLD_BRINEY, WEIRDCAVEBRIDGE2_EventScript_Briney_6
# 18 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_6
# 19 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_7
WEIRDCAVEBRIDGE2_EventScript_Briney_5:
# 21 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_8
# 22 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_9
# 23 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_10
# 24 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_11
# 25 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_12
# 26 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_13
# 27 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_14, MSGBOX_YESNO
# 28 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_25
WEIRDCAVEBRIDGE2_EventScript_Briney_23:
# 31 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_22
WEIRDCAVEBRIDGE2_EventScript_Briney_21:
# 37 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_21
# 38 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_22
# 39 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_23
WEIRDCAVEBRIDGE2_EventScript_Briney_18:
# 41 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_24
# 42 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	setflag FLAG_NEED_WELDING_FLUID
# 43 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	setflag FLAG_BRINEY_CONVO_1
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_1

WEIRDCAVEBRIDGE2_EventScript_Briney_6:
# 14 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_3
# 15 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_4
# 16 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_5
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_5

WEIRDCAVEBRIDGE2_EventScript_Briney_9:
# 48 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_15
# 49 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_16
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_1

WEIRDCAVEBRIDGE2_EventScript_Briney_10:
# 51 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_26
# 52 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_18
# 53 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_19
# 54 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_27
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_1

WEIRDCAVEBRIDGE2_EventScript_Briney_12:
# 50 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_unset FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_10
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_11

WEIRDCAVEBRIDGE2_EventScript_Briney_15:
# 47 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_set FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_9
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_13

WEIRDCAVEBRIDGE2_EventScript_Briney_19:
# 29 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_15
# 30 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_16
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_18

WEIRDCAVEBRIDGE2_EventScript_Briney_20:
# 32 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_17
# 33 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_18
# 34 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_19
# 35 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_20
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_18

WEIRDCAVEBRIDGE2_EventScript_Briney_22:
# 31 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_unset FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_20
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_21

WEIRDCAVEBRIDGE2_EventScript_Briney_25:
# 28 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_set FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_19
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_23


# 64 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
BrineyMovement1:
# 65 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	face_player
	step_end

WEIRDCAVEBRIDGE2_EventScript_SignForMaze::
# 69 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	lockall
# 70 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_SignForMaze_Text_0
# 71 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	releaseall
	return


WEIRDCAVEBRIDGE2_EventScript_Briney_Text_0:
# 8 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Hm?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_1:
# 11 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Oh!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_2:
# 12 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Sorry kid, I didn't see\nya there!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_3:
# 14 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...oh...{PLAYER}, right?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_4:
# 15 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...hrm? What'dya making that face\nfor?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_5:
# 16 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "You don't recognize me? It's Cap'n\nBriney!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_6:
# 18 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...hmmm...nope, never see ya before.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_7:
# 19 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "'names Briney! Captain Briney to you!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_8:
# 21 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "I've been sailin' 'round there parts\nand came ashore at this here village.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_9:
# 22 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Ain't a soul still livin' here.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_10:
# 23 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "It's quite sad, I say.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_11:
# 24 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "But there's somethin' kinda pretty\n'bout it, don'tcha think?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_12:
# 25 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, anyway, I've been tryna fix up\nthe old girl to get outta here.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_13:
# 26 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Some of the hull got torn up pretty\nbad on my way in.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_14:
# 27 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Say, you wouldn't happen to\nhave any welding fluid on ya?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_15:
# 29 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Oh my stars! I'm saved! Waha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_16:
# 30 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_17:
# 32 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "You do? Waha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_18:
# 33 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...ah.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_19:
# 34 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Yer just yanking my chain,\n aren't ya, kid?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_20:
# 35 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, I don't know what I was expectin'. Wahaha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_21:
# 37 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Of course not. Why would\nya have somethin' like that?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_22:
# 38 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, if ya find someone who\nmight, let em' know for me, will ya?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_23:
# 39 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "I'll make it worth yer while!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_24:
# 41 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Just don't dent the ship, alright? Waha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_25:
# 45 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Ahoy, lad!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_26:
# 51 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "You do?!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_27:
# 54 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, I don't know what I was expectin'.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_28:
# 56 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "If ya find someone who\nmight, let em' know for me, will ya?$"

WEIRDCAVEBRIDGE2_EventScript_SignForMaze_Text_0:
# 70 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "May failure help guide your way.$"
