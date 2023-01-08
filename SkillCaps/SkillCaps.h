#pragma once

int CheckMaxSkill(int skillid, int eqclass, int level);

typedef enum {
	_1H_BLUNT = 0,
	_1H_SLASHING = 1,
	_2H_BLUNT = 2,
	_2H_SLASHING = 3,
	ABJURE = 4,
	ALTERATION = 5,
	APPLY_POISON = 6,
	ARCHERY = 7,
	BACKSTAB = 8,
	BIND_WOUND = 9,
	BASH = 10,
	BLOCKSKILL = 11,
	BRASS_INSTRUMENTS = 12,
	CHANNELING = 13,
	CONJURATION = 14,
	DEFENSE = 15,
	DISARM = 16,
	DISARM_TRAPS = 17,
	DIVINATION = 18,
	DODGE = 19,
	DOUBLE_ATTACK = 20,
	DRAGON_PUNCH = 21,	//aka Tail Rake
	DUAL_WIELD = 22,
	EAGLE_STRIKE = 23,
	EVOCATION = 24,
	FEIGN_DEATH = 25,
	FLYING_KICK = 26,
	FORAGE = 27,
	HAND_TO_HAND = 28,
	HIDE = 29,
	KICK = 30,
	MEDITATE = 31,
	MEND = 32,
	OFFENSE = 33,
	PARRY = 34,
	PICK_LOCK = 35,
	PIERCING = 36,
	RIPOSTE = 37,
	ROUND_KICK = 38,
	SAFE_FALL = 39,
	SENSE_HEADING = 40,
	SINGING = 41,
	SNEAK = 42,
	SPECIALIZE_ABJURE = 43,
	SPECIALIZE_ALTERATION = 44,
	SPECIALIZE_CONJURATION = 45,
	SPECIALIZE_DIVINATION = 46,
	SPECIALIZE_EVOCATION = 47,
	PICK_POCKETS = 48,
	STRINGED_INSTRUMENTS = 49,
	SWIMMING = 50,
	THROWING = 51,
	TIGER_CLAW = 52,
	TRACKING = 53,
	WIND_INSTRUMENTS = 54,
	FISHING = 55,
	MAKE_POISON = 56,
	TINKERING = 57,
	RESEARCH = 58,
	ALCHEMY = 59,
	BAKING = 60,
	TAILORING = 61,
	SENSE_TRAPS = 62,
	BLACKSMITHING = 63,
	FLETCHING = 64,
	BREWING = 65,
	ALCOHOL_TOLERANCE = 66,
	BEGGING = 67,
	JEWELRY_MAKING = 68,
	POTTERY = 69,
	PERCUSSION_INSTRUMENTS = 70,
	INTIMIDATION = 71,
	BERSERKING = 72,
	TAUNT = 73,
	FRENZY = 74
} SkillType;


#define Array_Class_UNKNOWN 0
#define WARRIOR      1
#define CLERIC       2
#define PALADIN      3
#define RANGER       4
#define SHADOWKNIGHT 5
#define DRUID        6
#define MONK         7
#define BARD         8
#define ROGUE        9
#define SHAMAN      10
#define NECROMANCER 11
#define WIZARD      12
#define MAGICIAN    13
#define ENCHANTER   14
#define BEASTLORD   15
#define BERSERKER   16
#define PLAYER_CLASS_COUNT	16 // used for array defines, must be the count of playable classes
#define WARRIORGM 20 
#define CLERICGM 21 
#define PALADINGM 22 
#define RANGERGM 23 
#define SHADOWKNIGHTGM 24 
#define DRUIDGM 25 
#define MONKGM 26 
#define BARDGM 27 
#define ROGUEGM 28 
#define SHAMANGM 29 
#define NECROMANCERGM 30 
#define WIZARDGM 31 
#define MAGICIANGM 32 
#define ENCHANTERGM 33 
#define BEASTLORDGM   34
#define BERSERKERGM   35
#define BANKER 40 
#define MERCHANT 41
#define ADVENTURERECRUITER 60
#define ADVENTUREMERCHANT 61
#define LDON_TREASURE 62 //objects you can use /open on first seen in LDONs
#define CORPSE_CLASS 62	//only seen on Danvi's Corpse in Akheva so far..
#define TRIBUTE_MASTER	63
#define GUILD_TRIBUTE_MASTER	64	//not sure
#define warrior_1 1
#define monk_1 64
#define paladin_1 4
#define shadow_1 16
#define bard_1 128
#define cleric_1 2
#define necromancer_1 1024
#define ranger_1 8
#define druid_1 32
#define mage_1 4096
#define wizard_1 2048
#define enchanter_1 8192
#define rogue_1 256
#define shaman_1 512
#define call_1 65536


