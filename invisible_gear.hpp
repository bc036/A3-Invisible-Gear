class cfgVehicles
{
	//Vanilla Backpacks
	class B_Kitbag_rgr;
	class bc036_invisible_kitbag: B_Kitbag_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Kitbag";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	class B_AssaultPack_rgr;
	class bc036_invisible_assaultpack: B_AssaultPack_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Assault Pack";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	class B_Bergen_dgtl_F;
	class bc036_invisible_bergen: B_Bergen_dgtl_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Bergen";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	class B_FieldPack_blk;
	class bc036_invisible_fieldpack: B_FieldPack_blk
	{
		author="bc036";
		scope=2;
		displayName="Invisible Field Pack";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	class B_TacticalPack_rgr;
	class bc036_invisible_tacticalpack: B_TacticalPack_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Tactical Pack";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	class B_Carryall_oli;
	class bc036_invisible_carryall: B_Carryall_oli
	{
		author="bc036";
		scope=2;
		displayName="Invisible Carryall";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	//Apex Backpacks
	class B_ViperHarness_blk_F;
	class bc036_invisible_viperharness: B_ViperHarness_blk_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Viper Harness";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
	class B_ViperLightHarness_blk_F;
	class bc036_invisible_viperlightharness: B_ViperLightHarness_blk_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Viper Light Harness";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
	};
};
class cfgWeapons
{
	//Vanilla Headgear
	class HeadgearItem;
	class H_HelmetSpecO_blk;
	class bc036_invisible_assassin: H_HelmetSpecO_blk
	{
		author="bc036";
		scope=2;
		displayName="Invisible Assassin Helmet";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=20;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=60;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
	//Apex Headgear
	class H_HelmetO_ViperSP_ghex_F;
	class bc036_invisible_special_purpose: H_HelmetO_ViperSP_ghex_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Special Purpose Helmet";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
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
	//Vanilla Vests
	class VestItem;
	class V_PlateCarrierGL_rgr;
	class bc036_invisible_carrier_gl: V_PlateCarrierGL_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Carrier GL Rig";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply140";
			mass=100;
			hiddenSelections[]={};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};
	class V_PlateCarrier1_rgr;
	class bc036_invisible_carrier_lite: V_PlateCarrier1_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Carrier Lite";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class V_PlateCarrier2_rgr;
	class bc036_invisible_carrier: V_PlateCarrier2_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Carrier Rig";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class V_PlateCarrierSpec_rgr;
	class bc036_invisible_carrier_special: V_PlateCarrierSpec_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Carrier Special Rig";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply100";
			mass=120;
			hiddenSelections[]=
			{
				"\bc036s_invisible_gear\Data\null_CA.paa";
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class V_Chestrig_rgr;
	class bc036_invisible_chestrig: V_Chestrig_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Chest Rig";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply140";
			mass=20;
			hiddenSelections[]={};
		};
	};
	class V_HarnessO_brn;
	class bc036_invisible_lbv: V_HarnessO_brn
	{
		author="bc036";
		scope=2;
		displayName="Invisible LBV Harness";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply160";
			mass=30;
		};
	};
	class V_BandollierB_oli;
	class bc036_invisible_bandollier: V_BandollierB_oli
	{
		author="bc036";
		scope=2;
		displayName="Invisible Slash Bandollier";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformModel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply80";
			mass=10;
		};
	};
	class V_TacVest_oli;
	class bc036_invisible_tacvest: V_TacVest_oli
	{
		author="bc036";
		scope=2;
		displayName="Invisible Tactical Vest";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	//Jets Vests
	class V_DeckCrew_blue_F;
	class bc036_invisible_deckcrew: V_DeckCrew_blue_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Deck Crew Vest";
		model="\bc036s_invisible_gear\Data\null.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_gear\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformModel="\bc036s_invisible_gear\Data\null.p3d";
			containerClass="Supply50";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
					passThrough=0.40000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.40000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.40000001;
				};
			};
		};
	};
};