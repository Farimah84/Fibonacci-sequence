#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
    }
    else {
        result = fibonacci(n);
        printf("The %dth term of the Fibonacci sequence is: %d\n", n, result);
    }

    return 0;
}