#define HUMAN			1
#define BARBARIAN		2
#define ERUDITE			3
#define WOOD_ELF		4
#define HIGH_ELF		5
#define DARK_ELF		6
#define HALF_ELF		7
#define DWARF			8
#define TROLL			9
#define OGRE			10
#define HALFLING		11
#define GNOME			12
#define WEREWOLF		14
#define WOLF			42
#define BEAR			43
#define SKELETON		60
#define TIGER			63
#define ELEMENTAL		75
#define ALLIGATOR		91
#define EYE_OF_ZOMM		108
#define WOLF_ELEMENTAL	120
#define INVISIBLE_MAN	127
#define IKSAR			128
#define VAHSHIR			130
#define CONTROLLED_BOAT 141
#define IKSAR_SKELETON	161
#define FROGLOK			330
#define FROGLOK2		74	// Not sure why /who all reports race as 74 for frogloks
#define EMU_RACE_NPC	65533
#define EMU_RACE_PET	65534
#define EMU_RACE_UNKNOWN 65535

#define human_1			1
#define barbarian_1		2
#define erudite_1		4
#define woodelf_1		8
#define highelf_1		16
#define darkelf_1		32
#define halfelf_1		64
#define dwarf_1			128
#define troll_1			256
#define ogre_1			512
#define halfling_1		1024
#define gnome_1			2048
#define iksar_1			4096
#define vahshir_1		8192
#define rall_1			16384



