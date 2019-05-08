class CfgPatches
{
    class MyPrefix_MyMod_Scripts
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data", "MyPrefix_MyMod_GUI"
        };
    };
};

class CfgMods
{
	class MyPrefix_MyMod
	{
		dir = "MyPrefix/MyMod";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Example";
		credits = "Jacob_Mango, Arkensor";
		creditsJson = "MyPrefix/MyMod/Scripts/Data/Credits.json";
		author = "Jacob_Mango, Arkensor";
		authorID = "0"; 
		version = "0.1"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"MyPrefix/MyMod/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"MyPrefix/MyMod/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"MyPrefix/MyMod/Scripts/5_Mission"};
			};
		};
	};
};