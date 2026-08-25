# 1 "data/maps/SCHOOLROOF1/scripts.pory"
SCHOOLROOF1_MapScripts::
# 2 "data/maps/SCHOOLROOF1/scripts.pory"
	.byte 0

SCHOOLROOF1_EventScript_Mystery::
# 6 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 7 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_0
# 8 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_1
# 9 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox SCHOOLROOF1_EventScript_Mystery_Text_2
# 10 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_NOTBEHIND::
# 14 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 15 "data/maps/SCHOOLROOF1/scripts.pory"
	clearflag FLAG_CANPUSH
# 16 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Behind::
# 20 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 21 "data/maps/SCHOOLROOF1/scripts.pory"
	setflag FLAG_CANPUSH
# 22 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


# 25 "data/maps/SCHOOLROOF1/scripts.pory"
BrineyMove1:
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
# 26 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_up
	step_end

# 29 "data/maps/SCHOOLROOF1/scripts.pory"
BrineyMove2:
# 30 "data/maps/SCHOOLROOF1/scripts.pory"
	face_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
# 31 "data/maps/SCHOOLROOF1/scripts.pory"
	walk_down
	step_end

BRINEYENCOUNTERLAST::
# 35 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 36 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_0
# 37 "data/maps/SCHOOLROOF1/scripts.pory"
	addobject 3
# 38 "data/maps/SCHOOLROOF1/scripts.pory"
	applymovement 3, BrineyMove1
# 39 "data/maps/SCHOOLROOF1/scripts.pory"
	waitmovement 3
# 40 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_1
# 41 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_2
# 42 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_3
# 43 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_4
# 44 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_5
# 45 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_6
# 46 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_7
# 47 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_8
# 48 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_9
# 49 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_10
# 50 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_11
# 51 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_12
# 52 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_13
# 53 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_14
# 54 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_15
# 55 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_16, MSGBOX_YESNO
# 57 "data/maps/SCHOOLROOF1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BRINEYENCOUNTERLAST_2
# 68 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_24
# 69 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_25
# 70 "data/maps/SCHOOLROOF1/scripts.pory"
	setvar VAR_0x8004, 3
# 71 "data/maps/SCHOOLROOF1/scripts.pory"
	goto SCHOOLROOF1_EventScript_BrineyBattle
BRINEYENCOUNTERLAST_1:
# 73 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return

BRINEYENCOUNTERLAST_2:
# 58 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_17
# 59 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_18
# 60 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_19
# 61 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_20
# 62 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_21
# 63 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_22
# 64 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_23
# 65 "data/maps/SCHOOLROOF1/scripts.pory"
	applymovement 3, BrineyMove2
# 66 "data/maps/SCHOOLROOF1/scripts.pory"
	waitmovement 1
	goto BRINEYENCOUNTERLAST_1


BRINEYRETURNTO::
# 77 "data/maps/SCHOOLROOF1/scripts.pory"
	lockall
# 78 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYRETURNTO_Text_0
# 79 "data/maps/SCHOOLROOF1/scripts.pory"
	msgbox BRINEYRETURNTO_Text_1
	return


SCHOOLROOF1_EventScript_BrineyBattle::
# 91 "data/maps/SCHOOLROOF1/scripts.pory"
	trainerbattle_single TRAINER_VITO, BrineyIntro, BrineyOutro
# 92 "data/maps/SCHOOLROOF1/scripts.pory"
	releaseall
	return


SCHOOLROOF1_EventScript_Mystery_Text_0:
# 7 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...it's beautiful.$"

SCHOOLROOF1_EventScript_Mystery_Text_1:
# 8 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Please, just leave me alone.$"

SCHOOLROOF1_EventScript_Mystery_Text_2:
# 9 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Why don't you explore down there?$"

BRINEYENCOUNTERLAST_Text_0:
# 36 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Now, hold on just a minute, lad.$"

BRINEYENCOUNTERLAST_Text_1:
# 40 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "I've been looking for ya since\nya lent me that welding fluid.$"

BRINEYENCOUNTERLAST_Text_2:
# 41 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Thanks to ya, I was able to repair\nthe old hull.$"

BRINEYENCOUNTERLAST_Text_3:
# 42 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "The ship, she floats nice and smooth\nnow.$"

BRINEYENCOUNTERLAST_Text_4:
# 43 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Couldnt've found better stuff meself.$"

BRINEYENCOUNTERLAST_Text_5:
# 44 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...On that note...$"

BRINEYENCOUNTERLAST_Text_6:
# 45 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Lad, I have to ask ya.$"

BRINEYENCOUNTERLAST_Text_7:
# 46 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Where'd ya get this?$"

BRINEYENCOUNTERLAST_Text_8:
# 47 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Don't think I'm stupid enough\nto not recognize me own signature.$"

BRINEYENCOUNTERLAST_Text_9:
# 48 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...odd, ain't it?$"

BRINEYENCOUNTERLAST_Text_10:
# 49 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...$"

BRINEYENCOUNTERLAST_Text_11:
# 50 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "You won't talk now, eh?$"

BRINEYENCOUNTERLAST_Text_12:
# 51 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Don't be afraid, kid.$"

BRINEYENCOUNTERLAST_Text_13:
# 52 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "I don't quite know what\nyou've been doing, but it can't be good.$"

BRINEYENCOUNTERLAST_Text_14:
# 53 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "I can even see that...creature,\nya got waiting over there.$"

BRINEYENCOUNTERLAST_Text_15:
# 54 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "It's not too late to turn back\nnow, kid.$"

BRINEYENCOUNTERLAST_Text_16:
# 55 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "So just...walk away, lad.$"

BRINEYENCOUNTERLAST_Text_17:
# 58 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Aye, a good choice.$"

BRINEYENCOUNTERLAST_Text_18:
# 59 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Just forget about this...thing.$"

BRINEYENCOUNTERLAST_Text_19:
# 60 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "There's more to do here in this place.$"

BRINEYENCOUNTERLAST_Text_20:
# 61 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "I'll show ya.$"

BRINEYENCOUNTERLAST_Text_21:
# 62 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "We can ride on me boat,\nshare a few tales.$"

BRINEYENCOUNTERLAST_Text_22:
# 63 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "I'm sure ya got quite a\nfew of your own!$"

BRINEYENCOUNTERLAST_Text_23:
# 64 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Come on, lad.$"

BRINEYENCOUNTERLAST_Text_24:
# 68 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...afraid you'd say that.$"

BRINEYENCOUNTERLAST_Text_25:
# 69 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Well...$"

BRINEYRETURNTO_Text_0:
# 78 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...ha.$"

BRINEYRETURNTO_Text_1:
# 79 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Of course...ya couldn't just listen.$"

BrineyIntro::
# 82 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "Some lessons...just need to be\ntaught the hard way, I s'pose!$"

BrineyOutro::
# 86 "data/maps/SCHOOLROOF1/scripts.pory"
	.string "...aye.$"