// Note: Skills begin at 0, but classes begin at 1. Don't forget to subtract 1 from eqclass when using this array!
//*******************************Warrior Cleric Paladin Ranger Shadow_Knight Druid Monk Bard Rogue Shaman Necromancer Wizard Magician Enchanter Beastlord Banker WarriorGM ClericGM PaladinGM RangerGM Shadow_KnightGM DruidGM MonkGM BardGM RogueGM ShamanGM NecromancerGM WizardGM MagicianGM EnchanterGM BeastlordGM Merchant
static int maxSkills[74][32] = {
	/*_1H_BLUNT*/ 200,175,200,200,200,175,240,200,200,200,110,110,110,110,200,0,200,175,200,200,200,175,240,200,200,200,110,110,110,110,200,0,
	/*_1H_SLASHING*/ 200,0,200,200,200,175,0,200,200,0,0,0,0,0,0,0,200,0,200,200,200,175,0,200,200,0,0,0,0,0,0,0,
	/*_2H_BLUNT*/ 200,175,200,200,200,175,240,0,0,200,110,110,110,110,200,0,200,175,200,200,200,175,240,0,0,200,110,110,110,110,200,0,
	/*_2H_SLASHING*/ 200,0,200,200,200,0,0,0,0,0,0,0,0,0,0,0,200,0,200,200,200,0,0,0,0,0,0,0,0,0,0,0,
	/*ABJURATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*ALTERATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*APPLY_POISON*/ 0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,
	/*ARCHERY*/ 200,0,75,240,75,0,0,0,200,0,0,0,0,0,0,0,200,0,75,240,75,0,0,0,200,0,0,0,0,0,0,0,
	/*BACKSTAB*/ 0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,
	/*BIND_WOUND*/ 175,200,200,150,150,200,200,150,176,200,100,100,100,100,200,0,175,200,200,150,150,200,200,150,176,200,100,100,100,100,100,0,
	/*BASH*/ 220,75,180,0,175,0,0,0,0,0,0,0,0,0,0,0,220,75,180,0,175,0,0,0,0,0,0,0,0,0,0,0,
	/*BLOCK*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,150,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,185,0,
	/*BRASS_INSTR*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*CHANNELING*/ 0,200,200,200,200,200,0,0,0,200,200,200,200,200,200,0,0,200,200,200,200,200,0,0,0,200,200,200,200,200,200,0,
	/*CONJURATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*DEFENSE*/ 210,200,210,200,210,200,230,200,200,200,145,145,145,145,210,0,210,200,210,200,210,200,230,200,200,200,145,145,145,145,200,0,
	/*DISARM*/ 200,0,70,55,70,0,200,0,200,0,0,0,0,0,0,0,200,0,70,55,70,0,200,0,200,0,0,0,0,0,0,0,
	/*DISARM_TRAPS*/ 0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,
	/*DIVINATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*DODGE*/ 140,75,125,137,125,75,200,125,150,75,75,75,75,75,125,0,140,75,125,137,125,75,200,125,150,75,75,75,75,75,125,0,
	/*DOUBLE_ATTACK*/ 205,0,200,200,200,0,210,0,200,0,0,0,0,0,0,0,205,0,200,200,200,0,210,0,200,0,0,0,0,0,0,0,
	/*DRAGON_PUNCH*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*DUEL_WIELD*/ 210,0,0,210,0,0,252,210,210,0,0,0,0,0,210,0,210,0,0,210,0,0,252,210,210,0,0,0,0,0,200,0,
	/*EAGLE_STRIKE*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*EVOCATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*FEIGN_DEATH*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*FLYING_KICK*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*FORAGE*/ 0,0,0,200,0,200,50,55,0,0,0,0,0,0,0,0,0,0,0,200,0,200,50,55,0,0,0,0,0,0,0,0,
	/*HAND_TO_HAND*/ 100,75,100,100,100,75,225,100,100,75,75,75,75,75,200,0,100,75,100,100,100,75,225,100,100,75,75,75,75,75,200,0,
	/*HIDE*/ 0,0,0,75,75,0,0,40,200,0,0,0,0,0,0,0,0,0,0,75,75,0,0,40,200,0,0,0,0,0,0,0,
	/*KICK*/ 149,0,0,149,0,0,200,0,0,0,0,0,0,0,180,0,149,0,0,149,0,0,200,0,0,0,0,0,0,0,200,0,
	/*MEDITATE*/ 0,235,185,185,185,235,0,1,0,235,235,235,235,235,185,0,0,235,185,185,235,235,0,1,0,235,235,235,235,235,185,0,
	/*MEND*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*OFFENSE*/ 210,200,200,210,200,200,230,200,210,200,140,140,140,140,200,0,210,200,200,210,200,200,230,200,210,200,140,140,140,140,200,0,
	/*PARRY*/ 200,0,175,185,175,0,0,75,200,0,0,0,0,0,0,0,200,0,175,185,175,0,0,75,200,0,0,0,0,0,0,0,
	/*PICK_LOCK*/ 0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,
	/*PIERCING*/ 200,0,200,200,200,0,0,200,210,200,110,110,110,110,200,0,200,0,200,200,200,0,0,200,210,200,110,110,110,110,200,0,
	/*RIPOSTE*/ 200,0,175,150,175,0,200,75,200,0,0,0,0,0,150,0,200,0,175,150,175,0,200,75,200,0,0,0,0,0,175,0,
	/*ROUND_KICK*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*SAFE_FALL*/ 0,0,0,0,0,0,200,40,94,0,0,0,0,0,0,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,0,0,
	/*SENSE_HEADING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,100,0,
	/*SINGING*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*SNEAK*/ 0,0,0,75,0,0,113,75,200,0,0,0,0,0,0,0,0,0,0,75,0,0,113,75,200,0,0,0,0,0,0,0,
	/*SPECIALIZE_ABJ*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_ALT*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_CON*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_DIV*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_EVO*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*PICK_POCKETS*/ 0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,
	/*STRINGED_INSTRU*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*SWIMMING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,113,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,100,0,
	/*THROWING*/ 113,0,0,113,0,0,113,113,220,0,75,75,75,75,113,0,113,0,0,113,0,0,113,113,220,0,75,75,75,75,113,0,
	/*TIGER_CLAW*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*TRACKING*/ 0,0,0,200,0,125,0,100,0,0,0,0,0,0,0,0,0,0,0,200,0,125,0,100,0,0,0,0,0,0,0,0,
	/*WIND_INSTRUMENTS*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*SKILL_FISHING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,100,0,
	/*MAKE_POISON*/ 0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,
	/*TINKERING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,0,
	/*RESEARCH*/ 0,0,0,0,0,0,0,0,0,0,200,200,200,200,0,0,0,0,0,0,0,0,0,0,0,0,200,200,200,200,0,0,
	/*ALCHEMY*/ 0,0,0,0,0,0,0,0,0,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,130,0,0,0,0,0,0,
	/*BAKING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*TAILORING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*SENSE_TRAPS*/ 0,0,0,0,0,0,0,75,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,200,0,0,0,0,0,0,0,
	/*BLACKSMITHING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*FLETCHING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*BREWING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*ALCOHOL_TOL*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,100,0,
	/*BEGGING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,100,0,
	/*JEWELRY_MAKING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*POTTERY*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*PERCUSSION_INSTR*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*INTIMIDATION*/ 0,0,0,0,0,0,200,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,200,100,200,0,0,0,0,0,0,0,
	/*BERSERKING*/ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	/*TAUNT*/ 200,0,180,150,180,0,0,0,0,0,0,0,0,0,0,0,200,0,180,150,180,0,0,0,0,0,0,0,0,0,0,0 };

