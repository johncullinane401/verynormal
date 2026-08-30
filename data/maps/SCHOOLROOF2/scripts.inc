# 1 "data/maps/SCHOOLROOF2/scripts.pory"
SCHOOLROOF2_MapScripts::
# 2 "data/maps/SCHOOLROOF2/scripts.pory"
	.byte 0

# 5 "data/maps/SCHOOLROOF2/scripts.pory"
BrineyMove1:
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
# 6 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_up
	step_end

# 9 "data/maps/SCHOOLROOF2/scripts.pory"
BrineyMove2:
# 10 "data/maps/SCHOOLROOF2/scripts.pory"
	face_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
# 11 "data/maps/SCHOOLROOF2/scripts.pory"
	walk_down
	step_end

BRINEYENCOUNTERLAST::
# 15 "data/maps/SCHOOLROOF2/scripts.pory"
	lockall
# 16 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_0
# 17 "data/maps/SCHOOLROOF2/scripts.pory"
	addobject 3
# 18 "data/maps/SCHOOLROOF2/scripts.pory"
	applymovement 3, BrineyMove1
# 19 "data/maps/SCHOOLROOF2/scripts.pory"
	waitmovement 3
# 20 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_1
# 21 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_2
# 22 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_3
# 23 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_4
# 24 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_5
# 25 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_6
# 26 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_7
# 27 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_8
# 28 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_9
# 29 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_10
# 30 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_11
# 31 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_12
# 32 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_13
# 33 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_14
# 34 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_15
# 35 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_16, MSGBOX_YESNO
# 37 "data/maps/SCHOOLROOF2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BRINEYENCOUNTERLAST_2
# 48 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_24
# 49 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_25
# 50 "data/maps/SCHOOLROOF2/scripts.pory"
	setvar VAR_0x8004, 3
# 51 "data/maps/SCHOOLROOF2/scripts.pory"
	goto SCHOOLROOF1_EventScript_BrineyBattle
BRINEYENCOUNTERLAST_1:
# 53 "data/maps/SCHOOLROOF2/scripts.pory"
	releaseall
	return

BRINEYENCOUNTERLAST_2:
# 38 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_17
# 39 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_18
# 40 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_19
# 41 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_20
# 42 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_21
# 43 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_22
# 44 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYENCOUNTERLAST_Text_23
# 45 "data/maps/SCHOOLROOF2/scripts.pory"
	applymovement 3, BrineyMove2
# 46 "data/maps/SCHOOLROOF2/scripts.pory"
	waitmovement 1
	goto BRINEYENCOUNTERLAST_1


BRINEYRETURNTO::
# 57 "data/maps/SCHOOLROOF2/scripts.pory"
	lockall
# 58 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYRETURNTO_Text_0
# 59 "data/maps/SCHOOLROOF2/scripts.pory"
	msgbox BRINEYRETURNTO_Text_1
	return


SCHOOLROOF1_EventScript_BrineyBattle::
# 71 "data/maps/SCHOOLROOF2/scripts.pory"
	trainerbattle_single TRAINER_VITO, BrineyIntro, BrineyOutro
# 72 "data/maps/SCHOOLROOF2/scripts.pory"
	releaseall
	return


BRINEYENCOUNTERLAST_Text_0:
# 16 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Now, hold on just a minute, lad.$"

BRINEYENCOUNTERLAST_Text_1:
# 20 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "I've been looking for ya since\nya lent me that welding fluid.$"

BRINEYENCOUNTERLAST_Text_2:
# 21 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Thanks to ya, I was able to repair\nthe old hull.$"

BRINEYENCOUNTERLAST_Text_3:
# 22 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "The ship, she floats nice and smooth\nnow.$"

BRINEYENCOUNTERLAST_Text_4:
# 23 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Couldnt've found better stuff meself.$"

BRINEYENCOUNTERLAST_Text_5:
# 24 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "...On that note...$"

BRINEYENCOUNTERLAST_Text_6:
# 25 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Lad, I have to ask ya.$"

BRINEYENCOUNTERLAST_Text_7:
# 26 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Where'd ya get this?$"

BRINEYENCOUNTERLAST_Text_8:
# 27 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Don't think I'm stupid enough\nto not recognize me own signature.$"

BRINEYENCOUNTERLAST_Text_9:
# 28 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "...odd, ain't it?$"

BRINEYENCOUNTERLAST_Text_10:
# 29 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "...$"

BRINEYENCOUNTERLAST_Text_11:
# 30 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "You won't talk now, eh?$"

BRINEYENCOUNTERLAST_Text_12:
# 31 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Don't be afraid, kid.$"

BRINEYENCOUNTERLAST_Text_13:
# 32 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "I don't quite know what\nyou've been doing, but it can't be good.$"

BRINEYENCOUNTERLAST_Text_14:
# 33 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "I can even see that...creature,\nya got waiting over there.$"

BRINEYENCOUNTERLAST_Text_15:
# 34 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "It's not too late to turn back\nnow, kid.$"

BRINEYENCOUNTERLAST_Text_16:
# 35 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "So just...walk away, lad.$"

BRINEYENCOUNTERLAST_Text_17:
# 38 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Aye, a good choice.$"

BRINEYENCOUNTERLAST_Text_18:
# 39 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Just forget about this...thing.$"

BRINEYENCOUNTERLAST_Text_19:
# 40 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "There's more to do here in this place.$"

BRINEYENCOUNTERLAST_Text_20:
# 41 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "I'll show ya.$"

BRINEYENCOUNTERLAST_Text_21:
# 42 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "We can ride on me boat,\nshare a few tales.$"

BRINEYENCOUNTERLAST_Text_22:
# 43 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "I'm sure ya got quite a\nfew of your own!$"

BRINEYENCOUNTERLAST_Text_23:
# 44 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Come on, lad.$"

BRINEYENCOUNTERLAST_Text_24:
# 48 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "...afraid you'd say that.$"

BRINEYENCOUNTERLAST_Text_25:
# 49 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Well...$"

BRINEYRETURNTO_Text_0:
# 58 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "...ha.$"

BRINEYRETURNTO_Text_1:
# 59 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Of course...ya couldn't just listen.$"

BrineyIntro::
# 62 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "Some lessons...just need to be\ntaught the hard way, I s'pose!$"

BrineyOutro::
# 66 "data/maps/SCHOOLROOF2/scripts.pory"
	.string "...aye.$"
