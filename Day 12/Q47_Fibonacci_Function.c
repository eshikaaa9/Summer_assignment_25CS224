#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    int fib0 = 0, fib1 = 1, fib;
    
    for (int i = 2; i <= n; i++) {
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;
    }
    
    return fib1;
}

void generateFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series up to %d terms:\n", n);
    generateFibonacci(n);
    
    return 0;
}
