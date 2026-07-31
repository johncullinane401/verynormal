# 1 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 2 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 3 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 4 "data/maps/Route103/scripts.pory"
	.byte 0
# 5 "data/maps/Route103/scripts.pory"

# 6 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 7 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 9 "data/maps/Route103/scripts.pory"
	end
# 10 "data/maps/Route103/scripts.pory"

# 11 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 12 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 13 "data/maps/Route103/scripts.pory"
	end
# 14 "data/maps/Route103/scripts.pory"

# 15 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 16 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 17 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 18 "data/maps/Route103/scripts.pory"
	return
# 19 "data/maps/Route103/scripts.pory"

# 20 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 21 "data/maps/Route103/scripts.pory"
	lockall
# 22 "data/maps/Route103/scripts.pory"
	checkplayergender
# 23 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 24 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 25 "data/maps/Route103/scripts.pory"
	end
# 26 "data/maps/Route103/scripts.pory"

# 27 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 28 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 29 "data/maps/Route103/scripts.pory"
	closemessage
# 30 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 31 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 32 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 34 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 36 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 38 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 39 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 40 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 41 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 42 "data/maps/Route103/scripts.pory"
	end
# 43 "data/maps/Route103/scripts.pory"

# 44 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 45 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 46 "data/maps/Route103/scripts.pory"
	closemessage
# 47 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 48 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 49 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 51 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 53 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 55 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 56 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 57 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 58 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 59 "data/maps/Route103/scripts.pory"
	end
# 60 "data/maps/Route103/scripts.pory"

# 61 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 62 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 63 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 64 "data/maps/Route103/scripts.pory"
	end
# 65 "data/maps/Route103/scripts.pory"

# 66 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 67 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 68 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 69 "data/maps/Route103/scripts.pory"
	end
# 70 "data/maps/Route103/scripts.pory"

# 71 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 72 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 73 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 74 "data/maps/Route103/scripts.pory"
	end
# 75 "data/maps/Route103/scripts.pory"

# 76 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 77 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 78 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 79 "data/maps/Route103/scripts.pory"
	end
# 80 "data/maps/Route103/scripts.pory"

# 81 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 82 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 83 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 84 "data/maps/Route103/scripts.pory"
	end
# 85 "data/maps/Route103/scripts.pory"

# 86 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 87 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 88 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 89 "data/maps/Route103/scripts.pory"
	end
# 90 "data/maps/Route103/scripts.pory"

# 91 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 92 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 93 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 94 "data/maps/Route103/scripts.pory"
	end
# 95 "data/maps/Route103/scripts.pory"

# 96 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 97 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 98 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 99 "data/maps/Route103/scripts.pory"
	end
# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 102 "data/maps/Route103/scripts.pory"
	closemessage
# 103 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 104 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 105 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 106 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 107 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 111 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 112 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 113 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 115 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 116 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 118 "data/maps/Route103/scripts.pory"
	end
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 121 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 122 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 123 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 126 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 128 "data/maps/Route103/scripts.pory"
	end
# 129 "data/maps/Route103/scripts.pory"

# 130 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 131 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 132 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 134 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 137 "data/maps/Route103/scripts.pory"
	end
# 138 "data/maps/Route103/scripts.pory"

# 139 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 140 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 141 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 142 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 143 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 144 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 145 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 146 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 147 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 148 "data/maps/Route103/scripts.pory"
	releaseall
# 149 "data/maps/Route103/scripts.pory"
	end
# 150 "data/maps/Route103/scripts.pory"

# 151 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 152 "data/maps/Route103/scripts.pory"
	walk_left
# 153 "data/maps/Route103/scripts.pory"
	walk_down
# 154 "data/maps/Route103/scripts.pory"
	step_end
# 155 "data/maps/Route103/scripts.pory"

# 156 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 157 "data/maps/Route103/scripts.pory"
	jump_2_down
# 158 "data/maps/Route103/scripts.pory"
	delay_16
