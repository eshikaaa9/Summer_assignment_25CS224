#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    
    int mat[n][n];
    
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    int diag_sum = 0;
    for (int i = 0; i < n; i++) {
        diag_sum = diag_sum + mat[i][i];
    }
    
    printf("Diagonal sum: %d\n", diag_sum);
    
    return 0;
}
