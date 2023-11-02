#include <stdio.h>

main()
{
    char c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++blanks;
        }
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == '\n'){
            ++newlines;
        }
    }

    printf("blanks: %d \n tabs: %d \n newline: %d \n",blanks,tabs,newlines);
}