# paths
export PATH=$(du "$HOME/.local/bin" | cut -f2 | tr '\n' ':' | sed 's/:*$//'):$PATH

# variables
export VISUAL="kak"
export EDITOR="kak"
export TERMINAL="alacritty"
export TERM="alacritty"
export TERMCMD="alacritty"

# XDG base directories
export XDG_CONFIG_HOME="$HOME/.config"
export XDG_DATA_HOME="$HOME/.local/share"
export XDG_CACHE_HOME="$HOME/.cache"
export ZDOTDIR="$XDG_CONFIG_HOME/zsh"
export HISTFILE="$XDG_DATA_HOME/history"
export GTK2_RC_FILES="$XDG_CONFIG_HOME/gtk-2.0/gtkrc-2.0"
export GNUPGHOME="$XDG_DATA_HOME/gnupg"
export CARGO_HOME="$XDG_CONFIG_HOME/cargo"

# fixing misbehaving Java applications
export _JAVA_AWT_WM_NONREPARENTING=1

# autostrt x at login
if [ -z "${DISPLAY}" ] && [ "${XDG_VTNR}" -eq 1 ]; then
	exec startx "$XDG_CONFIG_HOME/X11/xinitrc"
fi
