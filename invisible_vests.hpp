class cfgWeapons
{
	//Vanilla
	class VestItem;
	class V_PlateCarrierGL_rgr;
	class bc036_invisible_carrier_gl: V_PlateCarrierGL_rgr
	{
		author="bc036";
		scope=2;
		displayName="Invisible Carrier GL Rig";
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
			containerClass="Supply100";
			mass=120;
			hiddenSelections[]=
			{
				"\bc036s_invisible_vests\Data\null_CA.paa";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformModel="\bc036s_invisible_vests\Data\null.p3d";
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
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\bc036s_invisible_vests\Data\null.p3d";
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
	class V_RebreatherB;
	class bc036_invisible_rebreather : V_RebreatherB
	{
		author = "bc036";
		scope = 2;
		displayName = "Invsible Rebreather";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		model = "\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[] =
		{
			"\bc036s_invisible_vests\Data\null_CA.paa"
		};
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo : VestItem
		{
			uniformModel = "\bc036s_invisible_vests\Data\null.p3d";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	//Jets
	class V_DeckCrew_blue_F;
	class bc036_invisible_deckcrew: V_DeckCrew_blue_F
	{
		author="bc036";
		scope=2;
		displayName="Invisible Deck Crew Vest";
		model="\bc036s_invisible_vests\Data\null.p3d";
		modelSides[] = { 0,1,2,3 }; //OPF_F=0, BLU_F=1, IND_F=2
		hiddenSelectionsTextures[]=
		{
			"\bc036s_invisible_vests\Data\null_CA.paa";
		};
		class ItemInfo: VestItem
		{
			uniformModel="\bc036s_invisible_vests\Data\null.p3d";
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