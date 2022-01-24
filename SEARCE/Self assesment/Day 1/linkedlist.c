#include<stdio.h>
#include<stdlib.h>
struct node                                             //sturcture for creating a node of link list.
{
    int data;
    struct node *link;
};
void add(struct node *head,int data)                    // function to add elements at the end of the list.
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));     // allocating memory and returning the first address to temp.
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;                                     //shifting temp to the last element each time.
}
int main()
{
    int n;
    struct node *head=malloc(sizeof(struct node));
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    printf("Enter the data for list:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    head->data=arr[0];                                 //setting the first element.
    head->link=NULL;
    for(int i=1;i<n;i++)
    {
        add(head,arr[i]);                              //calling add function for each addition.
    }
    if(head==NULL)
    printf("Linked list is empty\n");
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data);                     //printing the linked list
        ptr=ptr->link;
    }
    
} 