# 159 "data/maps/Route103/scripts.pory"
	walk_down
# 160 "data/maps/Route103/scripts.pory"
	walk_down
# 161 "data/maps/Route103/scripts.pory"
	walk_down
# 162 "data/maps/Route103/scripts.pory"
	walk_down
# 163 "data/maps/Route103/scripts.pory"
	step_end
# 164 "data/maps/Route103/scripts.pory"

# 165 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 166 "data/maps/Route103/scripts.pory"
	delay_16
# 167 "data/maps/Route103/scripts.pory"
	delay_4
# 168 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 169 "data/maps/Route103/scripts.pory"
	delay_16
# 170 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 171 "data/maps/Route103/scripts.pory"
	step_end
# 172 "data/maps/Route103/scripts.pory"

# 173 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 174 "data/maps/Route103/scripts.pory"
	walk_down
# 175 "data/maps/Route103/scripts.pory"
	step_end
# 176 "data/maps/Route103/scripts.pory"

# 177 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 178 "data/maps/Route103/scripts.pory"
	jump_2_down
# 179 "data/maps/Route103/scripts.pory"
	delay_16
# 180 "data/maps/Route103/scripts.pory"
	walk_down
# 181 "data/maps/Route103/scripts.pory"
	walk_down
# 182 "data/maps/Route103/scripts.pory"
	walk_down
# 183 "data/maps/Route103/scripts.pory"
	step_end
# 184 "data/maps/Route103/scripts.pory"

# 185 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 186 "data/maps/Route103/scripts.pory"
	delay_16
# 187 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 188 "data/maps/Route103/scripts.pory"
	step_end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 191 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 192 "data/maps/Route103/scripts.pory"
	end
# 193 "data/maps/Route103/scripts.pory"

# 194 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 195 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 196 "data/maps/Route103/scripts.pory"
	end
# 197 "data/maps/Route103/scripts.pory"

# 198 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 199 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 200 "data/maps/Route103/scripts.pory"
	end
# 201 "data/maps/Route103/scripts.pory"

# 202 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 203 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 208 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 209 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 210 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 211 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route103/scripts.pory"
	end
# 213 "data/maps/Route103/scripts.pory"

# 214 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 215 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 216 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 217 "data/maps/Route103/scripts.pory"
	release
# 218 "data/maps/Route103/scripts.pory"
	end
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 221 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 222 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route103/scripts.pory"
	end
# 224 "data/maps/Route103/scripts.pory"

# 225 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 226 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 227 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 228 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 229 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route103/scripts.pory"
	end
# 231 "data/maps/Route103/scripts.pory"

# 232 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 233 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 234 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 235 "data/maps/Route103/scripts.pory"
	release
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 239 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 240 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route103/scripts.pory"
	end
# 242 "data/maps/Route103/scripts.pory"

# 243 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 244 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 245 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route103/scripts.pory"
	end
# 247 "data/maps/Route103/scripts.pory"

# 248 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 249 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 250 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 251 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 252 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 253 "data/maps/Route103/scripts.pory"
	release
# 254 "data/maps/Route103/scripts.pory"
	end
# 255 "data/maps/Route103/scripts.pory"

# 256 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 257 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 258 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 260 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 261 "data/maps/Route103/scripts.pory"
	release
# 262 "data/maps/Route103/scripts.pory"
	end
# 263 "data/maps/Route103/scripts.pory"

# 264 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 265 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 266 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route103/scripts.pory"
	end
# 268 "data/maps/Route103/scripts.pory"

# 269 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 270 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 271 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route103/scripts.pory"
	end
# 273 "data/maps/Route103/scripts.pory"

# 274 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 275 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 276 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 277 "data/maps/Route103/scripts.pory"
	end
# 278 "data/maps/Route103/scripts.pory"

# 279 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 280 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 281 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route103/scripts.pory"
	end
# 283 "data/maps/Route103/scripts.pory"

