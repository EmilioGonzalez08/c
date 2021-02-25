#include <stdio.h>

int main () {
	char c;
	printf("Write your HTML code: ");
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			printf("_");
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
