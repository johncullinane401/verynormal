# 1 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 3 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 4 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity/scripts.pory"

# 6 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 7 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 8 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 9 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 10 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 11 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 12 "data/maps/RustboroCity/scripts.pory"
	end
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 15 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 16 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 17 "data/maps/RustboroCity/scripts.pory"
	end
# 18 "data/maps/RustboroCity/scripts.pory"

# 19 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 20 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 21 "data/maps/RustboroCity/scripts.pory"
	end
# 22 "data/maps/RustboroCity/scripts.pory"

# 23 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 24 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 25 "data/maps/RustboroCity/scripts.pory"
	return
# 26 "data/maps/RustboroCity/scripts.pory"

# 27 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 28 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 29 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity/scripts.pory"

# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 32 "data/maps/RustboroCity/scripts.pory"
	lockall
# 33 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 34 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 35 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 38 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 39 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 40 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 42 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 43 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 45 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 49 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 52 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 53 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 55 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 56 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 57 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 58 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 59 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 60 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 61 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 62 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 68 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 69 "data/maps/RustboroCity/scripts.pory"

# 70 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 71 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 72 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 73 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 74 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 75 "data/maps/RustboroCity/scripts.pory"

# 76 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 77 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 78 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 79 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 81 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 82 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 83 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 84 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 85 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 86 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 87 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 88 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 89 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 90 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 91 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 92 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 93 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 95 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 96 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 97 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 98 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 99 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 100 "data/maps/RustboroCity/scripts.pory"
	end
# 101 "data/maps/RustboroCity/scripts.pory"

# 102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 103 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 104 "data/maps/RustboroCity/scripts.pory"
	step_end
# 105 "data/maps/RustboroCity/scripts.pory"

# 106 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 107 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 108 "data/maps/RustboroCity/scripts.pory"
	step_end
# 109 "data/maps/RustboroCity/scripts.pory"

# 110 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 111 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 112 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 113 "data/maps/RustboroCity/scripts.pory"
	step_end
# 114 "data/maps/RustboroCity/scripts.pory"

# 115 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 117 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 118 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 120 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 123 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity/scripts.pory"
	step_end
# 125 "data/maps/RustboroCity/scripts.pory"

# 126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 127 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 128 "data/maps/RustboroCity/scripts.pory"
	step_end
# 129 "data/maps/RustboroCity/scripts.pory"

# 130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 131 "data/maps/RustboroCity/scripts.pory"
	lock
# 132 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 133 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 134 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 135 "data/maps/RustboroCity/scripts.pory"
	release
# 136 "data/maps/RustboroCity/scripts.pory"
	end
# 137 "data/maps/RustboroCity/scripts.pory"

# 138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 139 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity/scripts.pory"
	release
# 141 "data/maps/RustboroCity/scripts.pory"
	end
# 142 "data/maps/RustboroCity/scripts.pory"

# 143 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 144 "data/maps/RustboroCity/scripts.pory"
	lock
# 145 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 146 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 147 "data/maps/RustboroCity/scripts.pory"
	release
# 148 "data/maps/RustboroCity/scripts.pory"
	end
# 149 "data/maps/RustboroCity/scripts.pory"

# 150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 151 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 152 "data/maps/RustboroCity/scripts.pory"
	end
# 153 "data/maps/RustboroCity/scripts.pory"

# 154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 155 "data/maps/RustboroCity/scripts.pory"
	lock
# 156 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 157 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 158 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 159 "data/maps/RustboroCity/scripts.pory"
	release
# 160 "data/maps/RustboroCity/scripts.pory"
	end
# 161 "data/maps/RustboroCity/scripts.pory"

# 162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 163 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 164 "data/maps/RustboroCity/scripts.pory"
	release
# 165 "data/maps/RustboroCity/scripts.pory"
	end
# 166 "data/maps/RustboroCity/scripts.pory"

# 167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 168 "data/maps/RustboroCity/scripts.pory"
	lock
# 169 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 170 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 171 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 172 "data/maps/RustboroCity/scripts.pory"
	release
# 173 "data/maps/RustboroCity/scripts.pory"
	end
# 174 "data/maps/RustboroCity/scripts.pory"