# 284 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 285 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 286 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route103/scripts.pory"
	end
# 288 "data/maps/Route103/scripts.pory"

# 289 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 290 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 291 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 292 "data/maps/Route103/scripts.pory"

# 293 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 294 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 295 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 296 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 297 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 298 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 299 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 300 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 301 "data/maps/Route103/scripts.pory"

# 302 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 303 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 304 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 305 "data/maps/Route103/scripts.pory"

# 306 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 307 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 308 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 309 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 310 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 311 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 312 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 313 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 314 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 315 "data/maps/Route103/scripts.pory"

# 316 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 317 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 318 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 319 "data/maps/Route103/scripts.pory"

# 320 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 321 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 322 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 323 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 324 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 325 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 326 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 327 "data/maps/Route103/scripts.pory"

# 328 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 329 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 330 "data/maps/Route103/scripts.pory"

# 331 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 332 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 333 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 334 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 335 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 336 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 337 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 338 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 339 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 340 "data/maps/Route103/scripts.pory"

# 341 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 342 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 343 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 344 "data/maps/Route103/scripts.pory"

# 345 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 346 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 347 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 348 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 349 "data/maps/Route103/scripts.pory"

# 350 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 351 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 352 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_EventScript_Portal::
# 357 "data/maps/Route103/scripts.pory"
	lockall
# 358 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Portal_Text_0
# 359 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_PORTAL_ACCESS, Route103_EventScript_Portal_2
Route103_EventScript_Portal_1:
# 371 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103_EventScript_Portal_2:
# 360 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Portal_Text_1, MSGBOX_YESNO
# 361 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route103_EventScript_Portal_4
	goto Route103_EventScript_Portal_1

Route103_EventScript_Portal_4:
# 362 "data/maps/Route103/scripts.pory"
	fadescreen FADE_TO_WHITE
# 363 "data/maps/Route103/scripts.pory"
	delay 200
# 364 "data/maps/Route103/scripts.pory"
	setvar VAR_HOTNESS, 0
# 365 "data/maps/Route103/scripts.pory"
	warp MAP_WEIRDCAVE1, 9, 30
# 366 "data/maps/Route103/scripts.pory"
	fadescreen FADE_FROM_WHITE
	goto Route103_EventScript_Portal_1


Route103_EventScript_Igotnothingtosay::
# 375 "data/maps/Route103/scripts.pory"
	lockall
# 376 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Igotnothingtosay_Text_0
# 377 "data/maps/Route103/scripts.pory"
	releaseall
	return


Route103_EventScript_YinTalk1::
# 381 "data/maps/Route103/scripts.pory"
	lockall
# 382 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_YIN_WARP_1, Route103_EventScript_YinTalk1_2
# 389 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_4
# 390 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_5
# 391 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_6
# 392 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_7
# 393 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_2
# 394 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_8
# 395 "data/maps/Route103/scripts.pory"
	removeobject 21
# 396 "data/maps/Route103/scripts.pory"
	setobjectxyperm 21, 22, 13
# 397 "data/maps/Route103/scripts.pory"
	addobject 21
# 398 "data/maps/Route103/scripts.pory"
	setflag FLAG_YIN_WARP_1
Route103_EventScript_YinTalk1_1:
# 400 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103_EventScript_YinTalk1_2:
# 383 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_0
# 384 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_1
# 385 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_2
# 386 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinTalk1_Text_3
	goto Route103_EventScript_YinTalk1_1


Route103_EventScript_YinLastDialogue::
# 404 "data/maps/Route103/scripts.pory"
	lockall
# 405 "data/maps/Route103/scripts.pory"
	setvar VAR_VENOM, 0
# 406 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_0
# 407 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_1
# 408 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_2
# 409 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_3
# 410 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_4
# 411 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_5
# 412 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_6
# 413 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_7
# 414 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_8
# 415 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_9, MSGBOX_YESNO
# 416 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route103_EventScript_YinLastDialogue_2
# 422 "data/maps/Route103/scripts.pory"
	addvar VAR_VENOM, 1