//*******************************Warrior Cleric Paladin Ranger Shadow_Knight Druid Monk Bard Rogue Shaman Necromancer Wizard Magician Enchanter Beastlord Banker WarriorGM ClericGM PaladinGM RangerGM Shadow_KnightGM DruidGM MonkGM BardGM RogueGM ShamanGM NecromancerGM WizardGM MagicianGM EnchanterGM BeastlordGM Merchant
static int maxSkillsBeyond50[74][32] = {
	/*_1H_BLUNT*/ 250,175,225,250,225,175,252,225,250,200,110,110,110,110,250,0,250,175,225,250,225,175,252,225,250,200,110,110,110,110,225,0,
	/*_1H_SLASHING*/ 250,0,225,250,225,175,0,225,250,0,0,0,0,0,0,0,250,0,225,250,225,175,0,225,250,0,0,0,0,0,0,0,
	/*_2H_BLUNT*/ 250,175,225,250,225,175,252,0,0,200,110,110,110,110,250,0,250,175,225,250,225,175,252,0,0,200,110,110,110,110,225,0,
	/*_2H_SLASHING*/ 250,0,225,250,225,0,0,0,0,0,0,0,0,0,0,0,250,0,225,250,225,0,0,0,0,0,0,0,0,0,0,0,
	/*ABJURATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*ALTERATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*APPLY_POISON*/ 0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,
	/*ARCHERY*/ 240,0,75,240,75,0,0,0,240,0,0,0,0,0,0,0,240,0,75,240,75,0,0,0,240,0,0,0,0,0,0,0,
	/*BACKSTAB*/ 0,0,0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,225,0,0,0,0,0,0,0,
	/*BIND_WOUND*/ 210,201,210,200,200,200,210,200,210,200,100,100,100,100,210,0,210,201,210,200,200,200,210,200,210,200,100,100,100,100,122,0,
	/*BASH*/ 240,75,200,0,200,0,0,0,0,0,0,0,0,0,0,0,240,75,200,0,200,0,0,0,0,0,0,0,0,0,0,0,
	/*BLOCK*/ 0,0,0,0,0,0,230,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,230,0,0,0,0,0,0,0,200,0,
	/*BRASS_INSTR*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*CHANNELING*/ 0,220,220,215,220,220,0,0,0,220,220,220,220,220,215,0,0,220,220,215,220,220,0,0,0,220,220,220,220,220,215,0,
	/*CONJURATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*DEFENSE*/ 252,200,252,200,252,200,252,252,252,200,145,145,145,145,235,0,252,200,252,200,252,200,252,252,252,200,145,145,145,145,235,0,
	/*DISARM*/ 200,0,70,55,70,0,200,0,200,0,0,0,0,0,0,0,200,0,70,55,70,0,200,0,200,0,0,0,0,0,0,0,
	/*DISARM_TRAPS*/ 0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,
	/*DIVINATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*DODGE*/ 175,75,155,170,155,75,200,155,210,75,75,75,75,75,170,0,175,75,155,170,155,75,200,155,210,75,75,75,75,75,155,0,
	/*DOUBLE_ATTACK*/ 245,0,235,245,235,0,250,0,240,0,0,0,0,0,0,0,245,0,235,245,235,0,250,0,240,0,0,0,0,0,0,0,
	/*DRAGON_PUNCH*/ 0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,
	/*DUEL_WIELD*/ 245,0,0,245,0,0,252,210,245,0,0,0,0,0,245,0,245,0,0,245,0,0,252,210,245,0,0,0,0,0,245,0,
	/*EAGLE_STRIKE*/ 0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,
	/*EVOCATION*/ 0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,0,235,235,235,235,235,0,0,0,235,235,235,235,235,235,0,
	/*FEIGN_DEATH*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*FLYING_KICK*/ 0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,
	/*FORAGE*/ 0,0,0,200,0,200,50,55,0,0,0,0,0,0,0,0,0,0,0,200,0,200,50,55,0,0,0,0,0,0,0,0,
	/*HAND_TO_HAND*/ 100,75,100,100,100,75,252,100,100,75,75,75,75,75,250,0,100,75,100,100,100,75,252,100,100,75,75,75,75,75,250,0,
	/*HIDE*/ 0,0,0,75,75,0,0,40,200,0,0,0,0,0,0,0,0,0,0,75,75,0,0,40,200,0,0,0,0,0,0,0,
	/*KICK*/ 210,0,0,205,0,0,250,0,0,0,0,0,0,0,205,0,210,0,0,205,0,0,250,0,0,0,0,0,0,0,230,0,
	/*MEDITATE*/ 0,252,235,226,235,252,0,1,0,252,252,252,252,252,226,0,0,252,235,226,235,252,0,1,0,252,252,252,252,252,226,0,
	/*MEND*/ 0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,
	/*OFFENSE*/ 252,200,225,252,230,200,252,225,252,200,140,140,140,140,252,0,252,200,225,252,230,200,252,225,252,200,140,140,140,140,252,0,
	/*PARRY*/ 230,0,205,220,205,0,0,75,230,0,0,0,0,0,0,0,230,0,205,220,205,0,0,75,230,0,0,0,0,0,0,0,
	/*PICK_LOCK*/ 0,0,0,0,0,0,0,100,210,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,210,0,0,0,0,0,0,0,
	/*PIERCING*/ 240,0,225,240,225,0,0,225,250,200,110,110,110,110,225,0,240,0,225,240,225,0,0,225,250,200,110,110,110,110,225,0,
	/*RIPOSTE*/ 225,0,200,150,200,0,225,75,225,0,0,0,0,0,195,0,225,0,200,150,200,0,225,75,225,0,0,0,0,0,185,0,
	/*ROUND_KICK*/ 0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,225,0,0,0,0,0,0,0,0,0,
	/*SAFE_FALL*/ 0,0,0,0,0,0,200,40,94,0,0,0,0,0,0,0,0,0,0,0,0,0,200,40,94,0,0,0,0,0,0,0,
	/*SENSE_HEADING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,200,200,200,200,200,200,200,200,200,200,200,200,200,200,100,0,
	/*SINGING*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*SNEAK*/ 0,0,0,75,0,0,113,75,200,0,0,0,0,0,0,0,0,0,0,75,0,0,113,75,200,0,0,0,0,0,0,0,
	/*SPECIALIZE_ABJ*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_ALT*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_CON*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_DIV*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*SPECIALIZE_EVO*/ 0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,0,200,0,0,0,200,0,0,0,200,200,200,200,200,0,0,
	/*PICK_POCKETS*/ 0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,100,200,0,0,0,0,0,0,0,
	/*STRINGED_INSTRU*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*SWIMMING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,200,200,200,200,200,200,200,200,200,200,200,200,200,200,100,0,
	/*THROWING*/ 200,0,0,113,0,0,200,113,250,0,75,75,75,75,200,0,200,0,0,113,0,0,200,113,250,0,75,75,75,75,113,0,
	/*TIGER_CLAW*/ 0,0,0,0,0,0,252,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,252,0,0,0,0,0,0,0,0,0,
	/*TRACKING*/ 0,0,0,200,0,125,0,100,0,0,0,0,0,0,0,0,0,0,0,200,0,125,0,100,0,0,0,0,0,0,0,0,
	/*WIND_INSTRUMENTS*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*SKILL_FISHING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,200,200,200,200,200,200,200,200,200,200,200,200,200,200,100,0,
	/*MAKE_POISON*/ 0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,200,0,0,0,0,0,0,0,
	/*TINKERING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,0,
	/*RESEARCH*/ 0,0,0,0,0,0,0,0,0,0,200,200,200,200,0,0,0,0,0,0,0,0,0,0,0,0,200,200,200,200,0,0,
	/*ALCHEMY*/ 0,0,0,0,0,0,0,0,0,180,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,180,0,0,0,0,0,0,
	/*BAKING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*TAILORING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*SENSE_TRAPS*/ 0,0,0,0,0,0,0,75,200,0,0,0,0,0,0,0,0,0,0,0,0,0,0,75,200,0,0,0,0,0,0,0,
	/*BLACKSMITHING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*FLETCHING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*BREWING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*ALCOHOL_TOL*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,200,200,200,200,200,200,200,200,200,200,200,200,200,200,100,0,
	/*BEGGING*/ 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,0,200,200,200,200,200,200,200,200,200,200,200,200,200,200,100,0,
	/*JEWELRY_MAKING*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*POTTERY*/ 250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,0,
	/*PERCUSSION_INSTR*/ 0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,235,0,0,0,0,0,0,0,0,
	/*INTIMIDATION*/ 0,0,0,0,0,0,200,100,200,0,0,0,0,0,0,0,0,0,0,0,0,0,200,100,200,0,0,0,0,0,0,0,
	/*BERSERKING*/ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	/*TAUNT*/ 200,0,180,150,180,0,0,0,0,0,0,0,0,0,0,0,200,0,180,150,180,0,0,0,0,0,0,0,0,0,0,0 };