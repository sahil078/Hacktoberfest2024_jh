#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
//     struct node *p;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
   
   // p = head;
     head->data = 20;
     first->data = 30;
     second->data = 40;
    head->next = first;
    first->next = second;
    second->next = NULL;
    // while (p != NULL)
    // {
    //     printf("Enter an element: ");
    //     scanf("%d", &p->data);
    //     p = p->next;
    // }

    // p=head;

    // while (p != NULL)
    // {
    //     printf("%d ", p->data);
    //     p = p->next;
    // }
    printf("%d %d %d\n",head->data,first->data,second->data);
    printf("%d %d %d",head->next,first->next,second->next);
   return 0;
}
//______________________________________________________________________________________________________________
//insert at begninig
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head;
// void insert_at_begning()
// {
//     struct node *new;
//     new = (struct node *)malloc(sizeof(struct node));
//     printf("enter the data for new node: ");
//     scanf("%d", &new->data);
//     if (head == NULL)
//     {
//         head = new;
//     }
//     else
//     {
//         new->next = head;
//         head = new;
//     }
// }
// int main()
// {

//     struct node *first;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;
//     struct node *n;

//     head = (struct node *)malloc(sizeof(struct node));
//     first = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));
//     head->data = 45;
//     first->data = 57;
//     second->data = 68;
//     third->data = 78;
//     fourth->data = 98;

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = NULL;
//     insert_at_begning();

//     n = head;
//     while (n != NULL)
//     {
//         printf("%d ", n->data);
//         n = n->next;
//     }

//     return 0;
// }
//______________________________________________________________________________________________________________
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head;
// struct node *second;
// void insert_at_begning()
// {
//     struct node *new;
//     new = (struct node *)malloc(sizeof(struct node));
//     printf("enter the data for new node:%d ");
//     scanf("%d",&new->data);
    
    
//     if (head== NULL)
//     {
//       second = new;
//     }
//     else
//     {
    
        
//     head = new;
//     }
// }
// int main()
// {

//     struct node *first;
//     //struct node *second;
//     struct node *n;
//     int x, i = 1;

//     head = (struct node *)malloc(sizeof(struct node));
//     first = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     head->data = 45;
//     first->data = 57;
//     second->data = 68;
//     head->next = first;
//     first->next = second;
//     second->next = NULL;
//     printf("enter how much nodes you want to connect ");
//     scanf("%d", &x);
//     while (i <= x)
//     {
//         insert_at_begning();
//         i++;
//     }
//     n = head;
//     while (n != NULL)
//     {
//         printf("%d ", n->data);
//         n = n->next;
//     }

//     return 0;
// }