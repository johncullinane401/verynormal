# 1 "data/maps/lavacave_1/scripts.pory"
lavacave_1_MapScripts::
# 2 "data/maps/lavacave_1/scripts.pory"
	.byte 0

lavacave_1_EventScript_WarpDevice::
# 6 "data/maps/lavacave_1/scripts.pory"
	lockall
# 7 "data/maps/lavacave_1/scripts.pory"
	msgbox lavacave_1_EventScript_WarpDevice_Text_0
# 8 "data/maps/lavacave_1/scripts.pory"
	msgbox lavacave_1_EventScript_WarpDevice_Text_1, MSGBOX_YESNO
# 9 "data/maps/lavacave_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq lavacave_1_EventScript_WarpDevice_2
lavacave_1_EventScript_WarpDevice_1:
# 13 "data/maps/lavacave_1/scripts.pory"
	releaseall
	return

lavacave_1_EventScript_WarpDevice_2:
# 10 "data/maps/lavacave_1/scripts.pory"
	warp MAP_SNOWFOREST_END, 7, 11
# 11 "data/maps/lavacave_1/scripts.pory"
	waitstate
	goto lavacave_1_EventScript_WarpDevice_1


lavacave_1_EventScript_Boy::
# 17 "data/maps/lavacave_1/scripts.pory"
	setflag FLAG_TWIN_FIGHT
# 18 "data/maps/lavacave_1/scripts.pory"
	trainerbattle_double TRAINER_JEFFREY_5, TWINSINTRO, TWINSOUTRO, TWINS_NOTENOUGH
# 19 "data/maps/lavacave_1/scripts.pory"
	removeobject 1
# 20 "data/maps/lavacave_1/scripts.pory"
	releaseall
	return


lavacave_1_EventScript_WarpDevice_Text_0:
# 7 "data/maps/lavacave_1/scripts.pory"
	.string "There is a strange contraption here.$"

lavacave_1_EventScript_WarpDevice_Text_1:
# 8 "data/maps/lavacave_1/scripts.pory"
	.string "Press the button?$"

TWINSINTRO::
# 23 "data/maps/lavacave_1/scripts.pory"
	.string "Qy'py ehiqh yuwbinbyl zil nyh syulm.\nIol vihx cm ohvlyueuvfy.$"

TWINSOUTRO::
# 27 "data/maps/lavacave_1/scripts.pory"
	.string "$"

TWINS_NOTENOUGH::
# 31 "data/maps/lavacave_1/scripts.pory"
	.string "'Cmon.$"
