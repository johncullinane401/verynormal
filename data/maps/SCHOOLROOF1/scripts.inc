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
	compare FLAG_CANPUSH, 0
	goto_if_ne SCHOOLROOF1_EventScript_Mystery_2
SCHOOLROOF1_EventScript_Mystery_1:
# 20 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return

SCHOOLROOF1_EventScript_Mystery_2:
# 10 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_2
# 11 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_3, MSGBOX_YESNO
# 12 "data/maps/SCHOOLROOF1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SCHOOLROOF1_EventScript_Mystery_4
	goto SCHOOLROOF1_EventScript_Mystery_1

SCHOOLROOF1_EventScript_Mystery_4:
# 13 "data/maps/SCHOOLROOF1/scripts.pory"
	delay 30
# 14 "data/maps/SCHOOLROOF1/scripts.pory"
	removeobject 1
# 15 "data/maps/SCHOOLROOF1/scripts.pory"
	setflag FLAG_ROOF_WOMAN
# 16 "data/maps/SCHOOLROOF1/scripts.pory"
	delay 30
# 17 "data/maps/SCHOOLROOF1/scripts.pory"
	addvar VAR_VENOM, 10
	goto SCHOOLROOF1_EventScript_Mystery_1


SCHOOLROOF1_EventScript_NOTBEHIND::
# 24 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 25 "data/maps/SCHOOLROOF1/scripts.pory"
	clearflag FLAG_CANPUSH
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Behind::
# 30 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	setflag FLAG_CANPUSH
# 32 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Mystery_Text_0:
# 7 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...it's beautiful.$"

SCHOOLROOF1_EventScript_Mystery_Text_1:
# 8 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Please...just leave me be.$"

SCHOOLROOF1_EventScript_Mystery_Text_2:
# 10 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "This girl is entranced, leaning\non the edge of the balcony.$"

SCHOOLROOF1_EventScript_Mystery_Text_3:
# 11 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Push her?$"
