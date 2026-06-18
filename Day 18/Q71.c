#include <stdio.h>

int main() {
    int n, search;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &search);
    
    int left = 0, right = n - 1, found = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == search) {
            found = mid;
            break;
        } else if (arr[mid] < search) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (found != -1) {
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
