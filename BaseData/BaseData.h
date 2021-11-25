#pragma once

int GetClassLevelFactor(int level, int eqclass);
int CalcBaseHP(int level, int eqclass);
char GetCasterClass(int eqclass);
double CalcHPFactor(int level, int eqclass);
double CalcManaFactor(int level, int eqclass);
double CalcEndFactor(int level, int eqclass);
int CalcMana(int level, int eqclass);
int CalcEnd(int level, int eqclass);
int CalcHPRegen(int level);
double CalcEndRegen(int level);

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
#define BEASTLORD	15
#define BERSERKER	16
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


