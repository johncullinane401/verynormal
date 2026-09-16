# 1 "data/maps/Snowforest/scripts.pory"
Snowforest_MapScripts::
# 2 "data/maps/Snowforest/scripts.pory"
	.byte 0

Snowforest_EventScript_Shadow::
# 6 "data/maps/Snowforest/scripts.pory"
	lockall
# 7 "data/maps/Snowforest/scripts.pory"
	msgbox Snowforest_EventScript_Shadow_Text_0, MSGBOX_YESNO
# 8 "data/maps/Snowforest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Snowforest_EventScript_Shadow_2
Snowforest_EventScript_Shadow_1:
# 11 "data/maps/Snowforest/scripts.pory"
	releaseall
	return

Snowforest_EventScript_Shadow_2:
# 9 "data/maps/Snowforest/scripts.pory"
	msgbox Snowforest_EventScript_Shadow_Text_1
	goto Snowforest_EventScript_Shadow_1


DUSKULLDOLL_TEXT::
# 15 "data/maps/Snowforest/scripts.pory"
	lockall
# 16 "data/maps/Snowforest/scripts.pory"
	msgbox DUSKULLDOLL_TEXT_Text_0
# 17 "data/maps/Snowforest/scripts.pory"
	releaseall
	return


Snowforest_EventScript_Shadow_Text_0:
# 7 "data/maps/Snowforest/scripts.pory"
	.string "Enter the hole?$"

Snowforest_EventScript_Shadow_Text_1:
# 9 "data/maps/Snowforest/scripts.pory"
	.string "You decide to enter the hole...$"

DUSKULLDOLL_TEXT_Text_0:
# 16 "data/maps/Snowforest/scripts.pory"
	.string "A plush resembling Duskull is lying\nhere.$"
