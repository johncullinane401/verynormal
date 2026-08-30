# 1 "data/maps/WARPHOUSE2/scripts.pory"
WARPHOUSE2_MapScripts::
# 2 "data/maps/WARPHOUSE2/scripts.pory"
	.byte 0

WARPHOUSE2_EventScript_Exit::
# 6 "data/maps/WARPHOUSE2/scripts.pory"
	lockall
# 7 "data/maps/WARPHOUSE2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 8 "data/maps/WARPHOUSE2/scripts.pory"
	warp MAP_SCHOOLROOF1, 26, 13
# 9 "data/maps/WARPHOUSE2/scripts.pory"
	waitstate
# 10 "data/maps/WARPHOUSE2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 11 "data/maps/WARPHOUSE2/scripts.pory"
	releaseall
	return

