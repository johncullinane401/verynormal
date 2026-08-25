# 1 "data/maps/ICEROOM1/scripts.pory"
ICEROOM1_MapScripts::
# 2 "data/maps/ICEROOM1/scripts.pory"
	.byte 0

ICEROOM1_EventScript_Boat::
# 7 "data/maps/ICEROOM1/scripts.pory"
	lockall
# 8 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Boat_Text_0
# 9 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Boat_Text_1, MSGBOX_YESNO
# 10 "data/maps/ICEROOM1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ICEROOM1_EventScript_Boat_2
# 14 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Boat_Text_2
ICEROOM1_EventScript_Boat_1:
# 16 "data/maps/ICEROOM1/scripts.pory"
	releaseall
	return

ICEROOM1_EventScript_Boat_2:
# 11 "data/maps/ICEROOM1/scripts.pory"
	warp MAP_SCHOOLROOF1_INSIDE, 4, 4
# 12 "data/maps/ICEROOM1/scripts.pory"
	waitstate
	goto ICEROOM1_EventScript_Boat_1


ICEROOM1_EventScript_Girl1::
# 20 "data/maps/ICEROOM1/scripts.pory"
	lockall
# 21 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Girl1_Text_0
# 22 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Girl1_Text_1
# 23 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Girl1_Text_2
# 24 "data/maps/ICEROOM1/scripts.pory"
	releaseall
	return


ICEROOM1_EventScript_Girl2::
# 28 "data/maps/ICEROOM1/scripts.pory"
	lockall
# 29 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Girl2_Text_0
# 30 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Girl2_Text_1
# 31 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Girl2_Text_2
# 32 "data/maps/ICEROOM1/scripts.pory"
	releaseall
	return


ICEROOM1_EventScript_Duskull::
# 36 "data/maps/ICEROOM1/scripts.pory"
	lockall
# 37 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Duskull_Text_0
# 38 "data/maps/ICEROOM1/scripts.pory"
	goto_if_unset FLAG_DUSKULL, ICEROOM1_EventScript_Duskull_2
ICEROOM1_EventScript_Duskull_1:
# 43 "data/maps/ICEROOM1/scripts.pory"
	releaseall
	return

ICEROOM1_EventScript_Duskull_2:
# 39 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Duskull_Text_1
# 40 "data/maps/ICEROOM1/scripts.pory"
	msgbox ICEROOM1_EventScript_Duskull_Text_2
# 41 "data/maps/ICEROOM1/scripts.pory"
	setflag FLAG_DUSKULL
	goto ICEROOM1_EventScript_Duskull_1


ICEROOM1_EventScript_HideGirls::
# 47 "data/maps/ICEROOM1/scripts.pory"
	lockall
# 48 "data/maps/ICEROOM1/scripts.pory"
	setflag FLAG_HIDE_GIRLS
# 49 "data/maps/ICEROOM1/scripts.pory"
	removeobject 4
# 50 "data/maps/ICEROOM1/scripts.pory"
	removeobject 2
# 51 "data/maps/ICEROOM1/scripts.pory"
	removeobject 3
# 52 "data/maps/ICEROOM1/scripts.pory"
	releaseall
	return


ICEROOM1_EventScript_Boat_Text_0:
# 8 "data/maps/ICEROOM1/scripts.pory"
	.string "A seaworthy vessel.$"

ICEROOM1_EventScript_Boat_Text_1:
# 9 "data/maps/ICEROOM1/scripts.pory"
	.string "Ready for the return journey?$"

ICEROOM1_EventScript_Boat_Text_2:
# 14 "data/maps/ICEROOM1/scripts.pory"
	.string "Understandable.$"

ICEROOM1_EventScript_Girl1_Text_0:
# 21 "data/maps/ICEROOM1/scripts.pory"
	.string "I'm trying to get her to play\nwith me, but she hates my Duskull doll!$"

ICEROOM1_EventScript_Girl1_Text_1:
# 22 "data/maps/ICEROOM1/scripts.pory"
	.string "Maybe he's a little creepy...$"

ICEROOM1_EventScript_Girl1_Text_2:
# 23 "data/maps/ICEROOM1/scripts.pory"
	.string "But Duskull's my favorite...\nhe's such a cutie!$"

ICEROOM1_EventScript_Girl2_Text_0:
# 29 "data/maps/ICEROOM1/scripts.pory"
	.string "God, why is she so persistent?$"

ICEROOM1_EventScript_Girl2_Text_1:
# 30 "data/maps/ICEROOM1/scripts.pory"
	.string "I don't even want to play out here.\nIt's too cold.$"

ICEROOM1_EventScript_Girl2_Text_2:
# 31 "data/maps/ICEROOM1/scripts.pory"
	.string "      , let's just go back inside!$"

ICEROOM1_EventScript_Duskull_Text_0:
# 37 "data/maps/ICEROOM1/scripts.pory"
	.string "It's a plush toy resembling the\nPokemon Duskull.$"

ICEROOM1_EventScript_Duskull_Text_1:
# 39 "data/maps/ICEROOM1/scripts.pory"
	.string "....................$"

ICEROOM1_EventScript_Duskull_Text_2:
# 40 "data/maps/ICEROOM1/scripts.pory"
	.string "......................................cute.$"
