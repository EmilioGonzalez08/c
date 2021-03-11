#include<stdio.h>

int COUNTER();
char value[5000];


int main()
{
	extern COUNTER();
	
	int ignore = 0;
	for(int i = 0; i < 5000; ++i)
	{
		if(i == '<')
		{
			ignore = 1;
		}
		else if(i == 'h')
		{
			ignore = 1;
		}
		else if(i == 't')
		{
			ignore = 1;
		}
		else if(i == '1')
		{
			ignore = 1;
		}
		else if(i == 'm')
		{
			ignore = 1;
		}
		else if(i == 'l')
		{
			ignore = 1;
		}
		else if(i == 'e')
		{
			ignore = 1;
		}else if(i == 'a')
		{
			ignore = 1;
		}
		else if(i == 'd')
		{
			ignore = 1;
		}
		else if(i == 's')
		{
			ignore = 1;
		}
		else if(i == 'i')
		{
			ignore = 1;
		}
		else if(i == 'b')
		{
			ignore = 1;
		}else if(i == 'o')
		{
			ignore = 1;
		}
		else if(i == 'y')
		{
			ignore = 1;
		}
		else if(i == 'p')
		{
			ignore = 1;
		}
		else if(i == 'v')
		{
			ignore = 1;
		}
		else if(i == '/')
		{
			ignore = 1;
		}
	}
	getchar();
}

int COUNTER()
{
	extern char value[5000];
	int i = 0;
	while((value[i] = getchar()) != '\n')
	{
		++i;
	}
}
