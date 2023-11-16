#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

main()
{
    int ch, newLine, newWord, newChar, state;

    state = OUT;

    newLine = newWord = newChar = 0;

    while ((ch = getchar()) != EOF)
    {
        ++newChar;
        if (ch == '\n')
        {
            ++newLine;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++newWord;
        }
    }
    printf("%d %d %d\n", newLine, newWord, newChar);
}

// Test Done : No input , one line without enter, one line , multiple line, one big word as input
// most likely to uncover bugs : non ASCII words, too big text, use of symbols ,.!? ...