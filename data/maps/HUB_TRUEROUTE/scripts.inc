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
# 106 "data/maps/HUB_TRUEROUTE/scripts.pory"
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
# 46 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_9
# 56 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_10
# 64 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_11
# 78 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_12
# 81 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_13
# 88 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_14
# 92 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_15
# 96 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_16
# 101 "data/maps/HUB_TRUEROUTE/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_eq HUB_TRUEROUTE_EventScript_MAID_17
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_7:
# 37 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_10
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_8:
# 39 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_11
# 40 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_12
# 41 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_13
# 42 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_14
# 43 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_15
# 44 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_16
# 45 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_17
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_9:
# 47 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_18
# 48 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_19
# 49 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_20
# 50 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_21
# 51 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_22
# 52 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_23
# 53 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_24
# 54 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_25
# 55 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_26
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_10:
# 57 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_27
# 58 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_28
# 59 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_29
# 60 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_30
# 61 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_31
# 62 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_32
# 63 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_33
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_11:
# 65 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_34
# 66 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_35
# 67 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_36
# 68 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_37
# 69 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_38
# 70 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_39
# 71 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_40
# 72 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_41
# 73 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_42
# 74 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_43
# 75 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_44
# 76 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_45
# 77 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_46
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_12:
# 79 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_47
# 80 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_48
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_13:
# 82 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_49
# 83 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_50
# 84 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_51
# 85 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_52
# 86 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_53
# 87 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_54
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_14:
# 89 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_55
# 90 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_50
# 91 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_51
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_15:
# 93 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_56
# 94 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_50
# 95 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_51
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_16:
# 97 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_57
# 98 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_58
# 99 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_59
# 100 "data/maps/HUB_TRUEROUTE/scripts.pory"
	msgbox HUB_TRUEROUTE_EventScript_MAID_Text_60
	goto HUB_TRUEROUTE_EventScript_MAID_1

HUB_TRUEROUTE_EventScript_MAID_17:
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
	.string "....I'm sorry, I'm afraid I don't\nunderstand.$"

HUB_TRUEROUTE_EventScript_MAID_Text_11:
# 39 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Ah, Yan. The elusive detective of this\n"
	.string "dream. Well, what more is there to say?\l"
	.string "She seems young, maybe early 20s at\l"
	.string "most. Nice hat.$"

HUB_TRUEROUTE_EventScript_MAID_Text_12:
# 40 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "The poor girl. She's been fighting her\n"
	.string "own demons for a long time, and she\l"
	.string "doesn't even know it.$"

HUB_TRUEROUTE_EventScript_MAID_Text_13:
# 41 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Hmm...but, is it better this way?$"

HUB_TRUEROUTE_EventScript_MAID_Text_14:
# 42 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "To be buried in a meaningless dream...or\nto live in a reality that abandoned you?$"

HUB_TRUEROUTE_EventScript_MAID_Text_15:
# 43 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Maybe this time, you can set her free.$"

HUB_TRUEROUTE_EventScript_MAID_Text_16:
# 44 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "And then we can see for ourselves.$"

HUB_TRUEROUTE_EventScript_MAID_Text_17:
# 45 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Not even I know what will happen.$"

HUB_TRUEROUTE_EventScript_MAID_Text_18:
# 47 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "A rose...such a pretty flower. But when\n"
	.string "it tries to get close to you, to embrace\l"
	.string "you, it pricks you.$"

HUB_TRUEROUTE_EventScript_MAID_Text_19:
# 48 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "How poetic our mysterious friends life\n"
	.string "has been. Her and Yan are the same age,\l"
	.string "and at one point, were as close as two\l"
	.string "individuals could get.$"

HUB_TRUEROUTE_EventScript_MAID_Text_20:
# 49 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "But, life is unpredictable, and\n"
	.string "unforgiving.$"

HUB_TRUEROUTE_EventScript_MAID_Text_21:
# 50 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Fate has been cruel to our friend Rose,\n"
	.string "hasn't it?$"

HUB_TRUEROUTE_EventScript_MAID_Text_22:
# 51 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Well, who am I to say.$"

HUB_TRUEROUTE_EventScript_MAID_Text_23:
# 52 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "It's rude to talk about people behind\n"
	.string "their back.$"

HUB_TRUEROUTE_EventScript_MAID_Text_24:
# 53 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "There are clearly layers to this flower\n"
	.string "that she does not want brought to\l"
	.string "light.$"

HUB_TRUEROUTE_EventScript_MAID_Text_25:
# 54 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Why don't you face her yourself$"

HUB_TRUEROUTE_EventScript_MAID_Text_26:
# 55 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Then maybe, you'll understand.$"

HUB_TRUEROUTE_EventScript_MAID_Text_27:
# 57 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I must apologize for his behavior.$"