# 175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity/scripts.pory"
	release
# 178 "data/maps/RustboroCity/scripts.pory"
	end
# 179 "data/maps/RustboroCity/scripts.pory"

# 180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 181 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 182 "data/maps/RustboroCity/scripts.pory"
	end
# 183 "data/maps/RustboroCity/scripts.pory"

# 184 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 185 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 186 "data/maps/RustboroCity/scripts.pory"
	end
# 187 "data/maps/RustboroCity/scripts.pory"

# 188 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 189 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 190 "data/maps/RustboroCity/scripts.pory"
	end
# 191 "data/maps/RustboroCity/scripts.pory"

# 192 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 193 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 194 "data/maps/RustboroCity/scripts.pory"
	end
# 195 "data/maps/RustboroCity/scripts.pory"

# 196 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 198 "data/maps/RustboroCity/scripts.pory"
	end
# 199 "data/maps/RustboroCity/scripts.pory"

# 200 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 201 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 202 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 203 "data/maps/RustboroCity/scripts.pory"
	end
# 204 "data/maps/RustboroCity/scripts.pory"

# 205 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 207 "data/maps/RustboroCity/scripts.pory"
	end
# 208 "data/maps/RustboroCity/scripts.pory"

# 209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 210 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 211 "data/maps/RustboroCity/scripts.pory"
	end
# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 215 "data/maps/RustboroCity/scripts.pory"
	end
# 216 "data/maps/RustboroCity/scripts.pory"

# 217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 218 "data/maps/RustboroCity/scripts.pory"
	lock
# 219 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 221 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 222 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/RustboroCity/scripts.pory"
	release
# 224 "data/maps/RustboroCity/scripts.pory"
	end
# 225 "data/maps/RustboroCity/scripts.pory"

# 226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 227 "data/maps/RustboroCity/scripts.pory"
	lock
# 228 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 229 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 230 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 231 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/RustboroCity/scripts.pory"
	release
# 233 "data/maps/RustboroCity/scripts.pory"
	end
# 234 "data/maps/RustboroCity/scripts.pory"

# 235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 236 "data/maps/RustboroCity/scripts.pory"
	lock
# 237 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 238 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 239 "data/maps/RustboroCity/scripts.pory"
	release
# 240 "data/maps/RustboroCity/scripts.pory"
	end
# 241 "data/maps/RustboroCity/scripts.pory"

# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 243 "data/maps/RustboroCity/scripts.pory"
	lockall
# 244 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 245 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 246 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 247 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 248 "data/maps/RustboroCity/scripts.pory"
	end
# 249 "data/maps/RustboroCity/scripts.pory"

# 250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 251 "data/maps/RustboroCity/scripts.pory"
	lockall
# 252 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 253 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 254 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 255 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 256 "data/maps/RustboroCity/scripts.pory"
	end
# 257 "data/maps/RustboroCity/scripts.pory"

# 258 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 259 "data/maps/RustboroCity/scripts.pory"
	lockall
# 260 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 261 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 262 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 263 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 264 "data/maps/RustboroCity/scripts.pory"
	end
# 265 "data/maps/RustboroCity/scripts.pory"

# 266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 267 "data/maps/RustboroCity/scripts.pory"
	lockall
# 268 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 269 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 270 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 271 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 272 "data/maps/RustboroCity/scripts.pory"
	end
# 273 "data/maps/RustboroCity/scripts.pory"

# 274 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 275 "data/maps/RustboroCity/scripts.pory"
	lockall
# 276 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 277 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 278 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 279 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 280 "data/maps/RustboroCity/scripts.pory"
	end
# 281 "data/maps/RustboroCity/scripts.pory"

# 282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 283 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 284 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 285 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 286 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 287 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 288 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 289 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 291 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 292 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 293 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 294 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 295 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 296 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 298 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 299 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 300 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 301 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 302 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 303 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 304 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 305 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 306 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 307 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 308 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 309 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 310 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 311 "data/maps/RustboroCity/scripts.pory"
	end
# 312 "data/maps/RustboroCity/scripts.pory"

# 313 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 315 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 316 "data/maps/RustboroCity/scripts.pory"
	return
