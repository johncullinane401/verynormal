# 1 "data/maps/WARPHOUSE1/scripts.pory"
WARPHOUSE1_MapScripts::
# 2 "data/maps/WARPHOUSE1/scripts.pory"
	.byte 0

WARPHOUSE1_EventScript_Exit::
# 6 "data/maps/WARPHOUSE1/scripts.pory"
	lockall
# 7 "data/maps/WARPHOUSE1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 8 "data/maps/WARPHOUSE1/scripts.pory"
	warp MAP_GREYFOREST1, 1, 20
# 9 "data/maps/WARPHOUSE1/scripts.pory"
	waitstate
# 10 "data/maps/WARPHOUSE1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 11 "data/maps/WARPHOUSE1/scripts.pory"
	releaseall
	return


WARPHOUSE_EVENTSCRIPT_TV::
# 15 "data/maps/WARPHOUSE1/scripts.pory"
	lockall
# 16 "data/maps/WARPHOUSE1/scripts.pory"
	msgbox WARPHOUSE_EVENTSCRIPT_TV_Text_0
# 17 "data/maps/WARPHOUSE1/scripts.pory"
	msgbox WARPHOUSE_EVENTSCRIPT_TV_Text_1
# 18 "data/maps/WARPHOUSE1/scripts.pory"
	msgbox WARPHOUSE_EVENTSCRIPT_TV_Text_2
# 19 "data/maps/WARPHOUSE1/scripts.pory"
	releaseall
	return


WARPHOUSE_EVENTSCRIPT_TV_Text_0:
# 16 "data/maps/WARPHOUSE1/scripts.pory"
	.string "It's your favorite show!$"

WARPHOUSE_EVENTSCRIPT_TV_Text_1:
# 17 "data/maps/WARPHOUSE1/scripts.pory"
	.string "...oh, wait.$"

WARPHOUSE_EVENTSCRIPT_TV_Text_2:
# 18 "data/maps/WARPHOUSE1/scripts.pory"
	.string "No, it's just TV static.$"
