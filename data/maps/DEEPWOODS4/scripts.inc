# 1 "data/maps/DEEPWOODS4/scripts.pory"
DEEPWOODS4_MapScripts::
# 2 "data/maps/DEEPWOODS4/scripts.pory"
	.byte 0

Successful1::
# 6 "data/maps/DEEPWOODS4/scripts.pory"
	lockall
# 7 "data/maps/DEEPWOODS4/scripts.pory"
	warp MAP_LOSTWOODS2, 9, 8
# 8 "data/maps/DEEPWOODS4/scripts.pory"
	releaseall
	return


DEEPWOODS4_EventScript_BroJustGiveUp::
# 12 "data/maps/DEEPWOODS4/scripts.pory"
	lockall
# 13 "data/maps/DEEPWOODS4/scripts.pory"
	compare VAR_EPIC_FAILS, 3
	goto_if_ge DEEPWOODS4_EventScript_BroJustGiveUp_2
DEEPWOODS4_EventScript_BroJustGiveUp_1:
# 17 "data/maps/DEEPWOODS4/scripts.pory"
	releaseall
	return

DEEPWOODS4_EventScript_BroJustGiveUp_2:
# 14 "data/maps/DEEPWOODS4/scripts.pory"
	msgbox DEEPWOODS4_EventScript_BroJustGiveUp_Text_0
# 15 "data/maps/DEEPWOODS4/scripts.pory"
	setvar VAR_EPIC_FAILS, 0
	goto DEEPWOODS4_EventScript_BroJustGiveUp_1


DEEPWOODS4_EventScript_BroJustGiveUp_Text_0:
# 14 "data/maps/DEEPWOODS4/scripts.pory"
	.string "There's probably an easier way to do\nthis...$"
