#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int blanks = 0 , tabs = 0 , newlines = 1 , alice;
	while((alice = getchar()) != EOF)
	{
		alice = getchar();
		if(alice == ' ') 
			++blanks;
		if(alice == '\t') 
			++tabs;
		if(alice == '\n') 
			++newlines;
	}
	printf("Blanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, newlines);
	return 0;
}