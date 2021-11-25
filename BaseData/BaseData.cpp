// BaseData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BaseData.h"

FILE* stream;

int main()
{
	freopen_s(&stream, "BaseData.txt", "w", stdout);

	for (int i_level = 1; i_level <= 100; i_level++)
	{
		for (int i_class = 1; i_class <= 16; i_class++)
		{
			std::cout << i_level << "^" << i_class << "^" << CalcBaseHP(i_level, i_class) << "^" << CalcMana(i_level, i_class) << "^" << CalcEnd(i_level, i_class) << "^" << Unk1(i_level) << "^" << Unk2(i_level) << "^" << CalcHPFactor(i_level, i_class) << "^" << CalcManaFactor(i_level, i_class) << "^" << CalcEndFactor(i_level, i_class) <<  "\n";
		}
	}
}

double CalcManaFactor(int level, int eqclass)
{
	double i_mana = 0.0;
	double i_level = 1.0 * level;
	switch (eqclass)
	{
		case WARRIOR:
		case MONK:
		case ROGUE:
			i_mana = 0;
			break;
		case RANGER:
		case SHADOWKNIGHT:
		case PALADIN:
			i_mana = 1.5 * i_level / 40;
			break;
		default:
			i_mana = 3 * i_level / 40;
			break;
	}

	return i_mana;
}

double CalcHPFactor(int level, int eqclass)
{
	double factor = 0.0;
	double i_level = 1.0 * level;

	switch (eqclass)
	{
	case CLERIC:
	case DRUID:
	case SHAMAN:
		if(level > 50)
			factor = 3.0;
		else
			factor = 2.5;
		break;
	case RANGER:
		if (level > 50)
			factor = 4.2;
		else
			factor = 3.3;
		break;
	case MONK:
	case BARD:
	case ROGUE:
		if (level > 50)
			factor = 4.0;
		else
			factor = 3.0;
		break;
	case SHADOWKNIGHT:
	case PALADIN:
		if (level > 50)
			factor = 5.2;
		else
			factor = 3.8;
		break;
	case WARRIOR:
		if (level > 50)
			factor = 6.0;
		else
			factor = 4.5;
		break;
	case ENCHANTER:
	case MAGICIAN:
	case NECROMANCER:
	case WIZARD:
		if (level > 50)
			factor = 2.4;
		else
			factor = 2.0;
		break;
	default:
		if (level > 50)
			factor = 3.5;
		else
			factor = 3;
		break;
	}
	return factor * i_level / 40;
}
/*
My Original calculations
double CalcHPFactor(int level, int eqclass)
{
	double i_mana = 0.0;
	double i_level = 1.0 * level;

	switch (eqclass)
	{
	case CLERIC:
		i_mana = 1 * i_level / 40;
		break;
	case DRUID:
	case SHAMAN:
		i_mana = 2 * i_level / 40;
		break;
	case RANGER:
		i_mana = 2.6 * i_level / 40;
		break;
	case MONK:
	case BARD:
	case ROGUE:
		i_mana = 2.4 * i_level / 40;
		break;
	case SHADOWKNIGHT:
	case PALADIN:
		i_mana = 3 * i_level / 40;
		break;
	case WARRIOR:
		i_mana = 3.6 * i_level / 40;
		break;
	default:
		i_mana = 3 * i_level / 40;
		break;
	}
	return i_mana;
}
*/

int Unk1(int level)
{
	int base = 1;
	int value, modifier;

	if (level <= 10)
	{
		modifier = 1;
	}
	else if (level >= 11 && level < 20)
	{
		modifier = 2;
	}
	else if (level >= 20 && level < 30)
	{
		modifier = 3;
	}
	else if (level >= 30 && level < 40)
	{
		modifier = 4;
	}
	else if (level >= 40 && level < 50)
	{
		modifier = 5;
	}
	else if (level >= 50 && level < 60)
	{
		modifier = 6;
	}
	else if (level >= 60 && level < 70)
	{
		modifier = 7;
	}
	else if (level >= 70 && level < 85)
	{
		modifier = 8;
	}
	else if (level >= 85 && level < 90)
	{
		modifier = 9;
	}
	else if (level >= 90)
	{
		modifier = 10;
	}

	value = base + modifier;

	return value;
}

int Unk2(int level)
{
	int base = 4;
	int value, modifier;

	if (level < 20)
	{
		modifier = 1;
	}
	else if (level >= 20 && level <= 40)
	{
		modifier = 2;
	}
	else if (level >= 40 && level <= 60)
	{
		modifier = 3;
	}
	else if (level >= 60 && level <= 80)
	{
		modifier = 4;
	}
	else if (level >= 80 && level <= 100)
	{
		modifier = 5;
	}

	value = base + modifier;

	return value;
}

