#
# /home/tomas/.zprofile
#

# Paths

export PATH=$(du "$HOME/.local/bin" | cut -f2 | tr '\n' ':' | sed 's/:*$//'):$PATH

# Variables

export VISUAL="nvim"
export EDITOR="nvim"
export TERMINAL="st"
export PAGER="less"
export BROWSER="firefox"

# XDG base directories

export XDG_CONFIG_HOME="$HOME/.config"
export XDG_DATA_HOME="$HOME/.local/share"
export XDG_CACHE_HOME="$HOME/.cache"
export ZDOTDIR="$XDG_CONFIG_HOME/zsh"
export HISTFILE="$XDG_DATA_HOME/history"
export GTK2_RC_FILES="$XDG_CONFIG_HOME/gtk-2.0/gtkrc-2.0"
export TERMINFO="$XDG_DATA_HOME/terminfo"
export GNUPGHOME="$XDG_DATA_HOME/gnupg"

# Fixing misbehaving Java applications

export _JAVA_AWT_WM_NONREPARENTING=1

# fzf

export FZF_DEFAULT_COMMAND='fd -t f -L -H -c always'
export FZF_CTRL_T_COMMAND="$FZF_DEFAULT_COMMAND"
export FZF_DEFAULT_OPTS='
    --ansi --border --height 100%
    --color fg:#ebdbb2,bg:#282828,hl:#fabd2f,fg+:#ebdbb2,bg+:#3c3836,hl+:#fabd2f
    --color info:#83a598,prompt:#a89984,pointer:#83a598,marker:#fe8019,spinner:#fabd2f,header:#665c54
    --preview "bat --color always --theme="base256" {}" --preview-window :70%'

# Autostrt x at login

if [ -z "${DISPLAY}" ] && [ "${XDG_VTNR}" -eq 1 ]; then
	exec startx "$XDG_CONFIG_HOME/X11/xinitrc"
fi
