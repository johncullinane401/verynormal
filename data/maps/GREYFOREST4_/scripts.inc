# 1 "data/maps/GREYFOREST4_/scripts.pory"
GREYFOREST4__MapScripts::
# 2 "data/maps/GREYFOREST4_/scripts.pory"
	.byte 0

GREYFOREST4__EventScript_Tower::
# 6 "data/maps/GREYFOREST4_/scripts.pory"
	lockall
# 7 "data/maps/GREYFOREST4_/scripts.pory"
	msgbox GREYFOREST4__EventScript_Tower_Text_0
# 8 "data/maps/GREYFOREST4_/scripts.pory"
	msgbox GREYFOREST4__EventScript_Tower_Text_1
# 9 "data/maps/GREYFOREST4_/scripts.pory"
	releaseall
	return


GREYFOREST4__EventScript_Tower_Text_0:
# 7 "data/maps/GREYFOREST4_/scripts.pory"
	.string "(An obsidian tower stands tall before\nyou.)$"

GREYFOREST4__EventScript_Tower_Text_1:
# 8 "data/maps/GREYFOREST4_/scripts.pory"
	.string "(As you approach it, you hear a faint\nhumming coming from the walls.)$"
