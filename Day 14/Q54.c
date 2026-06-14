#include <stdio.h>

int main() {
    int n, element, count = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to find frequency: ");
    scanf("%d", &element);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    
    printf("Frequency of %d is: %d\n", element, count);
    
    return 0;
}
