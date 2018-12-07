#include <stdio.h>
#define MAXLINE 2000
#define ENDLINE 2

int getlines(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getlines(line, MAXLINE)) > 0) {
        while (line[len - ENDLINE] == ' ' || line[len - ENDLINE] == '\t') {
            line[len - 2] = '\n';
            line[len - 1] = '\0';
            --len;           
        }
        if (len > 0 && line[0] != '\n') {             
            printf("%s", line);             
        }          
    }             
    return 0;               
}


int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

