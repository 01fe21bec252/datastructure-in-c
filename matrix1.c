#include <stdio.h>

int isSymmetric(int mat[10][10], int rows, int col) {

    if (rows != col)
        {
        return 0;
        }


    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < col; j++)
         {
            if (mat[i][j] != mat[j][i])
             {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int rows, col;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &col);

    if (rows <= 0 || col <= 0 || rows > 10 || col > 10) {
        printf("Invalid matrix size. Please enter values between 1 and 10.\n");
        return 0;
    }

    int mat[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++)
            {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (int i = 0; i < rows; i++)
        {
        for (int j = 0; j < col; j++)
         {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    if (isSymmetric(mat, rows, col))
        {
        printf("\nThe matrix is symmetric.\n");
        }
    else {
        if (rows != col)
         {
            printf("\nCannot compute the symmetry as it is a non-square matrix.\n");
        } else
        {
            printf("\nThe matrix is non-symmetric.\n");
        }
    }

    return 0;
}

