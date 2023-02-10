
#include "pendu.h"

void display_word(char word[], char guesses[])
{
    int word_len = strlen(word);
    for (int i = 0; i < word_len; i++)
    {
        bool found = false;
        for (int j = 0; j < strlen(guesses); j++)
        {
            if (word[i] == guesses[j])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            printf("%s%c %s",GREEN,  word[i], END);
        }
        else
        {
            printf("%s* %s", YELLOW, END);
        }
    }
    printf("\n");
}
