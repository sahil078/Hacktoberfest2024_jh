#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * head;
void Display()
{
    struct node *n;
    n = head;
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}
int main()
{
    struct node *first, *second, *third, *fourth, *n, *p;
    int i = 1;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    n = head;
    head->prev = NULL;
    first->prev = head;
    second->prev = first;
    third->prev = second;
    fourth->prev = third;
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    head->data = 5;
    first->data = 10;
    second->data = 15;
    third->data = 20;
    fourth->data = 25;

    printf("Before Deletion: ");
    Display();
    while (i != 3)
    {
        p = n;
        n = n->next;
        i++;
    }
    p->next = n->next;
    n->next->prev = p;
    free(n);
    n = NULL;
    printf("After Deletion: ");
    Display();
    return 0;
}
