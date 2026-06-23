#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int max_count = 0;
    char max_char;
    
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
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            max_char = 'a' + i;
        }
    }
    
    printf("Maximum occurring character: %c\n", max_char);
    printf("Frequency: %d\n", max_count);
    
    return 0;
}
