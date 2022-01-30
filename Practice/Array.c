#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n;
int array[100];
void main()
{
    
    int ch,ans=0;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    // int array[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    do
    {
        printf("Enter choice:\n");
        printf("1.Traversal\n");
        printf("2.Insertion\n");
        printf("3.Deletion\n");
        printf("4.Searching\n");
        printf("5.Sorting\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            traverse();
            break;
        case 2:
            insertion();
            break;
        case 3:
            deletion(array);
            break;
        case 4:
            search(array);
            break;
        case 5:
            sorting(array);
            break;
        default:
            printf("Wrong selection:\n");
            break;
        }
        printf("Want to continue? ( 1/0 ):\n");
        scanf("%d",&ans);
    } while (ans!=0);
}
void traverse()
{
    for(int i=0;i<n;i++)
    {
        printf("%d \n",array[i]);
    }
}
void insertion()
{
    int na=0;
    int pos=0;
    printf("Enter the element you want to add:\n");
    scanf("%d",&na);
    printf("Enter the position you want to add it in:\n");
    scanf("%d",&pos);
    n++;
    for(int i=n;i>=pos-1;i--)
    {
        array[i+1]=array[i];
    }
    array[pos-1]=na;
    for(int i=0;i<n;i++)
    {
        printf("%d \n",array[i]);
    }
    getch();  
}
void deletion()
{
    n--;
    int pos=0,na;
    printf("Enter the element you want to delete:\n");
    scanf("%d",&na);
    for (int i = 0; i < n; i++)
    {
        if(array[i]!=na)
        pos++;
        else
        break;
    }
    for(int i=pos;i<=n;i++)
    {
        array[i]=array[i+1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d \n",array[i]);
    }
    getch();
    
}
void search()
{
    int na=0;
    printf("Enter the element you want to search");
    scanf("%d",&na);
    for (int i = 0; i < n; i++)
    {
        if(array[i]==na)
        {
            printf("The element is at %d",i+1);
            break;
        }
    }
}
void sorting()
{
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",array[i]);
    }
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("After sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",array[i]);
    }
    
}