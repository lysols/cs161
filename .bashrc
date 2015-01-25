#!/usr/local/bin/bash

# version 2005.07.01

# .bashrc -- initialization for each bash shell invoked.
# nothing here should output anything to the screen.
# if it does, things like sftp (secure ftp) will fail with some weird errors

# this is a pretty bare-bones .bashrc.  We don't really support bash;
# we mainly want to make sure the shell is halfway functional.  You can
# make it spiffy and pretty. :-)  If you have suggestions for some fundamental
# settings here, mail support@engr.orst.edu.   thx


############################################################
# First we set a pretty basic path that should work on all
# OS's.  We will be pre and post-pending to it below, with
# OS-specific paths.
############################################################
export PATH=/bin:/sbin:/usr/local/bin:/usr/bin:/usr/local/apps/bin:/usr/bin/X11
export MANPATH=/usr/local/man:/usr/man
export LESS="QMcde"
export MORE="-c"
export PAGER=less
umask 007

############################################################
# here we figure out which OS we're running on and make
# appropriate settings.  Our goal here is to keep the
# environment consistent.
# no real reason to export TEMP_OS; only used briefly
############################################################
TEMP_OS=`/bin/uname`
if [ "$TEMP_OS" == "Linux" ]; then
    export MANPATH=$MANPATH:/usr/share/man
fi
if [ "$TEMP_OS" == "SunOS" ]; then
    export PATH=/usr/ccs/bin:$PATH:/opt/SUNWspro/bin:/usr/sfw/bin:/usr/ucb:/usr/local/X11R6/bin
    export MANPATH=$MANPATH:/usr/dt/man:/opt/SUNWspro/man:/usr/sfw/man:/usr/local/X11R6/man
fi
if [ "$TEMP_OS" == "HP-UX" ]; then
    export PATH=/usr/ccs/bin:$PATH:/opt/fortran90/bin:/usr/local/X11R6/bin
    export MANPATH=$MANPATH:/usr/dt/man:/opt/ansic/share/man:/opt/fortran90/share/man:/usr/local/X11R6/man
    alias who='/bin/who -R'
    alias df='/bin/bdf'
fi

############################################################
# Now we add a personal bin directory and '.', which is the
# current directory.  This would be a good place to add
# any other special directories to your path or MANPATH
############################################################
export PATH=$PATH:~/bin:.
#export MANPATH=$MANPATH:

alias cp="cp -i"
alias rm="rm -i"
alias mv="mv -i"
alias z="suspend"
alias la="ls -aF"
alias lf="ls -F"
alias lfa="ls -AF"
alias ll="ls -gl"
alias lla="ls -agl"
