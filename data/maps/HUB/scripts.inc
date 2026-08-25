# 1 "data/maps/HUB/scripts.pory"
HUB_MapScripts::
# 2 "data/maps/HUB/scripts.pory"
	.byte 0

HUB_EventScript_MothmanTalk::
# 6 "data/maps/HUB/scripts.pory"
	lockall
# 7 "data/maps/HUB/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_VENOM
# 8 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_0
# 9 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_1
# 10 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_2
# 11 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_3
# 13 "data/maps/HUB/scripts.pory"
	compare VAR_VENOM, 10
	goto_if_gt HUB_EventScript_MothmanTalk_2
HUB_EventScript_MothmanTalk_1:
# 39 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_23
# 40 "data/maps/HUB/scripts.pory"
	trainerbattle_single TRAINER_JARED, MothmanIntro, MothmanOutro
# 41 "data/maps/HUB/scripts.pory"
	releaseall
	return

HUB_EventScript_MothmanTalk_2:
# 14 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_4
# 15 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_5
# 16 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_6
# 17 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_7
# 18 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_8
# 19 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_9
# 20 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_10
# 21 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_11
# 22 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_12
# 23 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_13
# 24 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_14
# 26 "data/maps/HUB/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_VENOM
# 27 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_15
# 28 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_16
# 29 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_17
# 30 "data/maps/HUB/scripts.pory"
	compare VAR_VENOM, 10
	goto_if_lt HUB_EventScript_MothmanTalk_4
	goto HUB_EventScript_MothmanTalk_1

HUB_EventScript_MothmanTalk_4:
# 31 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_18
# 32 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_19
# 33 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_20
# 34 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_21
# 35 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_22
	goto HUB_EventScript_MothmanTalk_1


HUB_EventScript_Gatekeeper::
# 53 "data/maps/HUB/scripts.pory"
	lockall
# 54 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_Gatekeeper_Text_0
# 55 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_Gatekeeper_Text_1
# 56 "data/maps/HUB/scripts.pory"
	releaseall
	return


HUB_EventScript_LRShortcut::
# 60 "data/maps/HUB/scripts.pory"
	lockall
# 61 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_LRShortcut_Text_0, MSGBOX_YESNO
# 62 "data/maps/HUB/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HUB_EventScript_LRShortcut_2
HUB_EventScript_LRShortcut_1:
# 74 "data/maps/HUB/scripts.pory"
	releaseall
	return

HUB_EventScript_LRShortcut_2:
# 63 "data/maps/HUB/scripts.pory"
	clearflag FLAG_DREAMING
# 65 "data/maps/HUB/scripts.pory"
	goto_if_set FLAG_ROCK_PUZZLE, HUB_EventScript_LRShortcut_5
HUB_EventScript_LRShortcut_4:
# 70 "data/maps/HUB/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 42, 15
# 71 "data/maps/HUB/scripts.pory"
	waitstate
	goto HUB_EventScript_LRShortcut_1

HUB_EventScript_LRShortcut_5:
# 66 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_LRShortcut_Text_1
# 67 "data/maps/HUB/scripts.pory"
	clearflag FLAG_ROCK_PUZZLE
# 68 "data/maps/HUB/scripts.pory"
	setvar VAR_HOTNESS, 0
	goto HUB_EventScript_LRShortcut_4


HUB_EventScript_MothmanTalk_Text_0:
# 8 "data/maps/HUB/scripts.pory"
	.string "I'm looking for Bug-Type Pokémon!$"

HUB_EventScript_MothmanTalk_Text_1:
# 9 "data/maps/HUB/scripts.pory"
	.string "Let's see here...$"

HUB_EventScript_MothmanTalk_Text_2:
# 10 "data/maps/HUB/scripts.pory"
	.string "You've encountered {STR_VAR_1} Bug-Type Pokémon!$"

HUB_EventScript_MothmanTalk_Text_3:
# 11 "data/maps/HUB/scripts.pory"
	.string "Whoa! Incredible!$"

