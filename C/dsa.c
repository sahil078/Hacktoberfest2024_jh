// stack push / pop 
#include <stdio.h>

void PUSH(int S[], int top)
{
    int x;
    printf("Enter an element: ");
    scanf("%d", &x);
    S[top] = x;
}
void pop(int s[], int top)
{
    int x;
    x = s[top];
    printf("deleted element is %d", x);
}
void Display(int s[], int top)
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", s[i]);
    }
}

int main()
{
    int top = -1, n, x, choice, i;
    printf("enter the size of stack");
    scanf("%d", &n);
    int s[n];
    for (i = 1; i = 1; i = 1)
    {
        printf("\n menu for stack\n1.push\n2.pop\n3.Display\n4.Exit\nenter what you wnat to do ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (top == n - 1)
            {
                printf("stack overflow");
            }
            else
            {
                top++;
                PUSH(s, top);
            }
        }
        else if (choice == 2)
        {
            if (top == -1)
            {
                printf("stack underflow");
            }
            else
            {
                pop(s, top);
                top--;
            }
        }
        else if (choice == 3)
        {
            if (top == -1)
            {
                printf("nothing to display");
            }
            else
            {
                Display(s, top);
            }
        }
        else if (choice == 4)
        {
            printf("thanks for choosing me ");
            break;
        }
        else if (choice > 4 || choice < 1)
            printf("the no is invalid");
    }

    return 0;
}