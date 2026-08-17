# 1 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
WEIRDCAVEBRIDGE_MapScripts::
# 2 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.byte 0

WEIRDCAVEBRIDGE_EventScript_BurnTree::
# 7 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	lockall
# 8 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_0
# 9 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_1
# 10 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_2
# 11 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, WEIRDCAVEBRIDGE_EventScript_BurnTree_2
WEIRDCAVEBRIDGE_EventScript_BurnTree_1:
# 19 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	releaseall
	return

WEIRDCAVEBRIDGE_EventScript_BurnTree_2:
# 12 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_3
# 13 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_4
# 14 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	removeobject 1
# 15 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	setflag FLAG_BURNTREE_2
# 16 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
# 17 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_5
	goto WEIRDCAVEBRIDGE_EventScript_BurnTree_1


WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_0:
# 8 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "At first glance, this tree looks\nlike it could be cut down.$"

WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_1:
# 9 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "However, now that you are closer,\nyou realize that is impossible.$"

WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_2:
# 10 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "This tree must burn.$"

WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_3:
# 12 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "Your burning hand grazes the tree\nand it bursts into flames.$"

WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_4:
# 13 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "...$"

WEIRDCAVEBRIDGE_EventScript_BurnTree_Text_5:
# 17 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "Your hand fire extinguishes,\nits purpose fulfilled.$"
