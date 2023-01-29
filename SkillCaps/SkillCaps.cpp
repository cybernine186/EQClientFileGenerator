// EQSkills.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SkillCaps.h"

FILE* stream;

int main()
{	
	freopen_s(&stream, "SkillCaps.txt", "w", stdout);

	for (int i_class = 1; i_class <= PLAYER_CLASS_COUNT; i_class++)
	{
		for (int i_skill = 0; i_skill <= 73; i_skill++)
		{
			if (maxSkillsBeyond50[i_skill][i_class -1] > 0)
			{
				for (int i_level = 1; i_level <= 100; i_level++)
				{
					std::cout << i_class << "^" << i_skill << "^" << i_level << "^" << CheckMaxSkill(i_skill, i_class, i_level) << "^0\n";
				}
			}
		}
	}
	
}

int CheckMaxSkill(int skillid, int eqclass, int level)
{
	int levelRequired = 1;
	// Special checks for NPCs
	//if ((level <= 40 || (eqclass == BARD && level <= 58)))
	//{
		
		switch (skillid)
		{
		case KICK:
		{
			switch (eqclass)
			{
			case RANGER:
			case BEASTLORD:
				levelRequired = 5;
				break;
			}
			break;
		}
		case INTIMIDATION:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 26;
				break;
			case MONK:
				levelRequired = 18;
				break;
			case ROGUE:
				levelRequired = 22;
				break;
			}
			break;
		}
		case SINGING:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 20;
				break;
			}
			break;
		}
		case PERCUSSION_INSTRUMENTS:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 5;
				break;
			}
			break;
		}
		case STRINGED_INSTRUMENTS:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 8;
				break;
			}
			break;
		}
		case BRASS_INSTRUMENTS:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 11;
				break;
			}
			break;
		}
		case WIND_INSTRUMENTS:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 14;
				break;
			}
			break;
		}
		case MAKE_POISON:
		{
			switch (eqclass)
			{
			case ROGUE:
				levelRequired = 20;
				break;
			}
			break;
		}
		case BACKSTAB:
		{
			switch (eqclass)
			{
			case ROGUE:
				levelRequired = 10;
				break;
			}
			break;
		}
		case APPLY_POISON:
		{
			switch (eqclass)
			{
			case ROGUE:
				levelRequired = 18;
				break;
			}
			break;
		}
		case TRACKING:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 35;
				break;
			case DRUID:
				levelRequired = 20;
				break;
			}
			break;
		}
		case PICK_POCKETS:
		{
			switch (eqclass)
			{
			case ROGUE:
				levelRequired = 6;
				break;
			}
			break;
		}
		case PICK_LOCK:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 40;
				break;
			case ROGUE:
				levelRequired = 6;
				break;
			}
			break;
		}
		case DISARM_TRAPS:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 30;
				break;
			case ROGUE:
				levelRequired = 21;
				break;
			}
			break;
		}
		case FORAGE:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 12;
				break;
			case RANGER:
				levelRequired = 3;
				break;
			case DRUID:
				levelRequired = 5;
				break;
			}
			break;
		}
		case SENSE_TRAPS:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 20;
				break;
			case ROGUE:
				levelRequired = 10;
				break;
			}
			break;
		}
		case SAFE_FALL:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 24;
				break;
			case ROGUE:
				levelRequired = 12;
				break;
			case MONK:
				levelRequired = 3;
				break;
			}
			break;
		}
		case SNEAK:
		{
			switch (eqclass)
			{
			case BARD:
				levelRequired = 17;
				break;
			case RANGER:
				levelRequired = 10;
				break;
			case MONK:
				levelRequired = 8;
				break;
			}
			break;
		}
		case RESEARCH:
		{
			switch (eqclass)
			{
			case WIZARD:
			case NECROMANCER:
			case ENCHANTER:
			case MAGICIAN:
				levelRequired = 16;
				break;
			}
			break;
		}
		case HIDE:
		{
			switch (eqclass)
			{
			case ROGUE:
				levelRequired = 3;
				break;
			case BARD:
			case RANGER:
				levelRequired = 25;
				break;
			case SHADOWKNIGHT:
				levelRequired = 35;
				break;
			}
			break;
		}
		case ABJURE:
		case ALTERATION:
		case CHANNELING:
		case CONJURATION:
		case DIVINATION:
		case EVOCATION:
		{
			switch (eqclass)
			{
			case RANGER:
			case SHADOWKNIGHT:
			case PALADIN:
			case BEASTLORD:
				levelRequired = 9;
				break;
			}
			break;
		}
		case MEDITATE:
		{
			switch (eqclass)
			{
			case SHAMAN:
			case DRUID:
			case CLERIC:
				levelRequired = 8;
				break;
			case WIZARD:
			case NECROMANCER:
			case ENCHANTER:
			case MAGICIAN:
				levelRequired = 4;
				break;
			case PALADIN:
			case SHADOWKNIGHT:
			case BEASTLORD:
				levelRequired = 12;
				break;
			case RANGER:
				levelRequired = 11;
				break;
			}
			break;
		}
		case ALCHEMY:
		{
			switch (eqclass)
			{
			case SHAMAN:
				levelRequired = 25;
				break;
			}
			break;
		}
		case SPECIALIZE_ABJURE:
		case SPECIALIZE_ALTERATION:
		case SPECIALIZE_CONJURATION:
		case SPECIALIZE_DIVINATION:
		case SPECIALIZE_EVOCATION:
		{
			switch (eqclass)
			{
			case SHAMAN:
			case DRUID:
			case CLERIC:
				levelRequired = 30;
				break;
			case WIZARD:
			case NECROMANCER:
			case ENCHANTER:
			case MAGICIAN:
				levelRequired = 20;
				break;
			}
			break;
		}
		case BASH:
		{
			switch (eqclass)
			{
			case WARRIOR: 
			case PALADIN: 
			case SHADOWKNIGHT: 
				levelRequired = 6;
				break;
			case CLERIC:
				levelRequired = 15;
				break;
			}
			break;
		}
		case DODGE:
		{
			switch (eqclass)
			{
			case WARRIOR: 
				levelRequired = 6;
				break;
			case CLERIC: 
			case DRUID: 
			case SHAMAN: 
				levelRequired = 15;
				break;
			case RANGER: 
				levelRequired = 8;
				break;
			case ROGUE: 
				levelRequired = 4;
				break;
			case PALADIN:
			case SHADOWKNIGHT: 
			case BARD:
			case BEASTLORD:
				levelRequired = 10;
				break;
			case NECROMANCER: 
			case WIZARD: 
			case ENCHANTER: 
			case MAGICIAN: 
				levelRequired = 22;
				break;
			}
			break;
		}
		case PARRY:
		{
			switch (eqclass)
			{
			case WARRIOR: 
				levelRequired = 10;
				break;
			case PALADIN: 
			case SHADOWKNIGHT: 
				levelRequired = 17;
				break;
			case RANGER: 
				levelRequired = 18;
				break;
			case ROGUE: 
				levelRequired = 12;
				break;
			case BARD: 
				levelRequired = 53;
				break;
			}
			break;
		}
		case DUAL_WIELD:
		{
			switch (eqclass)
			{
			case WARRIOR: 
			case ROGUE: 
				levelRequired = 13;
				break;
			case RANGER: 
			case BARD: 
			case BEASTLORD:
				levelRequired = 17;
				break;
			}
			break;
		}
		case DOUBLE_ATTACK:
		{
			switch (eqclass)
			{
			case WARRIOR: 
			case MONK: 
				levelRequired = 15;
				break;
			case PALADIN: 
			case SHADOWKNIGHT: 
			case RANGER: 
				levelRequired = 20;
				break;
			case ROGUE: 
				levelRequired = 16;
				break;
			}
			break;
		}
		case RIPOSTE:
		{
			switch (eqclass)
			{
			case WARRIOR: 
				levelRequired = 25;
				break;
			case RANGER: 
			case MONK: 
				levelRequired = 35;
				break;
			case PALADIN: 
			case SHADOWKNIGHT: 
			case ROGUE: 
				levelRequired = 30;
				break;
			case BEASTLORD:
				levelRequired = 40;
				break;
			case BARD: 
				levelRequired = 58;
				break;
			}
			break;
		}
		case DISARM:
		{
			switch (eqclass)
			{
			case WARRIOR: 
			case RANGER: 
				levelRequired = 35;
				break;
			case PALADIN: 
			case SHADOWKNIGHT: 
				levelRequired = 40;
				break;
			case MONK: 
			case ROGUE: 
				levelRequired = 27;
				break;
			}
			break;
		}
		case BLOCKSKILL:
		{
			switch (eqclass) {
			case MONK:
				levelRequired = 12;
				break;
			case BEASTLORD:
				levelRequired = 25;
				break;
			}
			break;
		}
		case ROUND_KICK:
		{
			if (eqclass == MONK)
				levelRequired = 5;
			break;
		}
		case TIGER_CLAW:
		{
			if (eqclass == MONK)
				levelRequired = 10;
			break;
		}
		case EAGLE_STRIKE:
		{
			if (eqclass == MONK)
				levelRequired = 20;
			break;
		}
		case DRAGON_PUNCH:
		{
			if (eqclass == MONK)
				levelRequired = 25;
			break;
		}
		case FLYING_KICK:
		{
			if (eqclass == MONK)
				levelRequired = 30;
			break;
		}
		case FEIGN_DEATH:
		{
			if (eqclass == MONK)
				levelRequired = 17;
			break;
		}
		}

		if (levelRequired > level)
		{
			return 0;
		}

	//}

	// Next, special check for trade skills to make sure only one skill is above 200
	// Note: There is no level requirement for trade skills. A level 1 can get 200+ in any trade skill
	if ((skillid == BLACKSMITHING ||
		skillid == BREWING ||
		skillid == BAKING ||
		skillid == FLETCHING ||
		skillid == JEWELRY_MAKING ||
		skillid == POTTERY ||
		skillid == TAILORING))
	{
		return 250;
	}

	// Tinkering Skills for Gnomes only start at level 16
	if (skillid == TINKERING && (eqclass == CLERIC || 
								eqclass == ENCHANTER ||
								eqclass == MAGICIAN ||
								eqclass == NECROMANCER ||
								eqclass == ROGUE ||
								eqclass == WARRIOR ||
								eqclass == WIZARD))
	{
		if (level >= 16)
		{
			return 250;
		}
		else {
			return 0;
		}
	}


	// Now that we have determined the skill is not an innate ability or a trade skill, find the maximum value for this character
	int levelSkillCap = 0;
	int maximumSkillCap = 0;
	// Grant merchants and bankers the warrior skill set
	if (eqclass == MERCHANT || eqclass == BANKER)
		eqclass = WARRIOR;

	// Mob is level 50 and under
	if (level <= 50) {

		levelSkillCap = (int)level * 5 + 5;
		maximumSkillCap = maxSkills[skillid][eqclass - 1];
	}
	// Mob is level 60 and under
	else if (level <= 60) {
		float gap = ((int)level - 50) * 5;
		maximumSkillCap = maxSkillsBeyond50[skillid][eqclass - 1];
		levelSkillCap = maxSkills[skillid][eqclass - 1] + gap;
		// This skill has more than 50 potential points between 50 and 60
		if ((maximumSkillCap - maxSkills[skillid][eqclass - 1]) > 50)
		{
			gap = (float)((float)(maximumSkillCap - maxSkills[skillid][eqclass - 1]) / 10.00) * ((int)level - 50);
			levelSkillCap = maxSkills[skillid][eqclass - 1] + gap;
		}
	}
	else if (level >60)
	{
		maximumSkillCap = maxSkillsBeyond50[skillid][eqclass - 1];
		levelSkillCap = maxSkillsBeyond50[skillid][eqclass - 1];
	}
	// Mob is over level 60
	//else {
	//	if (maxSkillsBeyond50[skillid][eqclass - 1] > 0)
	//		return maxSkillsBeyond50[skillid][eqclass - 1] + (((int)level - 60) * 5);
	//	else
	//		return 0;
	//}

	// Level formula exceeds the class maximum
	if (levelSkillCap >= maximumSkillCap)
		return maximumSkillCap;

	return levelSkillCap;
}