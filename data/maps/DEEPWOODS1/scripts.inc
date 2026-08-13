# 1 "data/maps/DEEPWOODS1/scripts.pory"
DEEPWOODS1_MapScripts::
# 2 "data/maps/DEEPWOODS1/scripts.pory"
	.byte 0

DEEPWOODS_EventScript_BugCatcher1::
# 6 "data/maps/DEEPWOODS1/scripts.pory"
	lockall
# 7 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS_EventScript_BugCatcher1_Text_0
# 8 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS_EventScript_BugCatcher1_Text_1
# 9 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS_EventScript_BugCatcher1_Text_2
# 10 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS_EventScript_BugCatcher1_Text_3
# 11 "data/maps/DEEPWOODS1/scripts.pory"
	releaseall
	return


DEEPWOODS1_EventScript_Lamp1::
# 15 "data/maps/DEEPWOODS1/scripts.pory"
	lockall
# 16 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_0
# 17 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_1, MSGBOX_YESNO
# 18 "data/maps/DEEPWOODS1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DEEPWOODS1_EventScript_Lamp1_1
	return

DEEPWOODS1_EventScript_Lamp1_1:
# 19 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_2
# 20 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_3
# 21 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_4
	return


DEEPWOODS1_EventScript_Lamp2::
# 25 "data/maps/DEEPWOODS1/scripts.pory"
	lockall
# 26 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_0
# 27 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_1, MSGBOX_YESNO
# 28 "data/maps/DEEPWOODS1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DEEPWOODS1_EventScript_Lamp2_1
	return

DEEPWOODS1_EventScript_Lamp2_1:
# 29 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_2
# 30 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_3
# 31 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_4
	return


DEEPWOODS1_EventScript_Lamp3::
# 35 "data/maps/DEEPWOODS1/scripts.pory"
	lockall
# 36 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_0
# 37 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_1, MSGBOX_YESNO
# 38 "data/maps/DEEPWOODS1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DEEPWOODS1_EventScript_Lamp3_1
	return

DEEPWOODS1_EventScript_Lamp3_1:
# 39 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_2
# 40 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_3
# 41 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_4
	return


DEEPWOODS1_EventScript_Lamp4::
# 46 "data/maps/DEEPWOODS1/scripts.pory"
	lockall
# 47 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_0
# 48 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_1, MSGBOX_YESNO
# 49 "data/maps/DEEPWOODS1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DEEPWOODS1_EventScript_Lamp4_1
	return

DEEPWOODS1_EventScript_Lamp4_1:
# 50 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_2
# 51 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_3
# 52 "data/maps/DEEPWOODS1/scripts.pory"
	msgbox DEEPWOODS1_EventScript_Lamp1_Text_4
	return


DEEPWOODS_EventScript_BugCatcher1_Text_0:
# 7 "data/maps/DEEPWOODS1/scripts.pory"
	.string "I've been searching everywhere for bug\ntype pokemon.$"

DEEPWOODS_EventScript_BugCatcher1_Text_1:
# 8 "data/maps/DEEPWOODS1/scripts.pory"
	.string "I thought I might find them crawling\naround here.$"

DEEPWOODS_EventScript_BugCatcher1_Text_2:
# 9 "data/maps/DEEPWOODS1/scripts.pory"
	.string "But...there's nobody here.$"

DEEPWOODS_EventScript_BugCatcher1_Text_3:
# 10 "data/maps/DEEPWOODS1/scripts.pory"
	.string "There's nothing here.$"

DEEPWOODS1_EventScript_Lamp1_Text_0:
# 16 "data/maps/DEEPWOODS1/scripts.pory"
	.string "This lamp's light switch is off.$"

DEEPWOODS1_EventScript_Lamp1_Text_1:
# 17 "data/maps/DEEPWOODS1/scripts.pory"
	.string "Turn it on?$"

DEEPWOODS1_EventScript_Lamp1_Text_2:
# 19 "data/maps/DEEPWOODS1/scripts.pory"
	.string "You turned on the lamp.$"

DEEPWOODS1_EventScript_Lamp1_Text_3:
# 20 "data/maps/DEEPWOODS1/scripts.pory"
	.string "...$"

DEEPWOODS1_EventScript_Lamp1_Text_4:
# 21 "data/maps/DEEPWOODS1/scripts.pory"
	.string "It's on, it just is very dim.$"