# 423 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_14
# 424 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_15
# 425 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_16
# 426 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_17
# 427 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_18, MSGBOX_YESNO
# 428 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route103_EventScript_YinLastDialogue_9
# 431 "data/maps/Route103/scripts.pory"
	addvar VAR_VENOM, 1
# 432 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_20
# 433 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_21
# 434 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_22
# 435 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_23
Route103_EventScript_YinLastDialogue_1:
# 438 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_24
# 439 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_25
# 440 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_26
# 441 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_27
# 442 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_28
# 443 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_29
# 444 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_30, MSGBOX_YESNO
# 446 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route103_EventScript_YinLastDialogue_6
# 450 "data/maps/Route103/scripts.pory"
	addvar VAR_VENOM, 2
# 451 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_33
# 452 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_34
# 453 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_35
# 454 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_36
Route103_EventScript_YinLastDialogue_5:
# 456 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_37
# 457 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_38
# 458 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_39
# 459 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_40
# 460 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_41
# 461 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_42
# 462 "data/maps/Route103/scripts.pory"
	removeobject 27
# 463 "data/maps/Route103/scripts.pory"
	setflag FLAG_YIN_WARP_2
# 464 "data/maps/Route103/scripts.pory"
	warp MAP_ROUTE103, 4, 1
# 465 "data/maps/Route103/scripts.pory"
	releaseall
	return

Route103_EventScript_YinLastDialogue_2:
# 417 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_10
# 418 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_11
# 419 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_12
# 420 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_13
	goto Route103_EventScript_YinLastDialogue_1

Route103_EventScript_YinLastDialogue_6:
# 447 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_31
# 448 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_32
	goto Route103_EventScript_YinLastDialogue_5

Route103_EventScript_YinLastDialogue_9:
# 429 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_YinLastDialogue_Text_19
	goto Route103_EventScript_YinLastDialogue_1


Route103_EventScript_RemoveYinlings::
# 469 "data/maps/Route103/scripts.pory"
	lockall
# 470 "data/maps/Route103/scripts.pory"
	setflag FLAG_REMOVE_YINLINGS
# 471 "data/maps/Route103/scripts.pory"
	removeobject 22
# 472 "data/maps/Route103/scripts.pory"
	removeobject 23
# 473 "data/maps/Route103/scripts.pory"
	removeobject 24
# 474 "data/maps/Route103/scripts.pory"
	removeobject 25
# 475 "data/maps/Route103/scripts.pory"
	removeobject 26
# 476 "data/maps/Route103/scripts.pory"
	releaseall
	return


YinFaceRight::
# 480 "data/maps/Route103/scripts.pory"
	face_right
	return


YinFaceLeft::
# 484 "data/maps/Route103/scripts.pory"
	face_left
	return


Route103_EventScript_Portal_Text_0:
# 358 "data/maps/Route103/scripts.pory"
	.string "Somehow, this part of the\ntree and grass is completely grey,\pand the grass has dissolved into sand.$"

Route103_EventScript_Portal_Text_1:
# 360 "data/maps/Route103/scripts.pory"
	.string "Use DREAMREAPER??$"

Route103_EventScript_Igotnothingtosay_Text_0:
# 376 "data/maps/Route103/scripts.pory"
	.string "...$"

Route103_EventScript_YinTalk1_Text_0:
# 383 "data/maps/Route103/scripts.pory"
	.string "There is a woman here as well.$"

Route103_EventScript_YinTalk1_Text_1:
# 384 "data/maps/Route103/scripts.pory"
	.string "She isn't looking at you.$"

Route103_EventScript_YinTalk1_Text_2:
# 385 "data/maps/Route103/scripts.pory"
	.string "You look down at her hands.$"

Route103_EventScript_YinTalk1_Text_3:
# 386 "data/maps/Route103/scripts.pory"
	.string "She is pointing downwards.$"

