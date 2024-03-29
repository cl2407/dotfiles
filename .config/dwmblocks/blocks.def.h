//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"󰃭  ", "date '+%b %d (%a)'",					5,		0},
	{"", "~/.local/bin/battery",					5,		0},
	{"  ", "date '+%R'",					5,		0},
	{"", "~/.local/bin/wificonnection",					60,		0},
	{"", "~/.local/bin/blueconnection",					60,		0},
	{"", "~/.local/bin/musicplayin",					10,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
