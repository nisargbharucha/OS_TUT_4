/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, 
 * Nisarg Bharucha - 100820217 
 * Shiv Patel - 100818727
 * Joshua Cardoz - 100827231
 * All rights reserved.
 *
 */
#ifndef JEOPARDY_H_
#define JEOPARDY_H_

#include "players.h"

extern void tokenize(char *input, char **tokens);
extern void show_results(player *players, int num_players);
#endif /* JEOPARDY_H_ */

