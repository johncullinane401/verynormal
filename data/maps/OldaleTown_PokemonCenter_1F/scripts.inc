# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any POKéMON TRAINER to use.\p"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON CENTERS are great!\p"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON WIRELESS CLUB on\n"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded POKéMON right away.$"

OldaleTown_PokemonCenter_1F_EventScript_ObstacleGuy::
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_ObstacleGuy_Text_0
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_ObstacleGuy_Text_1
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


OldaleTown_PokemonCenter_1F_EventScript_ObstacleGuy_Text_0:
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sorry, do you mind?$"

OldaleTown_PokemonCenter_1F_EventScript_ObstacleGuy_Text_1:
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm trying to rob this place.$"
