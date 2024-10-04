#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* insert_at_beginning(struct node* head)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));

    printf("Enter an element: ");
    scanf("%d",&p->data);
    
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        p->next=head;
        head=p;
    }

    return head;
}

int main()
{
    struct node* head;       
    struct node* first;       
    struct node* second;
    struct node* n;

    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));

    n=head;

    head->data=10;
    first->data=20;
    second->data=30;

    head->next=first;
    first->next=second;
    second->next=NULL;

    printf("Before inserting:\n");
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
    printf("\n");

    n = insert_at_beginning(head);

    printf("After inserting:\n");
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }


    return 0;
}