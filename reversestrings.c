#include <stdio.h>
#define MAXLINE 2000

int getlines(char str[], int lim);
void reverse(char str[], int len);

int main()
{
    int len;
    char str[MAXLINE];

    while (len = (getlines(str, MAXLINE)) > 0) {
        ;
    }
    return 0;
}


int getlines(char str[], int lim)
{
    int c, i;

    for (i = 0; lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        str[i] = c;
    }
    if (c == '\n') {
        str[i] = c;
        ++i;
    }
    str[i] = '\0';
    reverse(str, i);
    return i;
}

void reverse(char str[], int len)
{
    int temp ,i ,k;

    for (i = 0 , k = len - 2; i < ((len - 2)/2);  i++, k--) {
        temp = str[k];
        str[k] = str[i];
        str[i] = temp;
    }
    str[len - 1] = '\n';
    str[len] = '\0';
    printf("%s",str);
}
