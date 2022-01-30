#include<stdio.h>
#include<conio.h>
#define max 5
int r=-1,f=-1;
struct data
{
    char job[10];
    int priority;
};
typedef struct data DATA;
DATA q[max];
void add()
{
    int i,j;
    DATA t;
    if(r=max-1)
    {
        printf("Que is full\n");
        return;
    }
    else
    {
        r++;
        printf("Enter the element:\n");
        scanf("%d",q[r].job);
        printf("Enter the priority:\n");
        scanf("%d",q[r].priority);
        if(f==-1)
        {
            f=0;
            for ( i = f; i < r; i++)
            {
                for ( j = f; j < r; j++)
                {
                    if (q[j].priority>q[j+1].priority)
                    {
                        t=q[j];
                        q[j]=q[j+1];
                        q[j+1]=t;
                    }
                    
                }
                
            }
            printf("Added successfully\n");
        }
    }
}
void display()
{
    int i;
    if(f==-1)
    {
        printf("Que is empty\n");
        return;
    }
    else
    {
        printf("job priority:\n");
        for(i=f;i<=r;i++)
        {
            printf("%s\t%d\n",q[i].job,q[i].priority);
        }
    }
}
void delete()
{
    if(f==-1)
    {
        printf("Que is empty\n");
        return;
    }
    else
    {
        printf("Job deleted is:%s\n",q[f].job);
        if(f==r)
        f=r=-1;
        else
        f++;
    }
}
void main()
{
    int ans;
    int choice;
    do
    {
        printf("enter the operation:\n");
        printf("1.Add\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            add();
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
        printf("Want to continue?(1/0):\n");
        scanf("%d",&ans);
    } while (ans!=0);
}
