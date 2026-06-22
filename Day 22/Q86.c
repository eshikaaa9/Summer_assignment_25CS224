#include <stdio.h>

int main() {
    char str[100];
    int word_count = 1;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            word_count++;
        }
    }
    
    printf("Number of words: %d\n", word_count);
    
    return 0;
}
