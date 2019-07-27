class CfgPatches
{
	class bc036_Invisible_Gear
	{
		units[]=
		{
			//Vanilla Backpacks
			"bc036_invisible_kitbag",
			"bc036_invisible_assaultpack",
			"bc036_invisible_bergen",
			"bc036_invisible_fieldpack",
			"bc036_invisible_tacticalpack",
			"bc036_invisible_carryall",
			//Apex Backpacks
			"bc036_invisible_viperharness",
			"bc036_invisible_viperlightharness"
		};
		weapons[]=
		{
			//Vanilla Headgear
			"bc036_invisible_assassin",
			"bc036_invisible_combat",
			"bc036_invisible_crew",
			"bc036_invisible_defender",
			"bc036_invisible_enhanced_combat",
			"bc036_invisible_heli_crew",
			"bc036_invisible_heli_pilot",
			"bc036_invisible_light_combat",
			"bc036_invisible_pilot",
			"bc036_invisible_protector",
			//Vanilla Vests
			"bc036_invisible_carrier_gl",
			"bc036_invisible_carrier_lite",
			"bc036_invisible_carrier",
			"bc036_invisible_carrier_special",
			"bc036_invisible_chestrig",
			"bc036_invisible_lbv",
			"bc036_invisible_bandollier",
			"bc036_invisible_tacvest",
			//Apex Headgear
			"bc036_invisible_special_purpose",
			"bc036_invisible_stealth_combat",
			//Jets Vests
			"bc036_invisible_deckcrew"
		};
		author="bc036";
		icon="\bc036s_invisible_gear\Data\bc036.paa";
		requiredAddons[]=
		{
			//Vanilla
			"A3_Characters_F";
			"A3_Weapons_F";
			//Apex
			"A3_Characters_F_Exp_Headgear";
			//Jets
			"A3_Characters_F_Jets_Vests";
		};
		version=1.0;
		requiredVersion=1.0;
	};
};
#include "invisible_gear.hpp"