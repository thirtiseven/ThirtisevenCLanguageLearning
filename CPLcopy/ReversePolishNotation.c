#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MAXVAL 100

int getop(char []);
void push(double);
double pop();

/*RPC*/
int main(int argc, char const *argv[])
{
    int type;
    double op2;
    char s[MAXOP];
	printf(">>>");
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
                printf("\t%f.8\n",pop());
				printf("\n>>>");
                break;
            default:
                printf("ERROR: unknown command %s\n",s);
                break;
                
        }
    }
    return 0;
}


int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if(sp < MAXVAL)
        val[sp++] = f;
   // else
     //   printf("error: stack full\n");
}

double pop(int argc, char const *argv[])
{
    if(sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}

int getch();
void un_getch(int);

int getop(char s[])
{
    int i,c;
    
    while ((s[0] = c = getch()) == ' ' || c == '\t');
    s[1] = '\0';
    
    if (!isdigit(c)&& c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c=='.')
        while (isdigit(s[++i] = c = getch()))
            ;
    s[1] = '\0';
    if (c != EOF)
        un_getch(c);
    return NUMBER;
}
                         
char buf[BUFSIZE];
int bufp = 0;
                         
int getch()
{
return (bufp > 0) ? buf[--bufp]:getchar();
}
                         
void un_getch(int c)
{
if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
else
    buf[bufp++] = c;
}