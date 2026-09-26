# 1 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
WEIRDCAVEBRIDGE_MapScripts::
# 2 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.byte 0

EventScript_BurnTree::
# 6 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	lockall
# 7 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox EventScript_BurnTree_Text_0
# 8 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox EventScript_BurnTree_Text_1
# 9 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox EventScript_BurnTree_Text_2
# 10 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, EventScript_BurnTree_2
EventScript_BurnTree_1:
# 19 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	releaseall
	return

EventScript_BurnTree_2:
# 11 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox EventScript_BurnTree_Text_3
# 12 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox EventScript_BurnTree_Text_4
# 13 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	removeobject 1
# 14 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	setflag FLAG_BURNTREE_2
# 15 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
# 16 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	msgbox EventScript_BurnTree_Text_5
# 17 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	setvar VAR_HOTNESS, 0
	goto EventScript_BurnTree_1


EventScript_BurnTree_Text_0:
# 7 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "At first glance, this tree looks\nlike it could be cut down.$"

EventScript_BurnTree_Text_1:
# 8 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "However, now that you are closer,\nyou realize that is impossible.$"

EventScript_BurnTree_Text_2:
# 9 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "This tree must burn.$"

EventScript_BurnTree_Text_3:
# 11 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "Your burning hand grazes the tree\nand it bursts into flames.$"

EventScript_BurnTree_Text_4:
# 12 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "...$"

EventScript_BurnTree_Text_5:
# 16 "data/maps/WEIRDCAVEBRIDGE/scripts.pory"
	.string "Your hand fire extinguishes,\nits purpose fulfilled.$"
