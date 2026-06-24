#include <stdio.h>

int main() {
    char str[100];
    int max_length = 0;
    int current_length = 0;
    int max_start = 0;
    int current_start = 0;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    
    for (int i = 0; i <= 100; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (current_length == 0) {
                current_start = i;
            }
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start = current_start;
            }
            current_length = 0;
        }
    }
    
    printf("Longest word: ");
    for (int i = 0; i < max_length; i++) {
        printf("%c", str[max_start + i]);
    }
    printf("\n");
    
    return 0;
}
