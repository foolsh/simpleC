#include <stdio.h>

int main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        if ((c == '\t') || (c == '\b') || (c == '\\')) {
            c = '\\';
            putchar(c);
        }
    putchar(c);
    c = getchar();
    }
}