# 317 "data/maps/RustboroCity/scripts.pory"

# 318 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 319 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 320 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 321 "data/maps/RustboroCity/scripts.pory"
	return
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 325 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 326 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/RustboroCity/scripts.pory"
	return
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 331 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 332 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/RustboroCity/scripts.pory"
	return
# 334 "data/maps/RustboroCity/scripts.pory"

# 335 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 337 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 338 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/RustboroCity/scripts.pory"
	return
# 340 "data/maps/RustboroCity/scripts.pory"

# 341 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 342 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 343 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 344 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/RustboroCity/scripts.pory"
	return
# 346 "data/maps/RustboroCity/scripts.pory"

# 347 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 348 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 349 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 350 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 352 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/RustboroCity/scripts.pory"
	return
# 354 "data/maps/RustboroCity/scripts.pory"

# 355 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 356 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 357 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/RustboroCity/scripts.pory"
	step_end
# 375 "data/maps/RustboroCity/scripts.pory"

# 376 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 393 "data/maps/RustboroCity/scripts.pory"
	step_end
# 394 "data/maps/RustboroCity/scripts.pory"

# 395 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 403 "data/maps/RustboroCity/scripts.pory"
	step_end
# 404 "data/maps/RustboroCity/scripts.pory"

# 405 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 413 "data/maps/RustboroCity/scripts.pory"
	step_end
# 414 "data/maps/RustboroCity/scripts.pory"

# 415 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 416 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 420 "data/maps/RustboroCity/scripts.pory"
	step_end
# 421 "data/maps/RustboroCity/scripts.pory"

# 422 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 423 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 431 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	step_end
# 437 "data/maps/RustboroCity/scripts.pory"

# 438 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 439 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 445 "data/maps/RustboroCity/scripts.pory"
	step_end
# 446 "data/maps/RustboroCity/scripts.pory"

# 447 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 448 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 456 "data/maps/RustboroCity/scripts.pory"
	step_end
# 457 "data/maps/RustboroCity/scripts.pory"

# 458 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 459 "data/maps/RustboroCity/scripts.pory"
	lock
# 460 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 461 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 462 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 463 "data/maps/RustboroCity/scripts.pory"
	release
# 464 "data/maps/RustboroCity/scripts.pory"
	end
# 465 "data/maps/RustboroCity/scripts.pory"

# 466 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 467 "data/maps/RustboroCity/scripts.pory"
	waitse
# 468 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 469 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 470 "data/maps/RustboroCity/scripts.pory"
	end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 473 "data/maps/RustboroCity/scripts.pory"
	lockall
# 474 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 475 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 476 "data/maps/RustboroCity/scripts.pory"
	end
# 477 "data/maps/RustboroCity/scripts.pory"

# 478 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 479 "data/maps/RustboroCity/scripts.pory"
	lockall
# 480 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 481 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 482 "data/maps/RustboroCity/scripts.pory"
	end
# 483 "data/maps/RustboroCity/scripts.pory"

# 484 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 485 "data/maps/RustboroCity/scripts.pory"
	lockall
# 486 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 487 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 488 "data/maps/RustboroCity/scripts.pory"
	end
# 489 "data/maps/RustboroCity/scripts.pory"

# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 491 "data/maps/RustboroCity/scripts.pory"
	lockall
# 492 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 493 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 494 "data/maps/RustboroCity/scripts.pory"
	end
# 495 "data/maps/RustboroCity/scripts.pory"

# 496 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 497 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 498 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 499 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 500 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 501 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 502 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 503 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 504 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 505 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 506 "data/maps/RustboroCity/scripts.pory"
	end
# 507 "data/maps/RustboroCity/scripts.pory"

# 508 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 511 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 513 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 514 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 516 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	return
# 520 "data/maps/RustboroCity/scripts.pory"

# 521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 528 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	return
# 532 "data/maps/RustboroCity/scripts.pory"

# 533 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 540 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	return
# 544 "data/maps/RustboroCity/scripts.pory"

# 545 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 546 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 547 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 554 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 556 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/RustboroCity/scripts.pory"
	return
# 558 "data/maps/RustboroCity/scripts.pory"

