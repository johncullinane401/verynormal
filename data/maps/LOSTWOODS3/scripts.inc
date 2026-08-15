# 1 "data/maps/LOSTWOODS3/scripts.pory"
LOSTWOODS3_MapScripts::
# 2 "data/maps/LOSTWOODS3/scripts.pory"
	.byte 0

Successful3::
# 6 "data/maps/LOSTWOODS3/scripts.pory"
	lockall
# 7 "data/maps/LOSTWOODS3/scripts.pory"
	warp MAP_LOSTWOODS4, 9, 8
# 8 "data/maps/LOSTWOODS3/scripts.pory"
	releaseall
	return

