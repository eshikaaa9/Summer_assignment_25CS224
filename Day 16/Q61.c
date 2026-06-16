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
    
    int total_sum = 0;
    for (int i = 1; i <= n + 1; i++) {
        total_sum = total_sum + i;
    }
    
    int array_sum = 0;
    for (int i = 0; i < n; i++) {
        array_sum = array_sum + arr[i];
    }
    
    int missing = total_sum - array_sum;
    
    printf("Missing number: %d\n", missing);
    
    return 0;
}
