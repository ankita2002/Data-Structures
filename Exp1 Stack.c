#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct Exp1 Stack //stack structure
{ 
    int data[SIZE];
    int top;
}s;
void push(int x) //push element into the stack
{
    if(s.top >= SIZE - 1)
    {
        printf("----STACK OVERFLOW----\n");
    }
    else
    {
        s.top = s.top +1;
        s.data[s.top] = x;
        printf("Elements pushed is: %d\n",x);
    }
}
void pop() //pop element fom the stack
{
    if(s.top==-1)
    {
        printf("----STACK UNDERFLOW----");
    }
    else
    {
        printf("Elements poped is %d\n",s.data[s.top]);
        s.top -= 1;
    }
}
void display() //Method to display
{
    int i;
    if(s.top != -1)
    {
        for ( i = 0; i < s.top; i++)
        {
            printf("%d",s.data[s.top]);
        }
        printf("\n");
    }
    else
    {
        printf("----STACK EMPTY----");
    }    
}

int main()
{
    s.top = -1;
    while(1)
    {
        printf("ENTER CHOICES: \n");
        printf("1.PUSH\n2.POP\n3.DISPLAY STACK\n4.EXIT\n");
        int number,choice;
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter element to be pushed on the stack: ");
            scanf("%d",&number);
            push(number);
        }
        else if (choice == 2)
        {
            pop();          
        }
        else if (choice == 3)
        {
            display();
        }
        else  if (choice == 4)
        {
            break;
        }
        else
        {
            printf("REENTER CHOICE\n");
        }
    } 
    return 0;
}