# 1 "data/maps/GREYFOREST3/scripts.pory"
GREYFOREST3_MapScripts::
# 2 "data/maps/GREYFOREST3/scripts.pory"
	.byte 0

GREYFOREST3_EventScript_NPCTALK1::
# 6 "data/maps/GREYFOREST3/scripts.pory"
	lockall
# 7 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK1_Text_0
# 8 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK1_Text_1
# 9 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK1_Text_2
# 10 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK1_Text_3
# 11 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK1_Text_4
# 12 "data/maps/GREYFOREST3/scripts.pory"
	releaseall
	return


GREYFOREST3_EventScript_NPCTALK2::
# 16 "data/maps/GREYFOREST3/scripts.pory"
	lockall
# 17 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK2_Text_0
# 18 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK2_Text_1
# 19 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK2_Text_2
# 20 "data/maps/GREYFOREST3/scripts.pory"
	releaseall
	return


GREYFOREST3_EventScript_NPCTALK3::
# 24 "data/maps/GREYFOREST3/scripts.pory"
	lockall
# 25 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK3_Text_0
# 26 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK3_Text_1
# 27 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK3_Text_2
# 28 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK3_Text_3
# 29 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_NPCTALK3_Text_4
# 30 "data/maps/GREYFOREST3/scripts.pory"
	releaseall
	return


GREYFOREST3_EventScript_BurnTree::
# 34 "data/maps/GREYFOREST3/scripts.pory"
	lockall
# 35 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_BurnTree_Text_0
# 36 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_BurnTree_Text_1
# 37 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_BurnTree_Text_2
# 38 "data/maps/GREYFOREST3/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, GREYFOREST3_EventScript_BurnTree_2
GREYFOREST3_EventScript_BurnTree_1:
# 46 "data/maps/GREYFOREST3/scripts.pory"
	releaseall
	return

GREYFOREST3_EventScript_BurnTree_2:
# 39 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_BurnTree_Text_3
# 40 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_BurnTree_Text_4
# 41 "data/maps/GREYFOREST3/scripts.pory"
	removeobject 4
# 42 "data/maps/GREYFOREST3/scripts.pory"
	setflag FLAG_BURNTREE
# 43 "data/maps/GREYFOREST3/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
# 44 "data/maps/GREYFOREST3/scripts.pory"
	msgbox GREYFOREST3_EventScript_BurnTree_Text_5
	goto GREYFOREST3_EventScript_BurnTree_1


GREYFOREST3_EventScript_NPCTALK1_Text_0:
# 7 "data/maps/GREYFOREST3/scripts.pory"
	.string "This forest is so beautiful.$"

GREYFOREST3_EventScript_NPCTALK1_Text_1:
# 8 "data/maps/GREYFOREST3/scripts.pory"
	.string "...what's that?$"

GREYFOREST3_EventScript_NPCTALK1_Text_2:
# 9 "data/maps/GREYFOREST3/scripts.pory"
	.string "It's covered in sand?$"

GREYFOREST3_EventScript_NPCTALK1_Text_3:
# 10 "data/maps/GREYFOREST3/scripts.pory"
	.string "No, no, no. Don't worry about that.$"

GREYFOREST3_EventScript_NPCTALK1_Text_4:
# 11 "data/maps/GREYFOREST3/scripts.pory"
	.string "Just enjoy the fresh air, okay?$"

GREYFOREST3_EventScript_NPCTALK2_Text_0:
# 17 "data/maps/GREYFOREST3/scripts.pory"
	.string "Do you like playing in the sand?$"

GREYFOREST3_EventScript_NPCTALK2_Text_1:
# 18 "data/maps/GREYFOREST3/scripts.pory"
	.string "...oh, just don't play in that\ngrey stuff.$"

GREYFOREST3_EventScript_NPCTALK2_Text_2:
# 19 "data/maps/GREYFOREST3/scripts.pory"
	.string "It's ash.$"

GREYFOREST3_EventScript_NPCTALK3_Text_0:
# 25 "data/maps/GREYFOREST3/scripts.pory"
	.string "This place used to be beautiful\nand full of life.$"

GREYFOREST3_EventScript_NPCTALK3_Text_1:
# 26 "data/maps/GREYFOREST3/scripts.pory"
	.string "Now the trees have been drained\nof their color.$"

GREYFOREST3_EventScript_NPCTALK3_Text_2:
# 27 "data/maps/GREYFOREST3/scripts.pory"
	.string "The cool grass and soil has been\nreduced to coarse sand.$"

GREYFOREST3_EventScript_NPCTALK3_Text_3:
# 28 "data/maps/GREYFOREST3/scripts.pory"
	.string "It's such a shame.$"

GREYFOREST3_EventScript_NPCTALK3_Text_4:
# 29 "data/maps/GREYFOREST3/scripts.pory"
	.string "And it's all your fault!$"

GREYFOREST3_EventScript_BurnTree_Text_0:
# 35 "data/maps/GREYFOREST3/scripts.pory"
	.string "At first glance, this tree looks\nlike it could be cut down.$"

GREYFOREST3_EventScript_BurnTree_Text_1:
# 36 "data/maps/GREYFOREST3/scripts.pory"
	.string "However, now that you are closer,\nyou realize that is impossible.$"

GREYFOREST3_EventScript_BurnTree_Text_2:
# 37 "data/maps/GREYFOREST3/scripts.pory"
	.string "This tree must burn.$"

GREYFOREST3_EventScript_BurnTree_Text_3:
# 39 "data/maps/GREYFOREST3/scripts.pory"
	.string "Your burning hand grazes the tree\nand it bursts into flames.$"

GREYFOREST3_EventScript_BurnTree_Text_4:
# 40 "data/maps/GREYFOREST3/scripts.pory"
	.string "...$"

GREYFOREST3_EventScript_BurnTree_Text_5:
# 44 "data/maps/GREYFOREST3/scripts.pory"
	.string "Your hand fire extinguishes,\nits purpose fulfilled.$"
