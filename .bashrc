#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
PS1='[\u@\h \W]\$ '

export PATH="~/.local/bin:$PATH"

feh --bg-fill ~/pics/wallpapers/nordwallpaper.png
setxkbmap gb -option caps:escape_shifted_capslock
(cat ~/.cache/wal/sequences &)
term="$(cat /proc/$PPID/comm)"
if [[ $term = "st" ]]; then
    transset-df "0.8" --id "$WINDOWID"  >/dev/null
fi


