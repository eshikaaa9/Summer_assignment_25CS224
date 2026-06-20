#include <stdio.h>

int main() {
    int r, c;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int mat[r][c];
    
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Row-wise sum:\n");
    for (int i = 0; i < r; i++) {
        int row_sum = 0;
        for (int j = 0; j < c; j++) {
            row_sum = row_sum + mat[i][j];
        }
        printf("Row %d: %d\n", i + 1, row_sum);
    }
    
    return 0;
}
