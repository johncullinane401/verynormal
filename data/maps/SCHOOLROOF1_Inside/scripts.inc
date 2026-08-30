# 1 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
SCHOOLROOF1_Inside_MapScripts::
# 2 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	.byte 0

SCHOOLROOF1_Inside_EventScript_Boat::
# 6 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	lockall
# 7 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	msgbox SCHOOLROOF1_Inside_EventScript_Boat_Text_0
# 8 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	msgbox SCHOOLROOF1_Inside_EventScript_Boat_Text_1, MSGBOX_YESNO
# 9 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCHOOLROOF1_Inside_EventScript_Boat_2
# 13 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	msgbox SCHOOLROOF1_Inside_EventScript_Boat_Text_2
SCHOOLROOF1_Inside_EventScript_Boat_1:
# 15 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	releaseall
	return

SCHOOLROOF1_Inside_EventScript_Boat_2:
# 10 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	warp MAP_ICEROOM1, 25, 26
# 11 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	waitstate
	goto SCHOOLROOF1_Inside_EventScript_Boat_1


SCHOOLROOF1_Inside_EventScript_Boat_Text_0:
# 7 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	.string "A seaworthy vessel.$"

SCHOOLROOF1_Inside_EventScript_Boat_Text_1:
# 8 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	.string "Climb aboard?$"

SCHOOLROOF1_Inside_EventScript_Boat_Text_2:
# 13 "data/maps/SCHOOLROOF1_Inside/scripts.pory"
	.string "Understandable.$"
