# 1 "data/maps/FORESTOFREFLECTION/scripts.pory"
FORESTOFREFLECTION_MapScripts::
# 2 "data/maps/FORESTOFREFLECTION/scripts.pory"
	.byte 0

FORESTOFREFLECTION_EventScript_Cry::
# 6 "data/maps/FORESTOFREFLECTION/scripts.pory"
	lockall
# 7 "data/maps/FORESTOFREFLECTION/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 8 "data/maps/FORESTOFREFLECTION/scripts.pory"
	waitmoncry
# 9 "data/maps/FORESTOFREFLECTION/scripts.pory"
	releaseall
	return

