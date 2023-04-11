#pragma once


#include <stdio.h>
#include <stdlib.h>

// file curses
#define CURSE_MATHUTIL 1 // if defined as 1, applies cursed/curse.h to src/engine/math_util.c
#define CURSE_BEHAVIORSCRIPT 1 // if defined as 1, applies cursed/curse.h to src/engine/behavior_script.c
#define CURSE_LEVELSCRIPT 1 // if defined as 1, applies cursed/curse.h to src/engine/level_script.c
#define CURSE_MARIO 1 // if defined as 1, applies cursed/curse.h to src/game/mario*.c files
#define CURSE_BEHAVIORS 1 // if defined as 1, applies cursed/curse.h to all .c files in src/game/behaviors
#define CURSE_GODDARD 1 // if defined as 1, applies cursed/curse.h to src/goddard's .c files
#define CURSE_AUDIO 1 // if defined as 1, applies cursed/curse.h to src/audio/*.c files


// options
#define CURSED_RANDOM_AMT 25 // the "x" in "(rand()) < x" that cursed.h will use in its random functions


// specific macros
#define IF_ELSE_RNG       1    // if defined as 1, makes if-statements rng-driven
#define NO_ELSE           0    // if defined as 1, makes the keyword "else" do nothing
#define KEEP_LOOPING      0    // if defined as 1, makes the keyword "break" do nothing

