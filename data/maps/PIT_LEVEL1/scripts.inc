# 1 "data/maps/PIT_LEVEL1/scripts.pory"
PIT_LEVEL1_MapScripts::
# 2 "data/maps/PIT_LEVEL1/scripts.pory"
	.byte 0

PIT_LEVEL1_EventScript_Maiden::
# 5 "data/maps/PIT_LEVEL1/scripts.pory"
	lockall
# 6 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_0
# 7 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_1
# 8 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_2
# 9 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_3
# 10 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_4
# 11 "data/maps/PIT_LEVEL1/scripts.pory"
	goto_if_unset GOT_ASMODIA, PIT_LEVEL1_EventScript_Maiden_2
# 14 "data/maps/PIT_LEVEL1/scripts.pory"
	goto_if_set GOT_BELPHALGA, PIT_LEVEL1_EventScript_Maiden_3
PIT_LEVEL1_EventScript_Maiden_1:
# 27 "data/maps/PIT_LEVEL1/scripts.pory"
	releaseall
	return

PIT_LEVEL1_EventScript_Maiden_2:
# 12 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_5
# 13 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_6
	goto PIT_LEVEL1_EventScript_Maiden_1

PIT_LEVEL1_EventScript_Maiden_3:
# 15 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_7
# 16 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_8
# 17 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_9
# 18 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_10
# 19 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_11
# 20 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_12, MSGBOX_YESNO
# 21 "data/maps/PIT_LEVEL1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PIT_LEVEL1_EventScript_Maiden_6
	goto PIT_LEVEL1_EventScript_Maiden_1

PIT_LEVEL1_EventScript_Maiden_6:
# 22 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_13
# 23 "data/maps/PIT_LEVEL1/scripts.pory"
	msgbox PIT_LEVEL1_EventScript_Maiden_Text_14
# 24 "data/maps/PIT_LEVEL1/scripts.pory"
	trainerbattle_single TRAINER_PHOEBE, Maiden_Intro, Maiden_Outro
	goto PIT_LEVEL1_EventScript_Maiden_1


PIT_LEVEL1_EventScript_Maiden_Text_0:
# 6 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Ah...hello.$"

PIT_LEVEL1_EventScript_Maiden_Text_1:
# 7 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "You seek it...the bottom of this world?$"

PIT_LEVEL1_EventScript_Maiden_Text_2:
# 8 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Perhaps you seek to understand the\ntruth.$"

PIT_LEVEL1_EventScript_Maiden_Text_3:
# 9 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Or maybe you just want this to end.$"

PIT_LEVEL1_EventScript_Maiden_Text_4:
# 10 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Regardless of your motivation, I must ask...$"

PIT_LEVEL1_EventScript_Maiden_Text_5:
# 12 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Why the rush?$"

PIT_LEVEL1_EventScript_Maiden_Text_6:
# 13 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "You've barely scratched the surface\nof this world.$"

PIT_LEVEL1_EventScript_Maiden_Text_7:
# 15 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Are you ready?$"

PIT_LEVEL1_EventScript_Maiden_Text_8:
# 16 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "From this point forwards, there's\nno turning back.$"

PIT_LEVEL1_EventScript_Maiden_Text_9:
# 17 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "You will dive deeper and deeper into\nthe abyss.$"

PIT_LEVEL1_EventScript_Maiden_Text_10:
# 18 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "If you have any lingering curiosity, or\nany attachment to this place, I suggest\pyou prepare yourself now.$"

PIT_LEVEL1_EventScript_Maiden_Text_11:
# 19 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Now, I ask again.$"

PIT_LEVEL1_EventScript_Maiden_Text_12:
# 20 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "Are you ready? {PAUSE_UNTIL_PRESS}$"

PIT_LEVEL1_EventScript_Maiden_Text_13:
# 22 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "...Ha. Alright.$"

PIT_LEVEL1_EventScript_Maiden_Text_14:
# 23 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "You do seem prepared for what comes\nnext.$"

Maiden_Intro::
# 30 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "But just to be safe...!$"

Maiden_Outro::
# 34 "data/maps/PIT_LEVEL1/scripts.pory"
	.string "...Excellent.$"
