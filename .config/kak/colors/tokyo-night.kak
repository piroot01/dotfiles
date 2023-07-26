# Color palette
declare-option str black default
declare-option str darkdark 'rgb:24283b'
declare-option str dark 'rgb:414868'
declare-option str gray 'rgb:565f89'
declare-option str white 'rgb:c0caf5'
declare-option str lightyellow 'rgb:cfc9c2'
declare-option str verylightgray 'rgb:a9b1d6'
declare-option str lightgray 'rgb:9aa5ce'
declare-option str blue 'rgb:7aa2f7'
declare-option str lightblue 'rgb:7dcfff'
declare-option str turqoise 'rgb:2ac3de'
declare-option str verylightblue 'rgb:b4f9f8'
declare-option str cyan 'rgb:73daca'
declare-option str green 'rgb:9ece6a'
declare-option str lightorange 'rgb:e0af68'
declare-option str orange 'rgb:ff9e64'
declare-option str red 'rgb:f7768e'
declare-option str magenta 'rgb:bb9af7'
declare-option str lightorange 'rgb:e0af68'

declare-option str background %opt{black}
declare-option str psel 'rgba:24283b80'
declare-option str ssel 'rgba:3c3c5080'
declare-option str dimmed_background %opt{gray}
declare-option str foreground %opt{white}


# For code
set-face global attribute "%opt{magenta}"
set-face global meta "%opt{magenta}"
set-face global builtin "%opt{red}"
set-face global header "%opt{white}+b"
set-face global module "%opt{green}"
set-face global namespace "%opt{white}+b"
set-face global type "%opt{magenta}"
set-face global class "%opt{verylightgray}"
set-face global enum "%opt{verylightgray}"
set-face global struct "%opt{verylightgray}"
set-face global parameter "%opt{lightorange}"
set-face global typeParameter "%opt{lightorange}"
set-face global variable "%opt{blue}"
set-face global value "%opt{lightorange}"
set-face global property "%opt{white}"
set-face global enumMember "%opt{blue}"
set-face global event "%opt{blue}"
set-face global function "%opt{blue}"
set-face global method "%opt{blue}"
set-face global macro "%opt{blue}"
set-face global keyword "%opt{magenta}"
set-face global comment "%opt{gray}+i"
set-face global string "%opt{green}"
set-face global number "%opt{lightorange}"
set-face global regexp "%opt{verylightblue}"
set-face global operator "%opt{lightblue}"


# For markup
set-face global title "%opt{red}"
set-face global header "%opt{orange}"
set-face global bold "%opt{red}"
set-face global italic "%opt{magenta}"
set-face global mono "%opt{green}"
set-face global block "%opt{cyan}"
set-face global link "%opt{green}"
set-face global bullet "%opt{green}"
set-face global list "%opt{white}"


# Builtin faces
set-face global Default "%opt{white},%opt{black}"


# set-face global Default default,default
set-face global PrimarySelection "default,%opt{psel}"
set-face global SecondarySelection "default,%opt{ssel}"
set-face global PrimaryCursor "%opt{darkdark},%opt{white}+b"
set-face global SecondaryCursor "%opt{darkdark},%opt{white}+b"
set-face global PrimaryCursorEol "%opt{darkdark},%opt{white}+b"
set-face global SecondaryCursorEol "%opt{darkdark},%opt{white}+b"
set-face global LineNumbers "%opt{gray},%opt{black}"
set-face global LineNumberCursor "%opt{verylightgray},%opt{black}+b"
set-face global LineNumbersWrapped "%opt{gray},%opt{black}+i"
set-face global MenuForeground "%opt{darkdark},%opt{white}+b"
set-face global MenuBackground "%opt{white},%opt{darkdark}"
set-face global MenuInfo "%opt{orange},%opt{darkdark}"
set-face global Information "%opt{white},%opt{black}"
set-face global Error "%opt{red},%opt{black}"
set-face global StatusLine "%opt{white},%opt{black}"
set-face global StatusLineMode "%opt{green},%opt{black}"
set-face global StatusLineInfo "%opt{magenta},%opt{black}"
set-face global StatusLineValue "%opt{orange},%opt{black}"
set-face global StatusCursor "%opt{white},%opt{blue}"
set-face global Prompt "%opt{green},%opt{black}"
set-face global MatchingChar "%opt{white},%opt{darkdark}+b"
set-face global Whitespace "%opt{gray},%opt{black}+f"
set-face global WrapMarker Whitespace
set-face global BufferPadding "%opt{gray},%opt{black}"


# additional highlighters
add-highlighter global/ regex \b(TODO|FIXME|NOTE)\b 0:+rb
add-highlighter global/ regex (=|!) "0:%opt{lightblue}"
add-highlighter global/ regex (<=|>=|>|<|!=|\||&|\^) "0:%opt{magenta}"
add-highlighter global/ regex (<<=|>>=|->|<-|\+|-|\*|/|%|\;|~|,|:|\^=|&=|\|=|<<|>>) "0:%opt{lightblue}"


try %{ set-option global rainbow_colors "%opt{blue}" "%opt{lightblue}" "%opt{magenta}" "%opt{turqoise}" "%opt{green}" "%opt{orange}"}

