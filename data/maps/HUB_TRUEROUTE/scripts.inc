# 1 "data/maps/HUB_TRUEROUTE/scripts.pory"
HUB_TRUEROUTE_MapScripts::
# 2 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.byte 0

HUB_TRUEROUTE_EventScript_MOTHMAN::
# 6 "data/maps/HUB_TRUEROUTE/scripts.pory"
	lockall
# 7 "data/maps/HUB_TRUEROUTE/scripts.pory"
	faceplayer
# 8 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MOTHMAN_Text_0
# 9 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MOTHMAN_Text_1
# 10 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MOTHMAN_Text_2
# 11 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MOTHMAN_Text_3
# 12 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MOTHMAN_Text_4
# 13 "data/maps/HUB_TRUEROUTE/scripts.pory"
	releaseall
	return


HUB_TRUEROUTE_EventScript_MAID::
# 17 "data/maps/HUB_TRUEROUTE/scripts.pory"
	lockall
# 18 "data/maps/HUB_TRUEROUTE/scripts.pory"
	faceplayer
# 19 "data/maps/HUB_TRUEROUTE/scripts.pory"
	goto_if_unset FLAG_READY_FOR_QUESTIONS, HUB_TRUEROUTE_EventScript_MAID_2
# 28 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_6
# 29 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_7, MSGBOX_YESNO
# 30 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_5
HUB_TRUEROUTE_EventScript_MAID_1:
# 45 "data/maps/HUB_TRUEROUTE/scripts.pory"
	releaseall
	return

HUB_TRUEROUTE_EventScript_MAID_2:
# 20 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_0
# 21 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_1
# 22 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_2
# 23 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_3
# 24 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_4
# 25 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_5
# 26 "data/maps/HUB_TRUEROUTE/scripts.pory"
	setflag FLAG_READY_FOR_QUESTIONS
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_5:
# 31 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_8
# 32 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_9
# 33 "data/maps/HUB_TRUEROUTE/scripts.pory"
	special EnterCode
# 34 "data/maps/HUB_TRUEROUTE/scripts.pory"
	waitstate
# 35 "data/maps/HUB_TRUEROUTE/scripts.pory"
	special GetCodeFeedback
# 36 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_7
# 38 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_8
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_7:
# 37 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_10
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_8:
# 39 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_11
	goto HUB_TRUEROUTE_EventScript_MAID_1


HUB_TRUEROUTE_EventScript_MOTHMAN_Text_0:
# 8 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I hope you've enjoyed yourself, ehehe...$"

HUB_TRUEROUTE_EventScript_MOTHMAN_Text_1:
# 9 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "But I think you'll agree...$"

HUB_TRUEROUTE_EventScript_MOTHMAN_Text_2:
# 10 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "It's time for this little show to end.$"

HUB_TRUEROUTE_EventScript_MOTHMAN_Text_3:
# 11 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "After all,\neven your favorite film becomes a drag\ponce you've seen it enough times.$"

HUB_TRUEROUTE_EventScript_MOTHMAN_Text_4:
# 12 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "$"

HUB_TRUEROUTE_EventScript_MAID_Text_0:
# 20 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "You clearly have some kind of investment\nin this world...$"

HUB_TRUEROUTE_EventScript_MAID_Text_1:
# 21 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "This, I respect.$"

HUB_TRUEROUTE_EventScript_MAID_Text_2:
# 22 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "So, as an act of goodwill, and\na reward for your dedication...$"

HUB_TRUEROUTE_EventScript_MAID_Text_3:
# 23 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I will grant you the gift of knowledge.$"

HUB_TRUEROUTE_EventScript_MAID_Text_4:
# 24 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I will answer four questions to\nthe best of my ability.$"

HUB_TRUEROUTE_EventScript_MAID_Text_5:
# 25 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Please come to me again when you are ready.$"

HUB_TRUEROUTE_EventScript_MAID_Text_6:
# 28 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Ah, welcome.$"

HUB_TRUEROUTE_EventScript_MAID_Text_7:
# 29 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Are you ready to ask your questions?$"

HUB_TRUEROUTE_EventScript_MAID_Text_8:
# 31 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I hope you have thought this through.$"

HUB_TRUEROUTE_EventScript_MAID_Text_9:
# 32 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Very well. Let me extend this\nbranch of knowledge.$"

HUB_TRUEROUTE_EventScript_MAID_Text_10:
# 37 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "....I'm sorry, I'm afraid I don't understand.$"

HUB_TRUEROUTE_EventScript_MAID_Text_11:
# 39 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "ah...Yan.$"
