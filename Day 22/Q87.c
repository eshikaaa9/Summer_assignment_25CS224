#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }
    
    printf("Character frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }
    
    return 0;
}
