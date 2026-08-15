# 1 "data/maps/LOSTWOODSEND/scripts.pory"
LOSTWOODSEND_MapScripts::
# 2 "data/maps/LOSTWOODSEND/scripts.pory"
	.byte 0

LOSTWOODSEND_EventScript_Ghost::
# 6 "data/maps/LOSTWOODSEND/scripts.pory"
	lockall
# 7 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox LOSTWOODSEND_EventScript_Ghost_Text_0
# 8 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox LOSTWOODSEND_EventScript_Ghost_Text_1
# 9 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox LOSTWOODSEND_EventScript_Ghost_Text_2
# 10 "data/maps/LOSTWOODSEND/scripts.pory"
	releaseall
	return


LOSTWOODSEND_EventScript_Ghost_Text_0:
# 7 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Welcome, {PLAYER}.$"

LOSTWOODSEND_EventScript_Ghost_Text_1:
# 8 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Let me join you.$"

LOSTWOODSEND_EventScript_Ghost_Text_2:
# 9 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Together, we will bleed this world dry.$"
