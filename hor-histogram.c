#include <stdio.h>


int main()
{

    int c, n, i = 0;
    int characters[10];

    for (i = 0; i < 10; ++i) {
        characters[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' || c <= '9') {
            ++characters[c - '0'];
        }
    }


    n = 11;
    while ( n >= 1) {
        i = 9;
        while ( i >= 0 ) {
            if (n <= characters[i]) {
                printf("# ");
            } else {
                printf("  ");
            }
            --i;
        }
        printf("\n");
        --n;
    }

    printf("0 1 2 3 4 5 6 7 8 9\n");
}
