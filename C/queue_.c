#include <stdio.h>
void enqueue(int q[], int rear)
{
    printf("enter the element: ");
    scanf("%d", &q[rear]);
}
void dequeue(int q[], int front)
{
    int x = q[front];
    printf("Deleted element is: %d\n", x);
}
void display(int q[], int front, int rear)
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}
int main()
{
    int front = -1, rear = -1, n, i = 1, choice;
    printf("enter the size of queue: ");
    scanf("%d", &n);
    int q[n];
    for (; i = 1;)
    {
        printf("Menu for queue:\n1.enqueue\n2.dequeue\n3.Display\n4.Exit\nenter what you wnat to do: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (rear == n - 1)
            {
                printf("overflow\n");
            }
            else if (front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
                enqueue(q, rear);
            }
            else
            {
                rear++;
                enqueue(q, rear);
            }
        }
        else if (choice == 2)
        {
            if (front == -1)
            {
                printf("underflow\n");
            }
            else if (front == rear && rear != -1)
            {
                dequeue(q, front);
                front = -1;
                rear = -1;
            }
            else
            {
                dequeue(q, front);
                front++;
            }
        }
        else if (choice == 3)
        {
            if (front == -1 && rear == -1)
            {
                printf("nothing to display\n");
            }
            else
            {
                display(q, front, rear);
            }
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("please choose a valid option\n");
        
        }
    } 
    printf("exit sucessfully");
    return 0;
}