# 559 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 560 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 561 "data/maps/RustboroCity/scripts.pory"
	step_end
# 562 "data/maps/RustboroCity/scripts.pory"

# 563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 564 "data/maps/RustboroCity/scripts.pory"
	lockall
# 565 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 566 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 567 "data/maps/RustboroCity/scripts.pory"
	end
# 568 "data/maps/RustboroCity/scripts.pory"

# 569 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 570 "data/maps/RustboroCity/scripts.pory"
	lockall
# 571 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 572 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 573 "data/maps/RustboroCity/scripts.pory"
	end
# 574 "data/maps/RustboroCity/scripts.pory"

# 575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 576 "data/maps/RustboroCity/scripts.pory"
	lockall
# 577 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 578 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 579 "data/maps/RustboroCity/scripts.pory"
	end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 582 "data/maps/RustboroCity/scripts.pory"
	lockall
# 583 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 584 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 585 "data/maps/RustboroCity/scripts.pory"
	end
# 586 "data/maps/RustboroCity/scripts.pory"

# 587 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 588 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 589 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 590 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 591 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 592 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 593 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 594 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 595 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 596 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 597 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 598 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 599 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 600 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 601 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 602 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 603 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 604 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 605 "data/maps/RustboroCity/scripts.pory"
	end
# 606 "data/maps/RustboroCity/scripts.pory"

# 607 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity/scripts.pory"
	return
# 610 "data/maps/RustboroCity/scripts.pory"

# 611 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 612 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 613 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 620 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/RustboroCity/scripts.pory"
	return
# 622 "data/maps/RustboroCity/scripts.pory"

# 623 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	return
# 646 "data/maps/RustboroCity/scripts.pory"

# 647 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	return
# 660 "data/maps/RustboroCity/scripts.pory"

# 661 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	return
# 670 "data/maps/RustboroCity/scripts.pory"

# 671 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 672 "data/maps/RustboroCity/scripts.pory"
	lockall
# 673 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 677 "data/maps/RustboroCity/scripts.pory"

# 678 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 679 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 680 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 681 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 682 "data/maps/RustboroCity/scripts.pory"
	return
# 683 "data/maps/RustboroCity/scripts.pory"

# 684 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 685 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 686 "data/maps/RustboroCity/scripts.pory"
	return
# 687 "data/maps/RustboroCity/scripts.pory"

# 688 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 689 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 690 "data/maps/RustboroCity/scripts.pory"
	return
# 691 "data/maps/RustboroCity/scripts.pory"

# 692 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 693 "data/maps/RustboroCity/scripts.pory"
	lockall
# 694 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 695 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 696 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 697 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 701 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 703 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 705 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 707 "data/maps/RustboroCity/scripts.pory"

# 708 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 709 "data/maps/RustboroCity/scripts.pory"
	lockall
# 710 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 721 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 723 "data/maps/RustboroCity/scripts.pory"

# 724 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 725 "data/maps/RustboroCity/scripts.pory"
	lockall
# 726 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 735 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 739 "data/maps/RustboroCity/scripts.pory"

# 740 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 741 "data/maps/RustboroCity/scripts.pory"
	lockall
# 742 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 743 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 744 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 753 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 755 "data/maps/RustboroCity/scripts.pory"

# 756 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 757 "data/maps/RustboroCity/scripts.pory"
	lockall
# 758 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 765 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 767 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 771 "data/maps/RustboroCity/scripts.pory"

# 772 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 773 "data/maps/RustboroCity/scripts.pory"
	lockall
# 774 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 775 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 776 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 787 "data/maps/RustboroCity/scripts.pory"

# 788 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 789 "data/maps/RustboroCity/scripts.pory"
	lockall
# 790 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 803 "data/maps/RustboroCity/scripts.pory"

# 804 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 805 "data/maps/RustboroCity/scripts.pory"
	lockall
# 806 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 819 "data/maps/RustboroCity/scripts.pory"

# 820 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 821 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 822 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 823 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 824 "data/maps/RustboroCity/scripts.pory"
	end
# 825 "data/maps/RustboroCity/scripts.pory"

