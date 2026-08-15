# 1 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
LOSTWOODS7_TRAP_MapScripts::
# 2 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	.byte 0

LOSTWOODS7_TRAP_EventScript_TeleportBack::
# 6 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	lockall
# 7 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	warp MAP_DEEPWOODS4, 9, 13
# 8 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	waitstate
# 9 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	releaseall
# 10 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	lockall
# 11 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	msgbox LOSTWOODS7_TRAP_EventScript_TeleportBack_Text_0
# 12 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	releaseall
	return


LOSTWOODS7_TRAP_EventScript_TeleportBack_Text_0:
# 11 "data/maps/LOSTWOODS7_TRAP/scripts.pory"
	.string "...there's probably an easier way to do this...$"
