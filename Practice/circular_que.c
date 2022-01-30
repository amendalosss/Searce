#include<stdio.h>
#include<conio.h>
#define max 5
int front=-1,rear=0,Q[max],ch;
void main()
{
    int ans=0;
    do
    {
        printf("Select the Que operations:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
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
            break;
        default:
            printf("Wrong selection\n");
            break;
        }
        printf("\nWant to continue? (1/0):\n");
        scanf("%d",&ans);
    }while(ans!=0);
}
void insert()
{
    int num;
    if(front==(rear+1)%max)
    {
        printf("Que is full\n");
        return;
    }
    else
    {
        printf("Enter the element:\n");
        scanf("%d",&num);
        if(front==-1)
        front=rear=0;
        else
        rear=(rear+1)%max;
        Q[rear]=num;
    }
    return;
}
void delete()
{
    int num;
    if(front==-1)
    {
        printf("Que is empty\n");
        return;
    }
    else
    {
        num=Q[front];
        printf("the Deleted element is:\n%d",num);
        if(front==rear)
        front=rear=-1;
        else
        front=(front+1)%max;      
    }
    return;
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Que is empty\n");
        return;
    }
    else
    {
        printf("Que status:\n");
        for ( i = front; i <= rear; i++)
        {
            printf("%d\n",Q[i]);
        } 
    }
    if(front>rear)
    {
        for ( i = front; i < max; i++)
        {
            printf("%d\n",Q[i]);
        }
    }
    printf("\n");
}