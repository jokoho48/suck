#include "CfgMods.cpp"

class CfgPatches
{
	class dcd_suck_compat_rhs_gref
	{
		author="DCD";
		name="dcd_suck_compat_rhs_gref";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"dcd_suck",
			"rhs_main",
			"rhsgref_c_weapons",
			"rhsgref_weapons",
		};
		filename = "dcd_suck_compat_rhs_gref.pbo";
    versionDesc = "SUCK";
    versionAct = "";
    version = "1.0.02";
    versionStr = "1.0.02";
    versionAr[] = {1,0,2};
	};
};

class CfgFunctions {
	#include "functions\CfgFunctions.cpp"
};

#include "CfgWeapons.cpp"
