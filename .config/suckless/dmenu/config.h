static int topbar = 1;

static const char *fonts[] = {
	"Jetbrains Mono:size=10"
};


static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
    /*              fg         bg       */
    [SchemeNorm] = { "#cfc9c2", "#1a1b26" },
    [SchemeSel] =  { "#1a1b26", "#f7768e" },
    [SchemeSelHighlight] = { "#1a1b26", "#cfc9c2" },
    [SchemeNormHighlight] = { "#f7768e", "#1a1b26" },
//  [SchemeOutHighlight] = { "#ffc978", "#00ffff" },
    [SchemeOut] = { "#cfc9c2", "#1a1b26" },
    [SchemeHp] = { "#cfc9c2", "#1a1b26" }
};


static unsigned int lines = 0;
static unsigned int lineheight = 14;
static unsigned int min_lineheight = 14;
static const char worddelimiters[] = " ";
