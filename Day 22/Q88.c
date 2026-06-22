#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    printf("String without spaces: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}
