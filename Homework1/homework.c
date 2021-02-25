#include <stdio.h>

int main () {
	char c;
	printf("Write your HTML code: ");
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			printf("_"); // i thought that the _ was used a lot, so i decided to put other thing, lol
		}
		else
		{
			if (c != '<' && c != '>')
			{
				printf("%c",c);
			}
		}
	}
	return 0;
}
