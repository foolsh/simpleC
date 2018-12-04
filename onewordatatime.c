#include <stdio.h>




int main()
{
    int c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n' )
        {
            printf("\n");

            while (c == ' ' || c == '\t' || c == '\n')
            {
                c = getchar();
            }
        }

    if (c == EOF)
        break;
    printf("%c", c);

    }
}
