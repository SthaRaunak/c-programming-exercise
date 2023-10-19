#include <stdio.h>

main()
{
    int c;
    int valueOfExpression = ((c = getchar()) != EOF);

    printf("The value of the expression is %d", valueOfExpression);
}

// The expression returns 1 if the input char is not equal to EOF.
// We can actually access the EOF char in windows with ctrl + z in the terminal
// so when we pass EOF to getchar() the input char will be equal to EOF so it will return 0 as it disatisfies the expression 