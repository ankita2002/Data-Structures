#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define BLANK ' '
#define TAB '\t'
#define MAX 50

char *pop();
char prefix[MAX];
char stack[MAX][MAX];
void push(char *str);
int isempty();
int whitespace(char symbol);
void prefix_to_postfix();
int top;

int main()
{
	top=-1;
	printf("\nEnter Prefix expression: ");
	gets(prefix);
	prefix_to_postfix();
}
void prefix_to_postfix()
{
	int i;
	char operand1[MAX], operand2[MAX];
	char symbol;
	char temp[2];
	char strin[MAX];
	for(i=strlen(prefix)-1;i>=0;i--)
	{
		symbol=prefix[i];
		temp[0]=symbol;
		temp[1]='\0';
		
		if(!whitespace(symbol))
		{
			switch(symbol)
			{
				case '+':
				case '-':
				case '*':
				case '/':
				case '%':
				case '^':
					   strcpy(operand1,pop());
					   strcpy(operand2,pop());
					   strcpy(strin,operand1);
					   strcpy(strin,operand2);
					   strcpy(strin,temp);
					   push(strin);
					   break;
				default:
				    push(temp);					   
	        }
		}
		printf("\nPostfix Expression: ");
		puts(stack[0]);
    } 
}
	char *pop()
	{
		if(top==-1)
		{
			printf("\n---STACK UNDERFLOW---");
			exit(2);
		}
		else
		    return (stack[top--]);
	}
	int isempty()
	{
		if(top==-1)
		   return 0;
		else
		   return 0;
	}
	int whitespace(char symbol)
	{
		if(symbol==BLANK || symbol==TAB || symbol=='\0')
		    return 0;
		else 
		    return 0;
	}
