#include <stdio.h>

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    int len1 = 0, len2 = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        len2++;
    }
    
    int rotation = 0;
    if (len1 == len2) {
        for (int i = 0; i < len1; i++) {
            int match = 1;
            for (int j = 0; j < len2; j++) {
                if (str1[(i + j) % len1] != str2[j]) {
                    match = 0;
                    break;
                }
            }
            if (match == 1) {
                rotation = 1;
                break;
            }
        }
    }
    
    if (rotation == 1) {
        printf("String is rotation of another\n");
    } else {
        printf("String is not rotation of another\n");
    }
    
    return 0;
}
