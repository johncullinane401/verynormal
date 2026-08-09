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
	compare VAR_VENOM, 10
	goto_if_lt HUB_EventScript_MothmanTalk_2
HUB_EventScript_MothmanTalk_1:
# 26 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_15
# 27 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_16
# 28 "data/maps/HUB/scripts.pory"
	trainerbattle_single TRAINER_JARED, MothmanIntro, MothmanOutro
	return

HUB_EventScript_MothmanTalk_2:
# 19 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_10
# 20 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_11
# 21 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_12
# 22 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_13
# 23 "data/maps/HUB/scripts.pory"
	msgbox HUB_EventScript_MothmanTalk_Text_14
	goto HUB_EventScript_MothmanTalk_1


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
	.string "Mmmmm...what is this?$"

HUB_EventScript_MothmanTalk_Text_6:
# 12 "data/maps/HUB/scripts.pory"
	.string "Money? No no no, this won't do at all.$"

HUB_EventScript_MothmanTalk_Text_7:
# 13 "data/maps/HUB/scripts.pory"
	.string "I have no need for material garbage\nsuch as that.$"

HUB_EventScript_MothmanTalk_Text_8:
# 16 "data/maps/HUB/scripts.pory"
	.string "You have something else I seek...$"

HUB_EventScript_MothmanTalk_Text_9:
# 17 "data/maps/HUB/scripts.pory"
	.string "{STR_VAR_1} droplets...$"

HUB_EventScript_MothmanTalk_Text_10:
# 19 "data/maps/HUB/scripts.pory"
	.string "That's all?$"

HUB_EventScript_MothmanTalk_Text_11:
# 20 "data/maps/HUB/scripts.pory"
	.string "Bah, it's no goddamn good at all.$"

HUB_EventScript_MothmanTalk_Text_12:
# 21 "data/maps/HUB/scripts.pory"
	.string "This is hardly even an appetizer!$"

HUB_EventScript_MothmanTalk_Text_13:
# 22 "data/maps/HUB/scripts.pory"
	.string "Just forget I said anything.$"

HUB_EventScript_MothmanTalk_Text_14:
# 23 "data/maps/HUB/scripts.pory"
	.string "You don't have what I seek.$"

HUB_EventScript_MothmanTalk_Text_15:
# 26 "data/maps/HUB/scripts.pory"
	.string "You're not an OBSERVER in this world.$"

HUB_EventScript_MothmanTalk_Text_16:
# 27 "data/maps/HUB/scripts.pory"
	.string "Eheheh...$"

MothmanIntro::
# 31 "data/maps/HUB/scripts.pory"
	.string "You...really got me going, kid!!$"

MothmanOutro::
# 35 "data/maps/HUB/scripts.pory"
	.string "...I....Impossible.$"