# 826 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 827 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 828 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 829 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 830 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 831 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 832 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 833 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 834 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 835 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 836 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 837 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 838 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 839 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 840 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 841 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 842 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 843 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 844 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 845 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 846 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 847 "data/maps/RustboroCity/scripts.pory"
	end
# 848 "data/maps/RustboroCity/scripts.pory"

# 849 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 850 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 851 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 852 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 853 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 854 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 855 "data/maps/RustboroCity/scripts.pory"
	end
# 856 "data/maps/RustboroCity/scripts.pory"

# 857 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 858 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 859 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 860 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 861 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 862 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 863 "data/maps/RustboroCity/scripts.pory"
	end
# 864 "data/maps/RustboroCity/scripts.pory"

# 865 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 866 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 867 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 868 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 869 "data/maps/RustboroCity/scripts.pory"
	end
# 870 "data/maps/RustboroCity/scripts.pory"

# 871 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 872 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 873 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 874 "data/maps/RustboroCity/scripts.pory"
	return
# 875 "data/maps/RustboroCity/scripts.pory"

# 876 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 877 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 878 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 879 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 880 "data/maps/RustboroCity/scripts.pory"
	end
# 881 "data/maps/RustboroCity/scripts.pory"

# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 883 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 884 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 885 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 886 "data/maps/RustboroCity/scripts.pory"
	end
# 887 "data/maps/RustboroCity/scripts.pory"

# 888 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 889 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 890 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 891 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 892 "data/maps/RustboroCity/scripts.pory"
	end
# 893 "data/maps/RustboroCity/scripts.pory"

# 894 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 895 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 896 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 897 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 898 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 899 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 900 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 901 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 902 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 903 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 904 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 905 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 906 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 907 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 908 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 909 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 910 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 911 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 912 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 913 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 914 "data/maps/RustboroCity/scripts.pory"
	end
# 915 "data/maps/RustboroCity/scripts.pory"

# 916 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 917 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 918 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 919 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 920 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 921 "data/maps/RustboroCity/scripts.pory"
	end
# 922 "data/maps/RustboroCity/scripts.pory"

# 923 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 924 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 925 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 926 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 927 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 928 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 929 "data/maps/RustboroCity/scripts.pory"
	end
# 930 "data/maps/RustboroCity/scripts.pory"

# 931 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 932 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 933 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 934 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 935 "data/maps/RustboroCity/scripts.pory"
	end
# 936 "data/maps/RustboroCity/scripts.pory"

# 937 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 938 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 939 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 940 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 941 "data/maps/RustboroCity/scripts.pory"
	end
# 942 "data/maps/RustboroCity/scripts.pory"

# 943 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 944 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 945 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 946 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 947 "data/maps/RustboroCity/scripts.pory"
	end
# 948 "data/maps/RustboroCity/scripts.pory"

# 949 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 950 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 951 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 952 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 953 "data/maps/RustboroCity/scripts.pory"
	end
# 954 "data/maps/RustboroCity/scripts.pory"

# 955 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 956 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 957 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 958 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 959 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 960 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 961 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 962 "data/maps/RustboroCity/scripts.pory"
	step_end
# 963 "data/maps/RustboroCity/scripts.pory"

# 964 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 965 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 966 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 967 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 968 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 970 "data/maps/RustboroCity/scripts.pory"
	step_end
# 971 "data/maps/RustboroCity/scripts.pory"

# 972 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 973 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 974 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 976 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 977 "data/maps/RustboroCity/scripts.pory"
	step_end
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 983 "data/maps/RustboroCity/scripts.pory"
	step_end
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 986 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 988 "data/maps/RustboroCity/scripts.pory"
	step_end
# 989 "data/maps/RustboroCity/scripts.pory"

# 990 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 994 "data/maps/RustboroCity/scripts.pory"
	step_end
# 995 "data/maps/RustboroCity/scripts.pory"

# 996 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 997 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1001 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1002 "data/maps/RustboroCity/scripts.pory"

# 1003 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1006 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1007 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1008 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1009 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1010 "data/maps/RustboroCity/scripts.pory"

# 1011 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1012 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1013 "data/maps/RustboroCity/scripts.pory"
	end