HUB_EventScript_MothmanTalk_Text_4:
# 14 "data/maps/HUB/scripts.pory"
	.string "....$"

HUB_EventScript_MothmanTalk_Text_5:
# 15 "data/maps/HUB/scripts.pory"
	.string "Oh?$"

HUB_EventScript_MothmanTalk_Text_6:
# 16 "data/maps/HUB/scripts.pory"
	.string "Well...what a delicious surprise.$"

HUB_EventScript_MothmanTalk_Text_7:
# 17 "data/maps/HUB/scripts.pory"
	.string "You're quite the interesting\nfellow.$"

HUB_EventScript_MothmanTalk_Text_8:
# 18 "data/maps/HUB/scripts.pory"
	.string "Yes, yes.$"

HUB_EventScript_MothmanTalk_Text_9:
# 19 "data/maps/HUB/scripts.pory"
	.string "Finally, I can stop with that\nridiculous voice...$"

HUB_EventScript_MothmanTalk_Text_10:
# 20 "data/maps/HUB/scripts.pory"
	.string "Ah, where are my manners. You may call me\nMOTHMAN.$"

HUB_EventScript_MothmanTalk_Text_11:
# 21 "data/maps/HUB/scripts.pory"
	.string "Please, do not be alarmed. I merely\nwish to sell my services to heroes like you.$"

HUB_EventScript_MothmanTalk_Text_12:
# 22 "data/maps/HUB/scripts.pory"
	.string "I've got things you may find very\nuseful indeed.$"

HUB_EventScript_MothmanTalk_Text_13:
# 23 "data/maps/HUB/scripts.pory"
	.string "Money? No no no, no, that won't\n do at all.$"

HUB_EventScript_MothmanTalk_Text_14:
# 24 "data/maps/HUB/scripts.pory"
	.string "I have no need for material garbage\nsuch as that.$"

HUB_EventScript_MothmanTalk_Text_15:
# 27 "data/maps/HUB/scripts.pory"
	.string "You have something else I seek...$"

HUB_EventScript_MothmanTalk_Text_16:
# 28 "data/maps/HUB/scripts.pory"
	.string "Let's see...$"

HUB_EventScript_MothmanTalk_Text_17:
# 29 "data/maps/HUB/scripts.pory"
	.string "{STR_VAR_1} droplets.$"

HUB_EventScript_MothmanTalk_Text_18:
# 31 "data/maps/HUB/scripts.pory"
	.string "That's all?$"

HUB_EventScript_MothmanTalk_Text_19:
# 32 "data/maps/HUB/scripts.pory"
	.string "Bah, that's no goddamn good at all.$"

HUB_EventScript_MothmanTalk_Text_20:
# 33 "data/maps/HUB/scripts.pory"
	.string "This is hardly even an appetizer!$"

HUB_EventScript_MothmanTalk_Text_21:
# 34 "data/maps/HUB/scripts.pory"
	.string "Just forget I said anything.$"

HUB_EventScript_MothmanTalk_Text_22:
# 35 "data/maps/HUB/scripts.pory"
	.string "You don't have what I seek.$"

HUB_EventScript_MothmanTalk_Text_23:
# 39 "data/maps/HUB/scripts.pory"
	.string "Eheheh...$"

HUB_EventScript_Gatekeeper_Text_0:
# 54 "data/maps/HUB/scripts.pory"
	.string "5 remain.$"

HUB_EventScript_Gatekeeper_Text_1:
# 55 "data/maps/HUB/scripts.pory"
	.string "Aren't you forgetting something?$"

HUB_EventScript_LRShortcut_Text_0:
# 61 "data/maps/HUB/scripts.pory"
	.string "$"

HUB_EventScript_LRShortcut_Text_1:
# 66 "data/maps/HUB/scripts.pory"
	.string "The power of teleportation has\nextinguished your hand fire.$"

MothmanIntro::
# 44 "data/maps/HUB/scripts.pory"
	.string "You...really got me going, kid!!$"

MothmanOutro::
# 48 "data/maps/HUB/scripts.pory"
	.string "...I....Impossible.$"
