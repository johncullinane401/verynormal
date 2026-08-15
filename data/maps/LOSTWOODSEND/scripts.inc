# 1 "data/maps/LOSTWOODSEND/scripts.pory"
LOSTWOODSEND_MapScripts::
# 2 "data/maps/LOSTWOODSEND/scripts.pory"
	.byte 0

ObtainNewFriend_Lust::
# 6 "data/maps/LOSTWOODSEND/scripts.pory"
	lockall
# 7 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox ObtainNewFriend_Lust_Text_0
# 8 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox ObtainNewFriend_Lust_Text_1
# 9 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox ObtainNewFriend_Lust_Text_2
# 10 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox ObtainNewFriend_Lust_Text_3
# 11 "data/maps/LOSTWOODSEND/scripts.pory"
	givemon SPECIES_PYUKUMUKU, 65
# 12 "data/maps/LOSTWOODSEND/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/LOSTWOODSEND/scripts.pory"
	msgbox ObtainNewFriend_Lust_Text_4
# 14 "data/maps/LOSTWOODSEND/scripts.pory"
	removeobject 1
# 15 "data/maps/LOSTWOODSEND/scripts.pory"
	setflag GOT_ASMODIA
# 16 "data/maps/LOSTWOODSEND/scripts.pory"
	releaseall
	return


ObtainNewFriend_Lust_Text_0:
# 7 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Greetings, {PLAYER}.$"

ObtainNewFriend_Lust_Text_1:
# 8 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "You've done well to make it here.$"

ObtainNewFriend_Lust_Text_2:
# 9 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Let me join you.$"

ObtainNewFriend_Lust_Text_3:
# 10 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Together, we will absolve this world\nof its debts.$"

ObtainNewFriend_Lust_Text_4:
# 13 "data/maps/LOSTWOODSEND/scripts.pory"
	.string "Asmodia joined you.$"
