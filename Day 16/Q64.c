#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
