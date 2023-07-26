static const Block blocks[] = {
	/*Icon*/	/*Command*/		                                    /*Update Interval*/	    /*Update Signal*/
    { "",       "~/.config/suckless/dwmblocks/blocks/removable",    5,                      0},

    { "",       "~/.config/suckless/dwmblocks/blocks/player",       2,                      0},

    { "",       "~/.config/suckless/dwmblocks/blocks/cpu_temp",     5,                      0},

    { "",       "~/.config/suckless/dwmblocks/blocks/cpu_usage",    2,                      0},

    { "",       "~/.config/suckless/dwmblocks/blocks/memory",       10,                     0},

    { "",       "~/.config/suckless/dwmblocks/blocks/net",          10,                     0},

    { "",       "~/.config/suckless/dwmblocks/blocks/battery",      5,                      0},

    { "",       "~/.config/suckless/dwmblocks/blocks/backlight",    0,                      11},

    { "",       "~/.config/suckless/dwmblocks/blocks/volume",       0,                      10},

    { "",       "~/.config/suckless/dwmblocks/blocks/layout",       1,                      0},

    { "",       "~/.config/suckless/dwmblocks/blocks/date",         60,                     0},

    { "",       "~/.config/suckless/dwmblocks/blocks/time",         60,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
