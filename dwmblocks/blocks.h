//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    //{" 🐧 ", "~/local/bin/bar/kernel",		    360,		        2},

	//{" 🔺 ", "~/local/bin/bar/upt",		        60,		            2},

	//{" 📦 ", "~/local/bin/bar/pacupdate",		360,		        9},

	{" 󰍛 ", "~/local/bin/bar/memory",	        6,		            1},
	
	{" 󰻠 ", "~/local/bin/bar/cpu",	        6,		            1},

	{" 󰕾 ", "~/local/bin/bar/volume",			2,		            10},

	{" 󱑌 ", "~/local/bin/bar/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
