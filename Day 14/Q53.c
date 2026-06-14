#include <stdio.h>

int main() {
    int n, search, found = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("Element not found\n");
    }
    
    return 0;
}
