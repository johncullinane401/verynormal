# 1 "data/maps/WISTFULWILDERNESS1/scripts.pory"
WISTFULWILDERNESS1_MapScripts::
# 2 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.byte 0

WISTFULWILDERNESS1_EventScipt_Sign::
# 7 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	lockall
# 8 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	msgbox WISTFULWILDERNESS1_EventScipt_Sign_Text_0
# 9 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	releaseall
	return


WISTFULWILDERNESS1_EventScipt_Sign_Text_0:
# 8 "data/maps/WISTFULWILDERNESS1/scripts.pory"
	.string "                                          $"
