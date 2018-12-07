#include <stdio.h>
#define MAXLINE 2000

int getlines(char line[], int maxline);

int main()
{
    int len;
    int max;
    char line[MAXLINE];

    max = 0;
    while ((len = getlines(line, MAXLINE)) > 0)
        if (len > 80) {
            printf("The Line Length is %d Characters Long\n", len);
            printf("%s", line);
        }
    return 0;
}


int getlines(char s[], int lim)
{
    int c, i;

    for (i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
