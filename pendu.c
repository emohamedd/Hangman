
#include "pendu.h"
int main()
{
    char word[] = "EMOHAMEDD";
    char guesses[26] = {0};
    int guesses_made = 0;
    int wrong_guesses = 0;
	banner();	
    printf("%sWelcome to the Hangman game!\n\n%s", GREEN, END);
    printf("%sThe word to guess has %lu letters.\n%s", YELLOW, strlen(word), END);

    while (wrong_guesses < MAX_GUESSES && !check_win(word, guesses))
    {
        char guess;
    	printf("%sEnter a letter: %s", GREEN, END);
        scanf(" %c", &guess);

        bool found = false;
        for (int i = 0; i < strlen(guesses); i++)
        {
            if (guess == guesses[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            guesses[guesses_made++] = guess;
            bool correct = false;
            for (int i = 0; i < strlen(word); i++)
            {
                if (guess == word[i])
                {
                    correct = true;
                    break;
                }
            }
            if (!correct)
            {
                wrong_guesses++;
                printf("%sIncorrect. You have %d/%d wrong guesses.\n%s",RED, wrong_guesses, MAX_GUESSES, END);
            }
        }
        else
        {
            printf("%sYou already guessed that letter.\n%s", RED, END);
        }

        display_word(word, guesses);
    }

    if (check_win(word, guesses))
    {
        printf("%sCongratulations! You won the game!\n%s", GREEN, END);
    }
    else
    {
        printf("%sYou lost the game. The word was:%s\n%s",RED, word, END);
	}
return 0;
}