# 1014 "data/maps/RustboroCity/scripts.pory"

# 1015 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1016 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1020 "data/maps/RustboroCity/scripts.pory"

# 1021 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1022 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1025 "data/maps/RustboroCity/scripts.pory"

# 1026 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1027 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1028 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1032 "data/maps/RustboroCity/scripts.pory"

# 1033 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1036 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1037 "data/maps/RustboroCity/scripts.pory"

# 1038 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1043 "data/maps/RustboroCity/scripts.pory"

# 1044 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1050 "data/maps/RustboroCity/scripts.pory"

# 1051 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1055 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1056 "data/maps/RustboroCity/scripts.pory"

# 1057 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1064 "data/maps/RustboroCity/scripts.pory"

# 1065 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1069 "data/maps/RustboroCity/scripts.pory"

# 1070 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1074 "data/maps/RustboroCity/scripts.pory"

# 1075 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1079 "data/maps/RustboroCity/scripts.pory"

# 1080 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1083 "data/maps/RustboroCity/scripts.pory"

# 1084 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1093 "data/maps/RustboroCity/scripts.pory"

# 1094 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1097 "data/maps/RustboroCity/scripts.pory"

# 1098 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1106 "data/maps/RustboroCity/scripts.pory"

# 1107 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1110 "data/maps/RustboroCity/scripts.pory"

# 1111 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1127 "data/maps/RustboroCity/scripts.pory"

# 1128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1135 "data/maps/RustboroCity/scripts.pory"

# 1136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1139 "data/maps/RustboroCity/scripts.pory"

# 1140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1149 "data/maps/RustboroCity/scripts.pory"

# 1150 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1155 "data/maps/RustboroCity/scripts.pory"

# 1156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1159 "data/maps/RustboroCity/scripts.pory"

# 1160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1163 "data/maps/RustboroCity/scripts.pory"

# 1164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1167 "data/maps/RustboroCity/scripts.pory"

# 1168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1174 "data/maps/RustboroCity/scripts.pory"

# 1175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1182 "data/maps/RustboroCity/scripts.pory"

# 1183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1186 "data/maps/RustboroCity/scripts.pory"

# 1187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1201 "data/maps/RustboroCity/scripts.pory"

# 1202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1205 "data/maps/RustboroCity/scripts.pory"

# 1206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1209 "data/maps/RustboroCity/scripts.pory"

# 1210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1213 "data/maps/RustboroCity/scripts.pory"

# 1214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1220 "data/maps/RustboroCity/scripts.pory"

# 1221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1227 "data/maps/RustboroCity/scripts.pory"

# 1228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1232 "data/maps/RustboroCity/scripts.pory"

# 1233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1237 "data/maps/RustboroCity/scripts.pory"

# 1238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1242 "data/maps/RustboroCity/scripts.pory"

# 1243 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1247 "data/maps/RustboroCity/scripts.pory"

# 1248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1252 "data/maps/RustboroCity/scripts.pory"

# 1253 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1255 "data/maps/RustboroCity/scripts.pory"

# 1256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1274 "data/maps/RustboroCity/scripts.pory"

# 1275 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1277 "data/maps/RustboroCity/scripts.pory"

# 1278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1281 "data/maps/RustboroCity/scripts.pory"

# 1282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

RustboroCity_CheckForNormalType::
# 1294 "data/maps/RustboroCity/scripts.pory"
	checkspecies SPECIES_ZIGZAGOON, NO_PARTY_SCREEN
# 1295 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_CheckForNormalType_1
	return

RustboroCity_CheckForNormalType_1:
# 1296 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_CAUGHTNORMAL
	return


RustboroCity_EventScript_YinTalk::
# 1301 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1302 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_CheckForNormalType
# 1303 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 1304 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_0
# 1305 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_YIN_SPIEL, RustboroCity_EventScript_YinTalk_2
# 1321 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_CAUGHTNORMAL, RustboroCity_EventScript_YinTalk_3
# 1370 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_27
# 1371 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_28
# 1372 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_29
RustboroCity_EventScript_YinTalk_1:
# 1374 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return

