#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *head;

void insert_at_begning()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter the data for new node ");
    scanf("%d", &new->data);
    new->pre = NULL;
    new->next = head;
    head = new;
}

int main()
{

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *p;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 30;
    first->data = 40;
    second->data = 45;
    third->data = 75;
    head->pre = NULL;
    head->next = first;
    first->pre = head;
    first->next = second;
    second->pre = first;
    second->next = third;
    third->pre = second;
    third->next = NULL;
    insert_at_begning();

    p = head;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    

    return 0;
}