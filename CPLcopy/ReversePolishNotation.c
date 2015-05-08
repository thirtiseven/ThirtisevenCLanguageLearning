#include<stdio.h>
#include<stdlib.h>
#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(viod);

/*RPC*/
int main(int argc, char const *argv[])
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch (type)
		{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("ERROR: zero divisor\n");
				break;
			case '\n':
			 printf("\t%.8\n",pop());
				break;
			default:
				printf("ERROR: unknown command %s\n",s);
				break;

		}
	}
	return 0;
}

#define MAXVAL 100     
  
int sp = 0;                  
double val[MAXVAL];           
  
void push(double f)            
{  
    if(sp < MAXVAL)  
        val[sp++] = f;  
    else  
        printf("error: stack full\n", f);  
}  
  
double pop()                
{  
    if(sp > 0)  
        return val[--sp];  
    else  
    {  
        printf("error: stack empty\n");  
        return 0.0;  
    }  
}  

#include <ctype.h>

int getch(void);
void ungetch(int);

int getch(char s[])
{
	int 1,c;

	while ((s[0] = c = getch()) == '' || c == '\t');
	s[1] = '\0';
	if (isdigit(c))
		while (isdigit(s[++i = c = getch()))
	
}