RustboroCity_EventScript_YinTalk_2:
# 1306 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_1
# 1307 "data/maps/RustboroCity/scripts.pory"
	call PetalburgCity_PokemonFanClub_EventScript_DDTutor
# 1308 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_LEARNED_DD, RustboroCity_EventScript_YinTalk_7
# 1319 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_8
	goto RustboroCity_EventScript_YinTalk_1

RustboroCity_EventScript_YinTalk_3:
# 1322 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_9
# 1323 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DISABLE_CATCHING
# 1324 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_10
# 1325 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_11
# 1326 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_12
# 1327 "data/maps/RustboroCity/scripts.pory"
	fadeoutbgm 2
# 1328 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_13
# 1329 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_14
# 1330 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_15
# 1331 "data/maps/RustboroCity/scripts.pory"
	delay 300
# 1332 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_16
# 1333 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_17, MSGBOX_YESNO
# 1334 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_YinTalk_10
# 1367 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_26
	goto RustboroCity_EventScript_YinTalk_1

RustboroCity_EventScript_YinTalk_7:
# 1309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_2
# 1310 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_3
# 1311 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_4
# 1312 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_5
# 1313 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_6
# 1314 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_7
# 1315 "data/maps/RustboroCity/scripts.pory"
	delay 5
# 1316 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 1317 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_YIN_OLDALE
	goto RustboroCity_EventScript_YinTalk_1

RustboroCity_EventScript_YinTalk_10:
# 1335 "data/maps/RustboroCity/scripts.pory"
	delay 1000
# 1336 "data/maps/RustboroCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1337 "data/maps/RustboroCity/scripts.pory"
	delay 500
# 1339 "data/maps/RustboroCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1340 "data/maps/RustboroCity/scripts.pory"
	special DeleteAllPartyMonsExceptZigzagoon
# 1341 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_18
# 1342 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_19
# 1343 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_20
# 1344 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_21
# 1345 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_22
# 1346 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_23
# 1347 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_24
# 1348 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_YIN_SPIEL
# 1349 "data/maps/RustboroCity/scripts.pory"
	call PetalburgCity_PokemonFanClub_EventScript_DDTutor
# 1350 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_LEARNED_DD, RustboroCity_EventScript_YinTalk_13
# 1364 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_25
	goto RustboroCity_EventScript_YinTalk_1

RustboroCity_EventScript_YinTalk_13:
# 1351 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_2
# 1352 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_3
# 1353 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_4
# 1354 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_5
# 1355 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_6
# 1356 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_YinTalk_Text_7
# 1357 "data/maps/RustboroCity/scripts.pory"
	delay 5
# 1358 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 1359 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_YIN_OLDALE
# 1360 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_PORTAL_ACCESS
# 1361 "data/maps/RustboroCity/scripts.pory"
	special SetExpLevel
# 1362 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DISABLE_EXP
	goto RustboroCity_EventScript_YinTalk_1


RustboroCity_EventScript_Headache::
# 1378 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1379 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Headache_Text_0
# 1380 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Headache_Text_1
# 1381 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Headache_Text_2
# 1382 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Headache_Text_3
# 1383 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_Headache_Text_4
# 1384 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return


RustboroCity_EventScript_YinTalk_Text_0:
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "I have been waiting patiently\nfor you.$"

RustboroCity_EventScript_YinTalk_Text_1:
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "It is time for me to join you.$"

RustboroCity_EventScript_YinTalk_Text_2:
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "I do not have much time left to\nspeak with you.$"

RustboroCity_EventScript_YinTalk_Text_3:
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "With your help, we can save this\nworld.$"

RustboroCity_EventScript_YinTalk_Text_4:
# 1311 "data/maps/RustboroCity/scripts.pory"
	.string "Now...go....'Petalburg Woods'...$"

RustboroCity_EventScript_YinTalk_Text_5:
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "....distortion...you...$"

RustboroCity_EventScript_YinTalk_Text_6:
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "....must.....$"

RustboroCity_EventScript_YinTalk_Text_7:
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "take it all.$"

RustboroCity_EventScript_YinTalk_Text_8:
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "Very well. Return when you are\nready to accept my power.$"

RustboroCity_EventScript_YinTalk_Text_9:
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "I see you have obtain your CATALYST.$"

