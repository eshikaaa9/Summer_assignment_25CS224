#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("First repeating character: ");
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    
    if (found == 0) {
        printf("No repeating character\n");
    }
    
    return 0;
}
