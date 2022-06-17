/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom*/
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Fira Code:size=11"};
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */
/*
*static const char *colors[SchemeLast][2] = {
*    *     fg         bg       *
*    [SchemeNorm] = {"#bbbbbb", "#1c1f24"},
*    [SchemeSel] = {"#eeeeee", "#b5b5b5"},
*    [SchemeOut] = {"#000000", "#b5b5b5"},
*};
*/

#include "./themes/dracula.h"

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
