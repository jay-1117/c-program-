#include <stdio.h>

int main() {
	int i,j;
    int matrix[3][3]; // Change the dimensions as needed
    int transpose[3][3]; // The transpose matrix with dimensions swapped

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the transpose
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transpose matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

