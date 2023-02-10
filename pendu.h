#ifndef PENDU_H
#define PENDU_H

#define MAX_GUESSES 10

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void display_word(char word[], char guesses[]);
bool check_win(char word[], char guesses[]);
void banner(void);

#endif