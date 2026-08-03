# 1 "data/maps/CURSEZONE/scripts.pory"
CURSEZONE_MapScripts::
# 2 "data/maps/CURSEZONE/scripts.pory"
	.byte 0

CURSEZONE_EventScript_YanFight::
# 6 "data/maps/CURSEZONE/scripts.pory"
	lockall
# 7 "data/maps/CURSEZONE/scripts.pory"
	msgbox CURSEZONE_EventScript_YanFight_Text_0
# 8 "data/maps/CURSEZONE/scripts.pory"
	msgbox CURSEZONE_EventScript_YanFight_Text_1
# 9 "data/maps/CURSEZONE/scripts.pory"
	msgbox CURSEZONE_EventScript_YanFight_Text_2
# 10 "data/maps/CURSEZONE/scripts.pory"
	msgbox CURSEZONE_EventScript_YanFight_Text_3
# 13 "data/maps/CURSEZONE/scripts.pory"
	releaseall
# 14 "data/maps/CURSEZONE/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, YanIntro, YanOutro
	return


CURSEZONE_EventScript_YanFight_Text_0:
# 7 "data/maps/CURSEZONE/scripts.pory"
	.string "It's you.$"

CURSEZONE_EventScript_YanFight_Text_1:
# 8 "data/maps/CURSEZONE/scripts.pory"
	.string "I knew you would come. Don't\nworry, I haven't been waiting long.$"

CURSEZONE_EventScript_YanFight_Text_2:
# 9 "data/maps/CURSEZONE/scripts.pory"
	.string "There's nothing left, except\n for me.$"

CURSEZONE_EventScript_YanFight_Text_3:
# 10 "data/maps/CURSEZONE/scripts.pory"
	.string "$"

YanIntro::
# 17 "data/maps/CURSEZONE/scripts.pory"
	.string "Well, here we go!$"

YanOutro::
# 21 "data/maps/CURSEZONE/scripts.pory"
	.string ".....$"
