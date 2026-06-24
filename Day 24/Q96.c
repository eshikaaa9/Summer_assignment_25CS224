#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("String without duplicate characters: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int found = 0;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}
