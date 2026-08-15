# 1 "data/maps/LOSTWOODS8/scripts.pory"
LOSTWOODS8_MapScripts::
# 2 "data/maps/LOSTWOODS8/scripts.pory"
	.byte 0

Successful8::
# 6 "data/maps/LOSTWOODS8/scripts.pory"
	lockall
# 7 "data/maps/LOSTWOODS8/scripts.pory"
	warp MAP_LOSTWOODSEND, 9, 10
# 8 "data/maps/LOSTWOODS8/scripts.pory"
	releaseall
	return

