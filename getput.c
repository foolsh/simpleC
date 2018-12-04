#include <stdio.h>

/* copy input to output; 1st version */

int c;

void testend()
{
    if (c == EOF)
        printf("End of File\n");
    else
        printf("Not end of File\n");
}


int main()
{
    while ((c = getchar()) != EOF) {
        putchar(c);
        testend();
    }
}


