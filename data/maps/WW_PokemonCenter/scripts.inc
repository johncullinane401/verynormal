# 1 "data/maps/WW_PokemonCenter/scripts.pory"
WW_PokemonCenter_MapScripts::
# 2 "data/maps/WW_PokemonCenter/scripts.pory"
	.byte 0

WW_PokemonCenter_EventScript_PC::
# 6 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 7 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_PC_Text_0
# 8 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_PC_Text_1
# 9 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_PC_Text_2
# 10 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return


WW_PokemonCenter_EventScript_Map::
# 14 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 15 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_Map_Text_0
# 16 "data/maps/WW_PokemonCenter/scripts.pory"
	msgbox WW_PokemonCenter_EventScript_Map_Text_1
# 17 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return


WW_PokemonCenter_EventScript_Bookshelf::
# 21 "data/maps/WW_PokemonCenter/scripts.pory"
	lockall
# 22 "data/maps/WW_PokemonCenter/scripts.pory"
	releaseall
	return


WW_PokemonCenter_EventScript_PC_Text_0:
# 7 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "The PC is turned off.$"

WW_PokemonCenter_EventScript_PC_Text_1:
# 8 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It hasn't been used in a long, long\ntime.$"

WW_PokemonCenter_EventScript_PC_Text_2:
# 9 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...and it won't be used again.$"

WW_PokemonCenter_EventScript_Map_Text_0:
# 15 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "It's a map of Earth.$"

WW_PokemonCenter_EventScript_Map_Text_1:
# 16 "data/maps/WW_PokemonCenter/scripts.pory"
	.string "...?$"