RustboroCity_EventScript_YinTalk_Text_10:
# 1324 "data/maps/RustboroCity/scripts.pory"
	.string "This is most excellent.$"

RustboroCity_EventScript_YinTalk_Text_11:
# 1325 "data/maps/RustboroCity/scripts.pory"
	.string "But, to continue your path, difficult\nchoices must be made.$"

RustboroCity_EventScript_YinTalk_Text_12:
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "And now, you are met with one of those\nchoices.$"

RustboroCity_EventScript_YinTalk_Text_13:
# 1328 "data/maps/RustboroCity/scripts.pory"
	.string "Your CATALSYT will prove to be very\nuseful to you.$"

RustboroCity_EventScript_YinTalk_Text_14:
# 1329 "data/maps/RustboroCity/scripts.pory"
	.string "The rest of your companions...$"

RustboroCity_EventScript_YinTalk_Text_15:
# 1330 "data/maps/RustboroCity/scripts.pory"
	.string "...must be discarded.$"

RustboroCity_EventScript_YinTalk_Text_16:
# 1332 "data/maps/RustboroCity/scripts.pory"
	.string "I know you have only known them\na short while.$"

RustboroCity_EventScript_YinTalk_Text_17:
# 1333 "data/maps/RustboroCity/scripts.pory"
	.string "Are you prepared for their sacrifice?$"

RustboroCity_EventScript_YinTalk_Text_18:
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "........................$"

RustboroCity_EventScript_YinTalk_Text_19:
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "It has been taken care of.$"

RustboroCity_EventScript_YinTalk_Text_20:
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "You are a strong-willed person.$"

RustboroCity_EventScript_YinTalk_Text_21:
# 1344 "data/maps/RustboroCity/scripts.pory"
	.string "That was not an easy choice to make.$"

RustboroCity_EventScript_YinTalk_Text_22:
# 1345 "data/maps/RustboroCity/scripts.pory"
	.string "Do not weep for your companions.$"

RustboroCity_EventScript_YinTalk_Text_23:
# 1346 "data/maps/RustboroCity/scripts.pory"
	.string "You will see them again in the\nAshen Garden.$"

RustboroCity_EventScript_YinTalk_Text_24:
# 1347 "data/maps/RustboroCity/scripts.pory"
	.string "Now...$"

RustboroCity_EventScript_YinTalk_Text_25:
# 1364 "data/maps/RustboroCity/scripts.pory"
	.string "Very well. Return when you are\nready to accept me.$"

RustboroCity_EventScript_YinTalk_Text_26:
# 1367 "data/maps/RustboroCity/scripts.pory"
	.string "Return when you are ready.$"

RustboroCity_EventScript_YinTalk_Text_27:
# 1370 "data/maps/RustboroCity/scripts.pory"
	.string "Unfortunately, you have not yet\nobtained your CATALYST.$"

RustboroCity_EventScript_YinTalk_Text_28:
# 1371 "data/maps/RustboroCity/scripts.pory"
	.string "Any NORMAL type will do.$"

RustboroCity_EventScript_YinTalk_Text_29:
# 1372 "data/maps/RustboroCity/scripts.pory"
	.string "Please return to me once you have\nobtained one.$"

RustboroCity_EventScript_Headache_Text_0:
# 1379 "data/maps/RustboroCity/scripts.pory"
	.string "(You reach for the door, but then...)$"

RustboroCity_EventScript_Headache_Text_1:
# 1380 "data/maps/RustboroCity/scripts.pory"
	.string "(You feel a sharp pain in your head.)$"

RustboroCity_EventScript_Headache_Text_2:
# 1381 "data/maps/RustboroCity/scripts.pory"
	.string "(It's a splitting headache that won't\nfade.)$"

RustboroCity_EventScript_Headache_Text_3:
# 1382 "data/maps/RustboroCity/scripts.pory"
	.string "(You pull your hand away from the door,\nand the pain in your head soothes.)$"

RustboroCity_EventScript_Headache_Text_4:
# 1383 "data/maps/RustboroCity/scripts.pory"
	.string "The door is sealed tightly shut.$"
