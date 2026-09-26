# 1 "data/maps/DEEPWOODS2/scripts.pory"
DEEPWOODS2_MapScripts::
# 2 "data/maps/DEEPWOODS2/scripts.pory"
	.byte 0

DEEPWOODS2_EventScript_MakeGhost::
# 6 "data/maps/DEEPWOODS2/scripts.pory"
	goto_if_unset FLAG_DEEPWOODS_YIN, DEEPWOODS2_EventScript_MakeGhost_2
DEEPWOODS2_EventScript_MakeGhost_1:
# 12 "data/maps/DEEPWOODS2/scripts.pory"
	release
	return

DEEPWOODS2_EventScript_MakeGhost_2:
# 7 "data/maps/DEEPWOODS2/scripts.pory"
	applymovement 1, GhostMoveUp
# 8 "data/maps/DEEPWOODS2/scripts.pory"
	waitmovement 0
# 9 "data/maps/DEEPWOODS2/scripts.pory"
	removeobject 1
# 10 "data/maps/DEEPWOODS2/scripts.pory"
	setflag FLAG_DEEPWOODS_YIN
	goto DEEPWOODS2_EventScript_MakeGhost_1


# 15 "data/maps/DEEPWOODS2/scripts.pory"
GhostMoveUp:
# 16 "data/maps/DEEPWOODS2/scripts.pory"
	walk_up
# 17 "data/maps/DEEPWOODS2/scripts.pory"
	walk_up
	step_end

DEEPWOODS2_EventScript_BugCatcher1::
# 21 "data/maps/DEEPWOODS2/scripts.pory"
	lockall
# 22 "data/maps/DEEPWOODS2/scripts.pory"
	msgbox DEEPWOODS2_EventScript_BugCatcher1_Text_0
# 23 "data/maps/DEEPWOODS2/scripts.pory"
	msgbox DEEPWOODS2_EventScript_BugCatcher1_Text_1
# 24 "data/maps/DEEPWOODS2/scripts.pory"
	msgbox DEEPWOODS2_EventScript_BugCatcher1_Text_2
# 25 "data/maps/DEEPWOODS2/scripts.pory"
	msgbox DEEPWOODS2_EventScript_BugCatcher1_Text_3
# 26 "data/maps/DEEPWOODS2/scripts.pory"
	releaseall
	return


DEEPWOODS2_EventScript_OminousMessage::
# 30 "data/maps/DEEPWOODS2/scripts.pory"
	lockall
# 31 "data/maps/DEEPWOODS2/scripts.pory"
	goto_if_unset FLAG_FOREST_MESSAGE, DEEPWOODS2_EventScript_OminousMessage_2
DEEPWOODS2_EventScript_OminousMessage_1:
# 36 "data/maps/DEEPWOODS2/scripts.pory"
	releaseall
	return

DEEPWOODS2_EventScript_OminousMessage_2:
# 32 "data/maps/DEEPWOODS2/scripts.pory"
	msgbox DEEPWOODS2_EventScript_OminousMessage_Text_0
# 33 "data/maps/DEEPWOODS2/scripts.pory"
	setflag FLAG_FOREST_MESSAGE
	goto DEEPWOODS2_EventScript_OminousMessage_1


DEEPWOODS2_EventScript_BugCatcher1_Text_0:
# 22 "data/maps/DEEPWOODS2/scripts.pory"
	.string "I've been searching everywhere for bug\ntype pokemon.$"

DEEPWOODS2_EventScript_BugCatcher1_Text_1:
# 23 "data/maps/DEEPWOODS2/scripts.pory"
	.string "I thought I might find them crawling\naround here.$"

DEEPWOODS2_EventScript_BugCatcher1_Text_2:
# 24 "data/maps/DEEPWOODS2/scripts.pory"
	.string "But...there's nobody here.$"

DEEPWOODS2_EventScript_BugCatcher1_Text_3:
# 25 "data/maps/DEEPWOODS2/scripts.pory"
	.string "There's nothing here.$"

DEEPWOODS2_EventScript_OminousMessage_Text_0:
# 32 "data/maps/DEEPWOODS2/scripts.pory"
	.string "(The forest seems to stretch on\nforever...)$"
