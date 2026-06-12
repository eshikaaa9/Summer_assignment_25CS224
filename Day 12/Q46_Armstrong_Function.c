#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = countDigits(num);
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    return original == sum;
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    
    return 0;
}