HUB_TRUEROUTE_EventScript_MAID_Text_28:
# 58 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "He can get a bit...obsessed.$"

HUB_TRUEROUTE_EventScript_MAID_Text_29:
# 59 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "But even so, you managed to\nimpress him.$"

HUB_TRUEROUTE_EventScript_MAID_Text_30:
# 60 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "It's not a secret he has become\n a big fan of these 'Bug-Type Pokemon'$"

HUB_TRUEROUTE_EventScript_MAID_Text_31:
# 61 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "In truth, it is kind of endearing.$"

HUB_TRUEROUTE_EventScript_MAID_Text_32:
# 62 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "He will not admit it, but\nI believe he is sad that this story\pis reaching its conclusion.$"

HUB_TRUEROUTE_EventScript_MAID_Text_33:
# 63 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "His bugs will no doubt be of\ngreat use to you.$"

HUB_TRUEROUTE_EventScript_MAID_Text_34:
# 65 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "...Ah, me?$"

HUB_TRUEROUTE_EventScript_MAID_Text_35:
# 66 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Well, I cannot fault you for being\ncurious.$"

HUB_TRUEROUTE_EventScript_MAID_Text_36:
# 67 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Like MOTHMAN, and my brothers and\n"
	.string "sisters who came before, we are drawn\l"
	.string "to human pain. More specifically, we\l"
	.string "seek unique, indescribable flavors of\l"
	.string "despair that can only be found in the\l"
	.string "depths of a human heart.$"

HUB_TRUEROUTE_EventScript_MAID_Text_37:
# 68 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "This world...you could say it is one\nof these special cases.$"

HUB_TRUEROUTE_EventScript_MAID_Text_38:
# 69 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "It nourishes us, and serves as a\nbrief respite from eternity.$"

HUB_TRUEROUTE_EventScript_MAID_Text_39:
# 70 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "However, even we can grow tired of\nthe same flavor.$"

HUB_TRUEROUTE_EventScript_MAID_Text_40:
# 71 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I can see from your expression\nthat you may be thinking less of us.$"

HUB_TRUEROUTE_EventScript_MAID_Text_41:
# 72 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "I implore you to understand, up\nuntil this moment, we were merely\pspectators.$"

HUB_TRUEROUTE_EventScript_MAID_Text_42:
# 73 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "We hold the utmost respect for our\nsubjects.$"

HUB_TRUEROUTE_EventScript_MAID_Text_43:
# 74 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "But in this case, as it seems, we are\nnot the only spectators.$"

HUB_TRUEROUTE_EventScript_MAID_Text_44:
# 75 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "This is why we will permit this game to\nend.$"

HUB_TRUEROUTE_EventScript_MAID_Text_45:
# 76 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Out of respect.$"

HUB_TRUEROUTE_EventScript_MAID_Text_46:
# 77 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "There is nothing more I will tell you on\nthis subject.$"

HUB_TRUEROUTE_EventScript_MAID_Text_47:
# 79 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "'Captain Briney...'$"

HUB_TRUEROUTE_EventScript_MAID_Text_48:
# 80 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "It is quite admirable to see something\nso powerless try to punch so far above its weight.$"

HUB_TRUEROUTE_EventScript_MAID_Text_49:
# 82 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Asmodia...$"

HUB_TRUEROUTE_EventScript_MAID_Text_50:
# 83 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "The avatar of Lust.$"

HUB_TRUEROUTE_EventScript_MAID_Text_51:
# 84 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "A serious sin.$"

HUB_TRUEROUTE_EventScript_MAID_Text_52:
# 85 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Although it is not the most dangerous\nof the sins...$"

HUB_TRUEROUTE_EventScript_MAID_Text_53:
# 86 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Lust has more control over Rose than\nany other.$"

HUB_TRUEROUTE_EventScript_MAID_Text_54:
# 87 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Will you help her understand?$"

HUB_TRUEROUTE_EventScript_MAID_Text_55:
# 89 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Lucifa...$"

HUB_TRUEROUTE_EventScript_MAID_Text_56:
# 93 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Leviatha...$"

HUB_TRUEROUTE_EventScript_MAID_Text_57:
# 97 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "Mammona...$"

HUB_TRUEROUTE_EventScript_MAID_Text_58:
# 98 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "The avatar of Pride.$"

HUB_TRUEROUTE_EventScript_MAID_Text_59:
# 99 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "It is known as the worst sin of all,\nand the root of all evil.$"

HUB_TRUEROUTE_EventScript_MAID_Text_60:
# 100 "data/maps/HUB_TRUEROUTE/scripts.pory"
	.string "But Rose's pride has not overgrown\nher heart yet.$"
