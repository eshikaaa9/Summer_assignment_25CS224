#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[32];
    int decimal = 0;
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    int len = strlen(binary);
    
    for (int i = 0; i < len; i++) {
        if (binary[len - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    
    printf("Decimal: %d\n", decimal);
    
    return 0;
}
