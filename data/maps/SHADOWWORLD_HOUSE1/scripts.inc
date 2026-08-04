# 1 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
SHADOWWORLD_HOUSE1_MapScripts::
# 2 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.byte 0

SHADOWWORLD_HOUSE1_EventScript_Guy::
# 6 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	lockall
# 7 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Guy_Text_0
# 8 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Guy_Text_1
# 9 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Guy_Text_2
# 10 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	releaseall
	return


SHADOWWORLD_HOUSE1_EventScript_Guy_Text_0:
# 7 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "It's been sooo long since I left\nmy house.$"

SHADOWWORLD_HOUSE1_EventScript_Guy_Text_1:
# 8 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "I don't really want to go outside.$"

SHADOWWORLD_HOUSE1_EventScript_Guy_Text_2:
# 9 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "giggles You can stay here as\nlong as you want!$"
