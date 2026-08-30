# 1 "data/maps/FLOWERFIELD/scripts.pory"
FLOWERFIELD_MapScripts::
# 2 "data/maps/FLOWERFIELD/scripts.pory"
	.byte 0

FLOWERFIELD_EventScript_WarpEnter::
# 6 "data/maps/FLOWERFIELD/scripts.pory"
	lockall
# 7 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_WarpEnter_Text_0, MSGBOX_YESNO
# 8 "data/maps/FLOWERFIELD/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FLOWERFIELD_EventScript_WarpEnter_2
FLOWERFIELD_EventScript_WarpEnter_1:
# 13 "data/maps/FLOWERFIELD/scripts.pory"
	releaseall
	return

FLOWERFIELD_EventScript_WarpEnter_2:
# 9 "data/maps/FLOWERFIELD/scripts.pory"
	warp MAP_ROUTE104, 31, 54
# 10 "data/maps/FLOWERFIELD/scripts.pory"
	clearflag FLAG_DREAMING
# 11 "data/maps/FLOWERFIELD/scripts.pory"
	waitstate
	goto FLOWERFIELD_EventScript_WarpEnter_1


FLOWERFIELD_EventScript_PinkFlower::
# 17 "data/maps/FLOWERFIELD/scripts.pory"
	lockall
# 18 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_0
# 19 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_1
# 20 "data/maps/FLOWERFIELD/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, FLOWERFIELD_EventScript_PinkFlower_Text_2, FLOWERFIELD_EventScript_PinkFlower_Text_3, FLOWERFIELD_EventScript_PinkFlower_Text_4, FLOWERFIELD_EventScript_PinkFlower_Text_5
# 21 "data/maps/FLOWERFIELD/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/FLOWERFIELD/scripts.pory"
	case 0, FLOWERFIELD_EventScript_PinkFlower_3
# 26 "data/maps/FLOWERFIELD/scripts.pory"
	case 1, FLOWERFIELD_EventScript_PinkFlower_4
# 42 "data/maps/FLOWERFIELD/scripts.pory"
	case 2, FLOWERFIELD_EventScript_PinkFlower_5
FLOWERFIELD_EventScript_PinkFlower_1:
# 49 "data/maps/FLOWERFIELD/scripts.pory"
	releaseall
	return

FLOWERFIELD_EventScript_PinkFlower_3:
# 23 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_6
# 24 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_7
	goto FLOWERFIELD_EventScript_PinkFlower_1

FLOWERFIELD_EventScript_PinkFlower_4:
# 27 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_8
# 28 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_9
# 29 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_10, MSGBOX_YESNO
# 30 "data/maps/FLOWERFIELD/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FLOWERFIELD_EventScript_PinkFlower_8
FLOWERFIELD_EventScript_PinkFlower_7:
	goto FLOWERFIELD_EventScript_PinkFlower_1

FLOWERFIELD_EventScript_PinkFlower_5:
# 43 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_14
# 44 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_15
	goto FLOWERFIELD_EventScript_PinkFlower_1

FLOWERFIELD_EventScript_PinkFlower_8:
# 31 "data/maps/FLOWERFIELD/scripts.pory"
	delay 100
# 32 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_11
# 33 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_12
# 34 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_13
# 35 "data/maps/FLOWERFIELD/scripts.pory"
	setflag FLAG_STOMPED_FLOWER
# 36 "data/maps/FLOWERFIELD/scripts.pory"
	goto_if_unset FLAG_STOMPED_FLOWER, FLOWERFIELD_EventScript_PinkFlower_10
	goto FLOWERFIELD_EventScript_PinkFlower_7

FLOWERFIELD_EventScript_PinkFlower_10:
# 37 "data/maps/FLOWERFIELD/scripts.pory"
	addvar VAR_VENOM, 10
	goto FLOWERFIELD_EventScript_PinkFlower_7


FLOWERFIELD_EventScript_WhiteFlower::
# 53 "data/maps/FLOWERFIELD/scripts.pory"
	lockall
# 54 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_WhiteFlower_Text_0
# 55 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_1
# 56 "data/maps/FLOWERFIELD/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, FLOWERFIELD_EventScript_PinkFlower_Text_2, FLOWERFIELD_EventScript_PinkFlower_Text_3, FLOWERFIELD_EventScript_PinkFlower_Text_4, FLOWERFIELD_EventScript_PinkFlower_Text_5
# 57 "data/maps/FLOWERFIELD/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/FLOWERFIELD/scripts.pory"
	case 0, FLOWERFIELD_EventScript_WhiteFlower_3
# 62 "data/maps/FLOWERFIELD/scripts.pory"
	case 1, FLOWERFIELD_EventScript_WhiteFlower_4
# 72 "data/maps/FLOWERFIELD/scripts.pory"
	case 2, FLOWERFIELD_EventScript_WhiteFlower_5
FLOWERFIELD_EventScript_WhiteFlower_1:
# 79 "data/maps/FLOWERFIELD/scripts.pory"
	releaseall
	return

FLOWERFIELD_EventScript_WhiteFlower_3:
# 59 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_6
# 60 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_WhiteFlower_Text_1
	goto FLOWERFIELD_EventScript_WhiteFlower_1

