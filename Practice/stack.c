#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push()
{
    int data;
    if(top==MAX)
    {
        printf("Stack is ful\n");
        return;
    }
    else
    {
        printf("Enter the data:\n");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}
void pop()
{
    int temp;
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        temp=stack[top];
        top--;
        printf("The deleted element is:\n %d",temp);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
void main()
{
    int ch,ans=1;
    do
    {
        printf("Enter the operation you want to perform:\n");
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong selection\n");
            break;
        }
        printf("\nWant to continue? ( 1/ 0 ):\n");
        scanf("%d",&ans);
    } while (ans!=0);
    getch(); 
}