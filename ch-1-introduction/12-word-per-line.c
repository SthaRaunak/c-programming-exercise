#include <stdio.h>

main()
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            putchar(ch);
        }
        else
        {
            putchar('\n');
        }
    }
}