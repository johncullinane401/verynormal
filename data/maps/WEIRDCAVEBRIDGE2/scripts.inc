# 1 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
WEIRDCAVEBRIDGE2_MapScripts::
# 2 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.byte 0

WEIRDCAVEBRIDGE2_EventScript_Briney::
# 6 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	lockall
# 7 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_unset FLAG_BRINEY_CONVO_1, WEIRDCAVEBRIDGE2_EventScript_Briney_2
# 41 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_25
# 42 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_13, MSGBOX_YESNO
# 43 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_21
WEIRDCAVEBRIDGE2_EventScript_Briney_19:
# 46 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_18
WEIRDCAVEBRIDGE2_EventScript_Briney_17:
# 52 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_27
# 53 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_22
WEIRDCAVEBRIDGE2_EventScript_Briney_1:
# 57 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
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
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_3
# 14 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_4
# 15 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_5
# 16 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_6
# 17 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_7
# 18 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_8
# 19 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_9
# 20 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_10
# 21 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_11
# 22 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_12
# 23 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_13, MSGBOX_YESNO
# 24 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_12
WEIRDCAVEBRIDGE2_EventScript_Briney_10:
# 27 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WEIRDCAVEBRIDGE2_EventScript_Briney_9
WEIRDCAVEBRIDGE2_EventScript_Briney_8:
# 33 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_20
# 34 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_21
# 35 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_22
WEIRDCAVEBRIDGE2_EventScript_Briney_5:
# 37 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_23
# 38 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_24
# 39 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	setflag FLAG_BRINEY_CONVO_1
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_1

WEIRDCAVEBRIDGE2_EventScript_Briney_6:
# 25 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_14
# 26 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_15
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_5

WEIRDCAVEBRIDGE2_EventScript_Briney_7:
# 28 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_16
# 29 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_17
# 30 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_18
# 31 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_19
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_5

WEIRDCAVEBRIDGE2_EventScript_Briney_9:
# 27 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_unset FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_7
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_8

WEIRDCAVEBRIDGE2_EventScript_Briney_12:
# 24 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_set FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_6
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_10

WEIRDCAVEBRIDGE2_EventScript_Briney_15:
# 44 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_14
# 45 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_15
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_1

WEIRDCAVEBRIDGE2_EventScript_Briney_16:
# 47 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_26
# 48 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_17
# 49 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_18
# 50 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	msgbox WEIRDCAVEBRIDGE2_EventScript_Briney_Text_19
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_1

WEIRDCAVEBRIDGE2_EventScript_Briney_18:
# 46 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_unset FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_16
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_17

WEIRDCAVEBRIDGE2_EventScript_Briney_21:
# 43 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	goto_if_set FLAG_HAS_SHIP_MATERIALS, WEIRDCAVEBRIDGE2_EventScript_Briney_15
	goto WEIRDCAVEBRIDGE2_EventScript_Briney_19


# 60 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
BrineyMovement1:
# 61 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	face_player
	step_end

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_0:
# 8 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Hm?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_1:
# 11 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Oh!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_2:
# 12 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Wahaha! Sorry lad, I didn't see\nya there!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_3:
# 13 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...hmmm...nope, never see ya before.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_4:
# 14 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "'names Briney! Cap'n Briney to you!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_5:
# 15 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...hrm? What'dya making that face\nfor?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_6:
# 16 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "I've been sailin' 'round there parts\nand came ashore at this here village.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_7:
# 17 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Ain't a soul still livin' here.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_8:
# 18 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "It's quite sad, I say.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_9:
# 19 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "But there's somethin' kinda pretty\n'bout it, don'tcha think?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_10:
# 20 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Wahaha! I ain't a poet.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_11:
# 21 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, anyway, I've been tryna fix up\nthe old girl to get outta here.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_12:
# 22 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Some of the hull got torn up pretty\nbad on my way in.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_13:
# 23 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Say, you wouldn't happen to\nhave any welding fluid on ya?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_14:
# 25 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Oh my stars! I'm saved! Waha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_15:
# 26 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_16:
# 28 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "You do? Waha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_17:
# 29 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "...ah.$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_18:
# 30 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Yer just yanking my chain,\n aren't ya, kid?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_19:
# 31 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, I don't know what I was expectin'. Wahaha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_20:
# 33 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Of course not. Why would\nya have somethin' like that?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_21:
# 34 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Well, if ya find someone who\nmight, let em' know for me, will ya?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_22:
# 35 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "I'll make it worth yer while!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_23:
# 37 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Just don't dent the ship, alright?$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_24:
# 38 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "She's had her fair share, wahaha!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_25:
# 41 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "Ahoy, lad!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_26:
# 47 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "You do?!$"

WEIRDCAVEBRIDGE2_EventScript_Briney_Text_27:
# 52 "data/maps/WEIRDCAVEBRIDGE2/scripts.pory"
	.string "If ya find someone who\nmight, let em' know for me, will ya?$"
