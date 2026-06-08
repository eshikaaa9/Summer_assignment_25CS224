#include <stdio.h>

int reverseNumber(int n) {
    if (n < 10) {
        return n;
    }
    return ((n % 10) * 10 + reverseNumber(n / 10)) / 10 * 10 + reverseNumber(n / 10) % 10;
}

int reverseRec(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseRec(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Reversed number: %d\n", reverseRec(num, 0));
    
    return 0;
}