double CalcEndFactor(int level, int eqclass)
{
	double mana = 0.0;
	double i_level = 1.0 * level;
	switch (GetCasterClass(eqclass))
	{
	case 'W':
		mana = 3 * i_level / 40;
		break;
	case 'I':
		mana = 3 * i_level / 40;
		break;
	case 'N':
		mana = 3 * i_level / 40;
		break;
	}

	return mana;
}

int CalcMana(int level, int eqclass)
{
	int mana = 0;
	int factor = 15;

	switch (GetCasterClass(eqclass))
	{
	case 'W':
		mana = level * factor;
		if (level > 40)
		{
			mana += ((level - 40) * 15);
		}
		break;
	case 'I':
		mana = level * factor;
		if (level > 40)
		{
			mana += ((level - 40) * 15);
		}
		break;
	case 'N':
		mana = 0;
		break;
	}



	return mana;
}

int CalcEnd(int level, int eqclass)
{
	int end;
	int factor;

	end = level * 15;

	if (level > 40)
	{
		end += ((level - 40) * 15);
	}

	return end;
}

char GetCasterClass(int eqclass)
{
	switch (eqclass)
	{
	case CLERIC:
	case PALADIN:
	case RANGER:
	case DRUID:
	case SHAMAN:
	case BEASTLORD:
	case CLERICGM:
	case PALADINGM:
	case RANGERGM:
	case DRUIDGM:
	case SHAMANGM:
		return 'W';
		break;

	case SHADOWKNIGHT:
	case BARD:
	case NECROMANCER:
	case WIZARD:
	case MAGICIAN:
	case ENCHANTER:
	case SHADOWKNIGHTGM:
	case BARDGM:
	case NECROMANCERGM:
	case WIZARDGM:
	case MAGICIANGM:
	case ENCHANTERGM:
		return 'I';
		break;

	default:
		return 'N';
		break;
	}
}

int CalcBaseHP(int level, int eqclass)
{
	int base_hp;
	int lm = GetClassLevelFactor(level, eqclass);
	base_hp = (level * lm / 10);

	return base_hp;
}

int GetClassLevelFactor(int mlevel, int eqclass)
{
	int multiplier = 0;
	switch (eqclass) {
	case WARRIOR: {
		if (mlevel < 20) {
			multiplier = 220;
		}
		else if (mlevel < 30) {
			multiplier = 230;
		}
		else if (mlevel < 40) {
			multiplier = 250;
		}
		else if (mlevel < 53) {
			multiplier = 270;
		}
		else if (mlevel < 57) {
			multiplier = 280;
		}
		else if (mlevel < 60) {
			multiplier = 290;
		}
		else if (mlevel < 70) {
			multiplier = 300;
		}
		else {
			multiplier = 311;
		}
		break;
	}
	case DRUID:
	case CLERIC:
	case SHAMAN: {
		if (mlevel < 70) {
			multiplier = 150;
		}
		else {
			multiplier = 157;
		}
		break;
	}
	case BERSERKER:
	case PALADIN:
	case SHADOWKNIGHT: {
		if (mlevel < 35) {
			multiplier = 210;
		}
		else if (mlevel < 45) {
			multiplier = 220;
		}
		else if (mlevel < 51) {
			multiplier = 230;
		}
		else if (mlevel < 56) {
			multiplier = 240;
		}
		else if (mlevel < 60) {
			multiplier = 250;
		}
		else if (mlevel < 68) {
			multiplier = 260;
		}
		else {
			multiplier = 270;
		}
		break;
	}
	case MONK:
	case BARD:
	case ROGUE:
	case BEASTLORD: {
		if (mlevel < 51) {
			multiplier = 180;
		}
		else if (mlevel < 58) {
			multiplier = 190;
		}
		else if (mlevel < 70) {
			multiplier = 200;
		}
		else {
			multiplier = 210;
		}
		break;
	}
	case RANGER: {
		if (mlevel < 58) {
			multiplier = 200;
		}
		else if (mlevel < 70) {
			multiplier = 210;
		}
		else {
			multiplier = 220;
		}
		break;
	}
	case MAGICIAN:
	case WIZARD:
	case NECROMANCER:
	case ENCHANTER: {
		if (mlevel < 70) {
			multiplier = 120;
		}
		else {
			multiplier = 127;
		}
		break;
	}
	default: {
		if (mlevel < 35) {
			multiplier = 210;
		}
		else if (mlevel < 45) {
			multiplier = 220;
		}
		else if (mlevel < 51) {
			multiplier = 230;
		}
		else if (mlevel < 56) {
			multiplier = 240;
		}
		else if (mlevel < 60) {
			multiplier = 250;
		}
		else {
			multiplier = 260;
		}
		break;
	}
	}

	return multiplier;
}