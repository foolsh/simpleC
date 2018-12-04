#include <stdio.h>

/* count blanks tabs and newlines in input */

int main ()
{
    int c, bl, tb, nl;

    bl = 0;
    tb = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++bl;
        else if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tb;
    printf("Blank Spaces = %d\n", bl);
    printf("Tabs = %d\n", tb);
    printf("New Lines = %d\n", nl);
}
