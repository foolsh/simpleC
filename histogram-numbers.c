#include <stdio.h>



int main()
{
    int c, n, i = 0;
    int numbers[62];

    for (i = 0; i < 62; ++i)
        numbers[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++numbers[c-'0'];
        if (c >= 'A' && c <= 'Z')
            ++numbers[c-55];
        if (c >= 'a' && c <= 'z')
            ++numbers[c-61];
    }

    for (i = 0; i < 62; ++i) {
        n = 0;
        if (i >= 0 && i < 10)
            printf("%c ",i + '0');
        if (i >= 10 && i <= 35)
            printf("%c ",i + 55);
        if (i >= 36 && i <= 61)
            printf("%c ",i + 61);

        while ( n < numbers[i]) {
            printf("#");
            ++n;
        }
        printf("\n");
    }

}
