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
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    
    float average = (float)sum / n;
    
    printf("Sum of array: %d\n", sum);
    printf("Average of array: %.2f\n", average);
    
    return 0;
}
