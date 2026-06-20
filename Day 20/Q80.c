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
    
    printf("Column-wise sum:\n");
    for (int j = 0; j < c; j++) {
        int col_sum = 0;
        for (int i = 0; i < r; i++) {
            col_sum = col_sum + mat[i][j];
        }
        printf("Column %d: %d\n", j + 1, col_sum);
    }
    
    return 0;
}
