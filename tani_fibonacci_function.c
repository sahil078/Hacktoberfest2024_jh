#include <stdio.h>
int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int x, i;
    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &x);
    printf("First %d Fibonacci numbers are:\n", x);
    for (i = 1; i <= x; i++) {
        printf("Fibonacci series is %d ", fibonacci(i));
    }
    return 0;
}
