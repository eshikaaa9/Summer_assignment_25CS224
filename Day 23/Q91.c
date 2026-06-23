#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z') {
            freq1[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq1[ch - 'A']++;
        }
    }
    
    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z') {
            freq2[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq2[ch - 'A']++;
        }
    }
    
    int anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }
    
    if (anagram == 1) {
        printf("Strings are anagrams\n");
    } else {
        printf("Strings are not anagrams\n");
    }
    
    return 0;
}
