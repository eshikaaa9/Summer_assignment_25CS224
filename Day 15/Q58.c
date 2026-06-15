#include <stdio.h>

int main() {
    int n, k;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of rotations: ");
    scanf("%d", &k);
    
    k = k % n;
    
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }
    
    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    
    return 0;
}
