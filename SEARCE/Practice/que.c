#include<stdio.h>
#include<conio.h>
#define MAX 5
int front=0,rear=0,Q[MAX],ch;
void main()
{
    int ans=0;
    do
    {
        printf("Enter the Que operations you want to perform:\n");
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);	
        default:
            printf("Wrong selection\n");
            break;
        }
        printf("\ncontinue? (1/0):\n");
        scanf("%d",&ans);
    } while (ans!=0);
    getch();
}
void insert()
{
    int num;
    if(rear>=MAX)
    {
        printf("Que is full\n");
        return;
    }
    else
    {
        printf("Enter the data:\n");
        scanf("%d",&num);
        Q[rear]=num;
        rear+=1;
    }
}
void delete()
{
    if(front<0)
    {
        printf("Que is empty\n");
        return;
    }
    else
    {
        int x=Q[front];
        printf("The deleted element is:\n %d",x);
        if(front==rear)
        {
            front=0;
            rear=0;
        }
        else
        {
            front+=1;
        }
    }
}
void display()
{
    int i;
    for ( i = front; i < rear; i++)
    {
        printf("%d\n",Q[i]);
    }
    
}