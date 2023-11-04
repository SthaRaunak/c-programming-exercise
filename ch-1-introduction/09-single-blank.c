#include <stdio.h>

main()
{
    char c;
    int blanks = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }

        if (c != ' ')
        {
            if (blanks >= 1)
            {
                printf(" ");
                blanks = 0;
            }
            putchar(c);
        }
    }
}