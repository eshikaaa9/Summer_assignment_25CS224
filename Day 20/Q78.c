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
    
    int symmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0) {
            break;
        }
    }
    
    if (symmetric == 1) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }
    
    return 0;
}
