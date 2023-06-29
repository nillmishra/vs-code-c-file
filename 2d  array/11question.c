#include <stdio.h>
#define SIZE 3 //change this value to set size of matrix

int main() {
    int matrix[SIZE][SIZE], i, j;
    int max_upper = -32767, min_upper = 32767; //initialize max_upper with -32767 and min_upper with 32767 as they are out of range of the values in the matrices
    int max_lower = -32767, min_lower = 32767; //initialize max_lower with -32767 and min_lower with 32767 as they are out of range of the values in the matrices
    
    //input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < SIZE; ++i) {
        for(j = 0; j < SIZE; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    //calculate max and min elements for upper triangular matrix
    for(i = 0; i < SIZE; ++i) {
        for(j = i+1; j < SIZE; ++j) {
            if(matrix[i][j] > max_upper)
                max_upper = matrix[i][j];
            if(matrix[i][j] < min_upper)
                min_upper = matrix[i][j];
        }
    }

    //calculate max and min elements for lower triangular matrix
    for(i = 0; i < SIZE; ++i) {
        for(j = 0; j < i; ++j) {
            if(matrix[i][j] > max_lower)
                max_lower = matrix[i][j];
            if(matrix[i][j] < min_lower)
                min_lower = matrix[i][j];
        }
    }
    
    //output results
    printf("\nUpper triangular matrix max element: %d\n", max_upper);
    printf("Upper triangular matrix min element: %d\n", min_upper);
    printf("Difference: %d\n", (max_upper - min_upper));
    printf("\nLower triangular matrix max element: %d\n", max_lower);
    printf("Lower triangular matrix min element: %d\n", min_lower);
    printf("Difference: %d\n", (max_lower - min_lower));

    return 0;
}
