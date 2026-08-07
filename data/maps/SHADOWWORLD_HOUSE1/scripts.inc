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


SHADOWWORLD_HOUSE1_EventScript_Bookshelf::
# 14 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	lockall
# 15 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_0
# 16 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_1, MSGBOX_YESNO
# 17 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SHADOWWORLD_HOUSE1_EventScript_Bookshelf_2
SHADOWWORLD_HOUSE1_EventScript_Bookshelf_1:
# 21 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	releaseall
	return

SHADOWWORLD_HOUSE1_EventScript_Bookshelf_2:
# 18 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_2
# 19 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	msgbox SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_3
	goto SHADOWWORLD_HOUSE1_EventScript_Bookshelf_1


SHADOWWORLD_HOUSE1_EventScript_Guy_Text_0:
# 7 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "It's been sooo long since I left\nmy house.$"

SHADOWWORLD_HOUSE1_EventScript_Guy_Text_1:
# 8 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "I don't really want to go outside.$"

SHADOWWORLD_HOUSE1_EventScript_Guy_Text_2:
# 9 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "giggles You can stay here as\nlong as you want!$"

SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_0:
# 15 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "It's filled with all sorts of books.$"

SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_1:
# 16 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "Read one?$"

SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_2:
# 18 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "Nby nqi aclfm mjyhn ypyls xus\nniaynbyl. Nbys qiofx yun fohwb niaynbyl.\pNbys qiofx xlcpy bigy zlig\nwugjom niaynbyl. Cn myygyx um cz\phinbcha wiofx myjyluny nbyg.$"

SHADOWWORLD_HOUSE1_EventScript_Bookshelf_Text_3:
# 19 "data/maps/SHADOWWORLD_HOUSE1/scripts.pory"
	.string "...what nonsense.$"
