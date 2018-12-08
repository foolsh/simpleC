#include <stdio.h>

#define TABSPACE 4

int main()
{
	int c, i;

	while ((c = getchar()) != '\0' && c != EOF) {
		if (c == '\t') {
			for (i = 0; i < TABSPACE +1; ++i) {
				printf(" ");
			}
		} else {
			printf("%c", c);
		}
	}
}
