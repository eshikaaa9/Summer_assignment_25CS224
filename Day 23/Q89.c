#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("First non-repeating character: ");
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("No non-repeating character\n");
    }
    
    return 0;
}
