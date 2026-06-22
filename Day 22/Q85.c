#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int palindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome == 1) {
        printf("String is palindrome\n");
    } else {
        printf("String is not palindrome\n");
    }
    
    return 0;
}
