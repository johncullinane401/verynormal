# 1 "data/maps/HUB/scripts.pory"
HUB_MapScripts::
# 2 "data/maps/HUB/scripts.pory"
	.byte 0

HUB_EventScript_MothmanTalk::
# 6 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_0
# 7 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_1
# 8 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_2
# 9 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_3
# 10 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_4
# 11 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_5
# 12 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_6
# 13 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_7
# 15 "data/maps/HUB/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_VENOM
# 16 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_8
# 17 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_9
# 18 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_10
# 19 "data/maps/HUB/scripts.pory"
	compare VAR_VENOM, 10
	goto_if_lt HUB_EventScript_MothmanTalk_2
HUB_EventScript_MothmanTalk_1:
# 27 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_16
# 28 "data/maps/HUB/scripts.pory"
	trainerbattle_single TRAINER_JARED, MothmanIntro, MothmanOutro
	return

HUB_EventScript_MothmanTalk_2:
# 20 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_11
# 21 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_12
# 22 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_13
# 23 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_14
# 24 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_15
	goto HUB_EventScript_MothmanTalk_1


HUB_EventScript_Gatekeeper::
# 40 "data/maps/HUB/scripts.pory"
	lockall
# 41 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_Gatekeeper_Text_0
# 42 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_Gatekeeper_Text_1
# 43 "data/maps/HUB/scripts.pory"
	releaseall
	return


HUB_EventScript_LRShortcut::
# 47 "data/maps/HUB/scripts.pory"
	lockall
# 48 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_LRShortcut_Text_0, MSGBOX_YESNO
# 49 "data/maps/HUB/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HUB_EventScript_LRShortcut_2
HUB_EventScript_LRShortcut_1:
# 60 "data/maps/HUB/scripts.pory"
	releaseall
	return

HUB_EventScript_LRShortcut_2:
# 50 "data/maps/HUB/scripts.pory"
	clearflag FLAG_DREAMING
# 52 "data/maps/HUB/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, HUB_EventScript_LRShortcut_5
HUB_EventScript_LRShortcut_4:
# 56 "data/maps/HUB/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 42, 15
# 57 "data/maps/HUB/scripts.pory"
	waitstate
	goto HUB_EventScript_LRShortcut_1

HUB_EventScript_LRShortcut_5:
# 53 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_LRShortcut_Text_1
# 54 "data/maps/HUB/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
	goto HUB_EventScript_LRShortcut_4


HUB_EventScript_MothmanTalk_Text_0:
# 6 "data/maps/HUB/scripts.pory"
	.string "Well...what a delicious surprise.$"

HUB_EventScript_MothmanTalk_Text_1:
# 7 "data/maps/HUB/scripts.pory"
	.string "And I thought nobody would find me here.$"

HUB_EventScript_MothmanTalk_Text_2:
# 8 "data/maps/HUB/scripts.pory"
	.string "Keheheh...what joy!$"

HUB_EventScript_MothmanTalk_Text_3:
# 9 "data/maps/HUB/scripts.pory"
	.string "Ah, where are my manners. You may call me\nMOTHMAN.$"

HUB_EventScript_MothmanTalk_Text_4:
# 10 "data/maps/HUB/scripts.pory"
	.string "Please, do not be alarmed. I merely\nwish to sell my services to heroes like you.$"

HUB_EventScript_MothmanTalk_Text_5:
# 11 "data/maps/HUB/scripts.pory"
	.string "I've got things you may find very\nuseful indeed.$"

HUB_EventScript_MothmanTalk_Text_6:
# 12 "data/maps/HUB/scripts.pory"
	.string "Money? No no no, no, that won't\n do at all.$"

HUB_EventScript_MothmanTalk_Text_7:
# 13 "data/maps/HUB/scripts.pory"
	.string "I have no need for material garbage\nsuch as that.$"

HUB_EventScript_MothmanTalk_Text_8:
# 16 "data/maps/HUB/scripts.pory"
	.string "You have something else I seek...$"

HUB_EventScript_MothmanTalk_Text_9:
# 17 "data/maps/HUB/scripts.pory"
	.string "Let's see...$"

HUB_EventScript_MothmanTalk_Text_10:
# 18 "data/maps/HUB/scripts.pory"
	.string "{STR_VAR_1} droplets.$"

HUB_EventScript_MothmanTalk_Text_11:
# 20 "data/maps/HUB/scripts.pory"
	.string "That's all?$"

HUB_EventScript_MothmanTalk_Text_12:
# 21 "data/maps/HUB/scripts.pory"
	.string "Bah, that's no goddamn good at all.$"

HUB_EventScript_MothmanTalk_Text_13:
# 22 "data/maps/HUB/scripts.pory"
	.string "This is hardly even an appetizer!$"

HUB_EventScript_MothmanTalk_Text_14:
# 23 "data/maps/HUB/scripts.pory"
	.string "Just forget I said anything.$"

HUB_EventScript_MothmanTalk_Text_15:
# 24 "data/maps/HUB/scripts.pory"
	.string "You don't have what I seek.$"

HUB_EventScript_MothmanTalk_Text_16:
# 27 "data/maps/HUB/scripts.pory"
	.string "Eheheh...$"

HUB_EventScript_Gatekeeper_Text_0:
# 41 "data/maps/HUB/scripts.pory"
	.string "5 remain.$"

HUB_EventScript_Gatekeeper_Text_1:
# 42 "data/maps/HUB/scripts.pory"
	.string "Aren't you forgetting something?$"

HUB_EventScript_LRShortcut_Text_0:
# 48 "data/maps/HUB/scripts.pory"
	.string "$"

HUB_EventScript_LRShortcut_Text_1:
# 53 "data/maps/HUB/scripts.pory"
	.string "Your hand is no longer on fire.$"

MothmanIntro::
# 31 "data/maps/HUB/scripts.pory"
	.string "You...really got me going, kid!!$"

MothmanOutro::
# 35 "data/maps/HUB/scripts.pory"
	.string "...I....Impossible.$"