FLOWERFIELD_EventScript_WhiteFlower_4:
# 63 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_8
# 64 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_10, MSGBOX_YESNO
# 65 "data/maps/FLOWERFIELD/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FLOWERFIELD_EventScript_WhiteFlower_8
FLOWERFIELD_EventScript_WhiteFlower_7:
	goto FLOWERFIELD_EventScript_WhiteFlower_1

FLOWERFIELD_EventScript_WhiteFlower_5:
# 73 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_PinkFlower_Text_14
# 74 "data/maps/FLOWERFIELD/scripts.pory"
	msgbox FLOWERFIELD_EventScript_WhiteFlower_Text_2
	goto FLOWERFIELD_EventScript_WhiteFlower_1

FLOWERFIELD_EventScript_WhiteFlower_8:
# 66 "data/maps/FLOWERFIELD/scripts.pory"
	goto_if_set FLAG_STOMPED_FLOWER, FLOWERFIELD_EventScript_WhiteFlower_10
	goto FLOWERFIELD_EventScript_WhiteFlower_7

FLOWERFIELD_EventScript_WhiteFlower_10:
# 67 "data/maps/FLOWERFIELD/scripts.pory"
	setflag FLAG_IN_PUNISHMENT
# 68 "data/maps/FLOWERFIELD/scripts.pory"
	warp MAP_CHAOS1, 6, 26
	goto FLOWERFIELD_EventScript_WhiteFlower_7


FLOWERFIELD_EventScript_WarpEnter_Text_0:
# 7 "data/maps/FLOWERFIELD/scripts.pory"
	.string "  ?$"

FLOWERFIELD_EventScript_PinkFlower_Text_0:
# 18 "data/maps/FLOWERFIELD/scripts.pory"
	.string "A lonely pink flower lies here.$"

FLOWERFIELD_EventScript_PinkFlower_Text_1:
# 19 "data/maps/FLOWERFIELD/scripts.pory"
	.string "What do you want to do?$"

FLOWERFIELD_EventScript_PinkFlower_Text_2:
# 20 "data/maps/FLOWERFIELD/scripts.pory"
	.string "Touch it$"

FLOWERFIELD_EventScript_PinkFlower_Text_3:
# 20 "data/maps/FLOWERFIELD/scripts.pory"
	.string "Stomp it$"

FLOWERFIELD_EventScript_PinkFlower_Text_4:
# 20 "data/maps/FLOWERFIELD/scripts.pory"
	.string "Smell it$"

FLOWERFIELD_EventScript_PinkFlower_Text_5:
# 20 "data/maps/FLOWERFIELD/scripts.pory"
	.string "Nothing$"

FLOWERFIELD_EventScript_PinkFlower_Text_6:
# 23 "data/maps/FLOWERFIELD/scripts.pory"
	.string "You reach out and touch the flower.$"

FLOWERFIELD_EventScript_PinkFlower_Text_7:
# 24 "data/maps/FLOWERFIELD/scripts.pory"
	.string "The petals are soft.$"

FLOWERFIELD_EventScript_PinkFlower_Text_8:
# 27 "data/maps/FLOWERFIELD/scripts.pory"
	.string "You raise your foot above the flower.$"

FLOWERFIELD_EventScript_PinkFlower_Text_9:
# 28 "data/maps/FLOWERFIELD/scripts.pory"
	.string "You get a really bad feeling about\ndoing this.$"

FLOWERFIELD_EventScript_PinkFlower_Text_10:
# 29 "data/maps/FLOWERFIELD/scripts.pory"
	.string "Stomp on the flower?$"

FLOWERFIELD_EventScript_PinkFlower_Text_11:
# 32 "data/maps/FLOWERFIELD/scripts.pory"
	.string ".........{PAUSE_UNTIL_PRESS}$"

FLOWERFIELD_EventScript_PinkFlower_Text_12:
# 33 "data/maps/FLOWERFIELD/scripts.pory"
	.string "The flower seems unaffected.$"

FLOWERFIELD_EventScript_PinkFlower_Text_13:
# 34 "data/maps/FLOWERFIELD/scripts.pory"
	.string "But it's the message that counts.$"

FLOWERFIELD_EventScript_PinkFlower_Text_14:
# 43 "data/maps/FLOWERFIELD/scripts.pory"
	.string "You lower your head and smell the\nflower.$"

FLOWERFIELD_EventScript_PinkFlower_Text_15:
# 44 "data/maps/FLOWERFIELD/scripts.pory"
	.string "It smells like cotton candy.$"

FLOWERFIELD_EventScript_WhiteFlower_Text_0:
# 54 "data/maps/FLOWERFIELD/scripts.pory"
	.string "A lonely white flower lies here.$"

FLOWERFIELD_EventScript_WhiteFlower_Text_1:
# 60 "data/maps/FLOWERFIELD/scripts.pory"
	.string "The petals are tense.$"

FLOWERFIELD_EventScript_WhiteFlower_Text_2:
# 74 "data/maps/FLOWERFIELD/scripts.pory"
	.string "It smells like nothing.$"
