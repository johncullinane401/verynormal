# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of POKéMON,\n"
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a GRASS type.\p"
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the WATER and\n"
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "GROUND types.\p"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a FIRE type.\p"
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "BUG types.\p"
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON.$"
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a WATER type.\p"
# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and ELECTRIC-type POKéMON.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign::
# 98 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lockall
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_0
# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_1, MSGBOX_YESNO
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_Sign_2
PetalburgCity_PokemonCenter_1F_EventScript_Sign_1:
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

PetalburgCity_PokemonCenter_1F_EventScript_Sign_2:
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_2
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_3
# 104 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_4
# 105 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_5
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_6
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_7
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_8
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_9
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_3
	goto PetalburgCity_PokemonCenter_1F_EventScript_Sign_1


PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_0:
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You can't see it, but there is\nsomething in the way.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_1:
# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Reach out to touch it?$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_2:
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You reach out your hand to touch\nthe invisible object.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_3:
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "...$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_4:
# 104 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's cold to the touch, and soft.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_5:
# 105 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You move your hand up and feel\nsomething silky.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_6:
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It feels like...hair. A girl's\nhair.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_7:
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Your hand drifts to the right\nand grazes a mouth.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_8:
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You can tell by the shape that\nthe mouth is grinning.$"

PetalburgCity_PokemonCenter_1F_EventScript_Sign_Text_9:
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "You quickly pull your hand back.$"
