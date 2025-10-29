#include <stdio.h>
void main() {
    int a, b, choice;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("The value of addition is %d", a + b);
            break;
        case 2:
            printf("The value of subtraction is %d", a - b);
            break;
        case 3:
            printf("The value of multiplication is %d", a * b);
            break;
        case 4:
            printf("The value of division is %d", a / b);
            break;
        default:
            printf("Invalid choice!");
    }
}
