class cfgWeapons
{
	//Vanilla
	class HeadgearItem;
	class H_HelmetSpecO_blk;
	class bc036_invisible_assassin: H_HelmetSpecO_blk
	{
		author="bc036";
		scope=2;
		displayName="Invisible Assassin Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetB;
	class bc036_invisible_combat: H_HelmetB
	{
		author="bc036";
		scope=2;
		displayName="Invisible Combat Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetCrew_B;
	class bc036_invisible_crew: H_HelmetCrew_B
	{
		author="bc036";
		scope=2;
		displayName="Invisible Crew Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetLeaderO_ocamo;
	class bc036_invisible_defender: H_HelmetLeaderO_ocamo
	{
		author="bc036";
		scope=2;
		displayName="Invisible Defender Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetSpecB;
	class bc036_invisible_enhanced_combat: H_HelmetSpecB
	{
		author="bc036";
		scope=2;
		displayName="Invisible Enhanced Combat Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class H_CrewHelmetHeli_B;
	class bc036_invisible_heli_crew: H_CrewHelmetHeli_B
	{
		author="bc036";
		scope=2;
		displayName="Invisible Heli Crew Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	class H_PilotHelmetHeli_B;
	class bc036_invisible_heli_pilot: H_PilotHelmetHeli_B
	{
		author="bc036";
		scope=2;
		displayName="Invisible Heli Pilot Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetB_light;
	class bc036_invisible_light_combat: H_HelmetB_light
	{
		author="bc036";
		scope=2;
		displayName="Invisible Light Combat Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	class H_PilotHelmetFighter_B;
	class bc036_invisible_pilot: H_PilotHelmetFighter_B
	{
		author="bc036";
		scope=2;
		displayName="Invisible Pilot Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetO_ocamo;
	class bc036_invisible_protector: H_HelmetO_ocamo
	{
		author="bc036";
		scope=2;
		displayName="Invisible Protector Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};
	//Apex
	class H_HelmetO_ViperSP_ghex_F;
	class bc036_invisible_special_purpose: H_HelmetO_ViperSP_ghex_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Special Purpose Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=8;
					passThrough=0.5;
				};
			};
		};
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
	};
	class H_HelmetB_TI_tna_F;
	class bc036_invisible_stealth_combat: H_HelmetB_TI_tna_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Stealth Combat Helmet";
		model="\bc036s_invisible_headgear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_headgear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_headgear\Data\null.p3d";
			modelSides[]=
			{
				"TCivilian",
				"TWest",
				"TEast"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
};