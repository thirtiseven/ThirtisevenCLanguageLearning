#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int c;
	int inspace = 0;
	
	while ((c = getchar()) != EOF) 
	{
		if(c == ' ')
		{
			if(inspace == 0) 
			{
			inspace = 1;
			putchar(c);
			}
		}
		else 
		{
			inspace = 0;
			putchar(c);
		}
	}
	return 0;
}