Route103_EventScript_YinTalk1_Text_4:
# 389 "data/maps/Route103/scripts.pory"
	.string "There is a woman here.$"

Route103_EventScript_YinTalk1_Text_5:
# 390 "data/maps/Route103/scripts.pory"
	.string "Her face is pale and sickly, and\nher hair is a deep black.$"

Route103_EventScript_YinTalk1_Text_6:
# 391 "data/maps/Route103/scripts.pory"
	.string "Her eyes are clouded, like\nmarbles dipped in ink.$"

Route103_EventScript_YinTalk1_Text_7:
# 392 "data/maps/Route103/scripts.pory"
	.string "She is staring at you intently.$"

Route103_EventScript_YinTalk1_Text_8:
# 394 "data/maps/Route103/scripts.pory"
	.string "She beckons you to follow her.$"

Route103_EventScript_YinLastDialogue_Text_0:
# 406 "data/maps/Route103/scripts.pory"
	.string "Hello, there.$"

Route103_EventScript_YinLastDialogue_Text_1:
# 407 "data/maps/Route103/scripts.pory"
	.string "I apologize for the detour.$"

Route103_EventScript_YinLastDialogue_Text_2:
# 408 "data/maps/Route103/scripts.pory"
	.string "I had to find a spot where\nwe would not be overheard, you see.$"

Route103_EventScript_YinLastDialogue_Text_3:
# 409 "data/maps/Route103/scripts.pory"
	.string "You never know who is listening.$"

Route103_EventScript_YinLastDialogue_Text_4:
# 410 "data/maps/Route103/scripts.pory"
	.string "I do not have much time to\nspeak with you, so I will be blunt.$"

Route103_EventScript_YinLastDialogue_Text_5:
# 411 "data/maps/Route103/scripts.pory"
	.string "You need not know my name.$"

Route103_EventScript_YinLastDialogue_Text_6:
# 412 "data/maps/Route103/scripts.pory"
	.string "I have no interest in yours, either.$"

Route103_EventScript_YinLastDialogue_Text_7:
# 413 "data/maps/Route103/scripts.pory"
	.string "But, I believe we can\nhelp each other.$"

Route103_EventScript_YinLastDialogue_Text_8:
# 414 "data/maps/Route103/scripts.pory"
	.string "This world...is crumbling.$"

Route103_EventScript_YinLastDialogue_Text_9:
# 415 "data/maps/Route103/scripts.pory"
	.string "Surely, you have seen it?$"

Route103_EventScript_YinLastDialogue_Text_10:
# 417 "data/maps/Route103/scripts.pory"
	.string "Yes, yes. The GREY. The ASH.$"

Route103_EventScript_YinLastDialogue_Text_11:
# 418 "data/maps/Route103/scripts.pory"
	.string "It is unnatural. Some may even\nfind it repulsive.$"

Route103_EventScript_YinLastDialogue_Text_12:
# 419 "data/maps/Route103/scripts.pory"
	.string "But, I don't believe it means\nus harm.$"

Route103_EventScript_YinLastDialogue_Text_13:
# 420 "data/maps/Route103/scripts.pory"
	.string "I find it beautiful, in a strange way.$"

Route103_EventScript_YinLastDialogue_Text_14:
# 423 "data/maps/Route103/scripts.pory"
	.string "No?$"

Route103_EventScript_YinLastDialogue_Text_15:
# 424 "data/maps/Route103/scripts.pory"
	.string "You just walked straight through\na row of trees.$"

Route103_EventScript_YinLastDialogue_Text_16:
# 425 "data/maps/Route103/scripts.pory"
	.string "Look at the trees behind me.$"

Route103_EventScript_YinLastDialogue_Text_17:
# 426 "data/maps/Route103/scripts.pory"
	.string "Observe the way the leaves bleed\ninto other trees.$"

Route103_EventScript_YinLastDialogue_Text_18:
# 427 "data/maps/Route103/scripts.pory"
	.string "Do you find it alluring?$"

