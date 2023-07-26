// appearance
static const unsigned int borderpx  = 1;
static const unsigned int gappx     = 8;
static const unsigned int snap      = 32;
static const int showbar            = 1;
static const int topbar             = 1;
static const int user_bh            = 16;

static const char normfgcolor[]      = "#c0caf5";
static const char normbgcolor[]      = "#1a1b26";
static const char normbordercolor[]  = "#1a1b26";
static const char selfgcolor[]       = "#1a1b26";
static const char selbgcolor[]       = "#bb9af7";
static const char selbordercolor[]   = "#ad8ee6";
static const char titlefgcolor[]     = "#cfc9c2";
static const char titlebgcolor[]     = "#1a1b26";
static const char titlebordercolor[] = "#1a1b26";

static const char *fonts[]          = {
    "Jetbrains Mono:size=10:antialias=true:autohint=true",
    "Source Han Sans JP:size=9",
    "siji:size=12:antialias=true:autohint=true"
};

static const char *colors[][3]       = {
        /*                fg            bg              border           */
        [SchemeNorm]  = { normfgcolor,  normbgcolor,    normbordercolor  },
        [SchemeSel]   = { selfgcolor,   selbgcolor,     selbordercolor   },
        [SchemeTitle] = { titlefgcolor, titlebgcolor,   titlebordercolor },
};


// high priority items
static const char dmenuhp[] = "telegram-desktop";


// tags
//static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const char *tags[] = { "一", "二", "三", "四", "五", "六", "七", "八", "九" };

static const Rule rules[] = {
    /* class      instance    title       tags mask     isfloating    monitor   float x,y,w,h         floatborderpx*/
    { "floating", "floating", NULL,       0,            1,           -1,        0,0,550,500,          0 },
    { "cmus",     "cmus",     NULL,       2 << 2,       0,           -1,        0,                    0 },
};


// layouts
static const float mfact     = 0.55;
static const int nmaster     = 1;
static const int resizehints = 1;
static const int lockfullscreen = 1;

static const Layout layouts[] = {
	/* symbol   arrange function */
	{ "",      tile },
	{ "",      NULL },
	{ "",      monocle },
	{ "",      bstack },
	{ "",      bstackhoriz },
	{ "",      magicgrid },
};

// key definitions
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
    { MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
    { MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }


// commands
static char dmenumon[2] = "0";

static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-hp", dmenuhp, "-p", "Run:",  NULL };
static const char *termcmd[]  = { "alacritty", NULL };

#include "movestack.c"
static const Key keys[] = {
    /* modifier                     key        function        argument */
    { MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
    { MODKEY,                       XK_Escape, spawn,          SHCMD("dmn_power") },
    { MODKEY,                       XK_s, 	   spawn,          SHCMD("dmn_scr") },
    { MODKEY,	                    XK_Return, spawn,          {.v = termcmd } },
    { MODKEY,                       XK_b,      togglebar,      {0} },
    { MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
    { MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
    { MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
    { MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
    { MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
    { MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
    { MODKEY|ShiftMask,             XK_j,      movestack,      {.i = +1 } },
    { MODKEY|ShiftMask,             XK_k,      movestack,      {.i = -1 } },
    { MODKEY,                       XK_z,      zoom,           {0} },
    { MODKEY,                       XK_Tab,    view,           {0} },
    { MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
    { MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
    { MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
    { MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
    { MODKEY,                       XK_u,      setlayout,      {.v = &layouts[3]} },
    { MODKEY,                       XK_o,      setlayout,      {.v = &layouts[4]} },
    { MODKEY,			            XK_g,	   setlayout,	   {.v = &layouts[5]} },
    { MODKEY,                       XK_space,  setlayout,      {0} },
    { MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
    { MODKEY,                       XK_0,      view,           {.ui = ~0 } },
    { MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
    { MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
    { MODKEY,                       XK_period, focusmon,       {.i = +1 } },
    { MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
    { MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
    TAGKEYS(                        XK_1,                      0)
    TAGKEYS(                        XK_2,                      1)
    TAGKEYS(                        XK_3,                      2)
    TAGKEYS(                        XK_4,                      3)
    TAGKEYS(                        XK_5,                      4)
    TAGKEYS(                        XK_6,                      5)
    TAGKEYS(                        XK_7,                      6)
    TAGKEYS(                        XK_8,                      7)
    TAGKEYS(                        XK_9,                      8)
    { MODKEY|ShiftMask,             XK_q,      quit,           {0} },
    { 0,                            XF86XK_AudioMute,          spawn, SHCMD("vol mute") },
    { 0,                            XF86XK_AudioLowerVolume,   spawn, SHCMD("vol down") },
    { 0,                            XF86XK_AudioRaiseVolume,   spawn, SHCMD("vol up") },
    { 0,                            XF86XK_MonBrightnessUp,    spawn, SHCMD("bri up") },
    { 0,                            XF86XK_MonBrightnessDown,  spawn, SHCMD("bri down") },
    { MODKEY|ShiftMask,             XK_t,      spawn,          SHCMD("cmus-remote -u") },
    { MODKEY|ShiftMask,             XK_n,      spawn,          SHCMD("cmus-remote -n") },
    { MODKEY|ShiftMask,             XK_r,      spawn,          SHCMD("cmus-remote -r") },
    { MODKEY|ShiftMask,             XK_m,      spawn,          SHCMD("alacritty --class 'cmus, cmus' -e cmus") },
    { ControlMask|ShiftMask,        XK_Return, spawn,          SHCMD("alacritty --working-directory \"$(xcwd)\"") },
};

// button definitions
static const Button buttons[] = {
    /* click                event mask      button          function        argument */
    { ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
    { ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
    { ClkWinTitle,          0,              Button2,        zoom,           {0} },
    { ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
    { ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
    { ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
    { ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
    { ClkTagBar,            0,              Button1,        view,           {0} },
    { ClkTagBar,            0,              Button3,        toggleview,     {0} },
    { ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
    { ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

