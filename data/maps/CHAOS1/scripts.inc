# 1 "data/maps/CHAOS1/scripts.pory"
CHAOS1_MapScripts::
# 2 "data/maps/CHAOS1/scripts.pory"
	.byte 0

CHAOS1_EventScript_Silence::
# 6 "data/maps/CHAOS1/scripts.pory"
	lockall
# 7 "data/maps/CHAOS1/scripts.pory"
	fadeoutbgm 0
# 8 "data/maps/CHAOS1/scripts.pory"
	delay 200
# 9 "data/maps/CHAOS1/scripts.pory"
	releaseall
	return