Route103_EventScript_YinLastDialogue_Text_19:
# 429 "data/maps/Route103/scripts.pory"
	.string "So you see it too.$"

Route103_EventScript_YinLastDialogue_Text_20:
# 432 "data/maps/Route103/scripts.pory"
	.string "It seems you are a person unable\nto find the beauty in strange places.$"

Route103_EventScript_YinLastDialogue_Text_21:
# 433 "data/maps/Route103/scripts.pory"
	.string "Or, perhaps you are just oblivious.$"

Route103_EventScript_YinLastDialogue_Text_22:
# 434 "data/maps/Route103/scripts.pory"
	.string "We may be more different than I expected.$"

Route103_EventScript_YinLastDialogue_Text_23:
# 435 "data/maps/Route103/scripts.pory"
	.string "....but not different enough.$"

Route103_EventScript_YinLastDialogue_Text_24:
# 438 "data/maps/Route103/scripts.pory"
	.string "I believe...it is time for this\ncharade to end.$"

Route103_EventScript_YinLastDialogue_Text_25:
# 439 "data/maps/Route103/scripts.pory"
	.string "Forgive me, but I will say no more.$"

Route103_EventScript_YinLastDialogue_Text_26:
# 440 "data/maps/Route103/scripts.pory"
	.string "I would prefer for you to stay in the\ndark.$"

Route103_EventScript_YinLastDialogue_Text_27:
# 441 "data/maps/Route103/scripts.pory"
	.string "It is for your own sake.$"

Route103_EventScript_YinLastDialogue_Text_28:
# 442 "data/maps/Route103/scripts.pory"
	.string "............$"

Route103_EventScript_YinLastDialogue_Text_29:
# 443 "data/maps/Route103/scripts.pory"
	.string "I am sure this is sounding rather\nsuspicious to you.$"

Route103_EventScript_YinLastDialogue_Text_30:
# 444 "data/maps/Route103/scripts.pory"
	.string "Despite this, will you assist me?$"

Route103_EventScript_YinLastDialogue_Text_31:
# 447 "data/maps/Route103/scripts.pory"
	.string "Of course you will.$"

Route103_EventScript_YinLastDialogue_Text_32:
# 448 "data/maps/Route103/scripts.pory"
	.string "I am happy to hear that.$"

Route103_EventScript_YinLastDialogue_Text_33:
# 451 "data/maps/Route103/scripts.pory"
	.string "So you say.$"

Route103_EventScript_YinLastDialogue_Text_34:
# 452 "data/maps/Route103/scripts.pory"
	.string "And yet, what do you have to lose?$"

Route103_EventScript_YinLastDialogue_Text_35:
# 453 "data/maps/Route103/scripts.pory"
	.string "Ignore me if you wish.$"

Route103_EventScript_YinLastDialogue_Text_36:
# 454 "data/maps/Route103/scripts.pory"
	.string "But if you change your mind...$"

Route103_EventScript_YinLastDialogue_Text_37:
# 456 "data/maps/Route103/scripts.pory"
	.string "I will need you to do something first.$"

Route103_EventScript_YinLastDialogue_Text_38:
# 457 "data/maps/Route103/scripts.pory"
	.string "You must obtain$"

Route103_EventScript_YinLastDialogue_Text_39:
# 458 "data/maps/Route103/scripts.pory"
	.string "A CATALYST.$"

Route103_EventScript_YinLastDialogue_Text_40:
# 459 "data/maps/Route103/scripts.pory"
	.string "A NORMAL type will do.$"

Route103_EventScript_YinLastDialogue_Text_41:
# 460 "data/maps/Route103/scripts.pory"
	.string "Once you have done this, I will find\nyou again in 'Petalburg City'.$"

Route103_EventScript_YinLastDialogue_Text_42:
# 461 "data/maps/Route103/scripts.pory"
	.string "With that, I bid you farewell.$"
