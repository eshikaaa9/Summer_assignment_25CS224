#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isPalindrome(n)) {
        printf("%d is a palindrome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }
    
    return 0;
}
