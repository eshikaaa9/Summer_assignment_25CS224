#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    printf("Compressed string: ");
    int i = 0;
    while (i < length) {
        printf("%c", str[i]);
        int count = 1;
        while (i + count < length && str[i] == str[i + count]) {
            count++;
        }
        if (count > 1) {
            printf("%d", count);
        }
        i = i + count;
    }
    printf("\n");
    
    return 0;
}
