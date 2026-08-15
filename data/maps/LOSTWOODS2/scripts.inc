# 1 "data/maps/LOSTWOODS2/scripts.pory"
LOSTWOODS2_MapScripts::
# 2 "data/maps/LOSTWOODS2/scripts.pory"
	.byte 0

ToTheTrapWithYou::
# 6 "data/maps/LOSTWOODS2/scripts.pory"
	lockall
# 7 "data/maps/LOSTWOODS2/scripts.pory"
	warp MAP_LOSTWOODS7_TRAP, 9, 8
# 8 "data/maps/LOSTWOODS2/scripts.pory"
	addvar VAR_EPIC_FAILS, 1
# 9 "data/maps/LOSTWOODS2/scripts.pory"
	releaseall
	return


Successful2::
# 13 "data/maps/LOSTWOODS2/scripts.pory"
	lockall
# 14 "data/maps/LOSTWOODS2/scripts.pory"
	warp MAP_LOSTWOODS3, 9, 8
# 15 "data/maps/LOSTWOODS2/scripts.pory"
	releaseall
	return


SetGuessesToZero::
# 19 "data/maps/LOSTWOODS2/scripts.pory"
	lockall
# 20 "data/maps/LOSTWOODS2/scripts.pory"
	setvar VAR_EPIC_FAILS, 0
# 21 "data/maps/LOSTWOODS2/scripts.pory"
	releaseall
	return

