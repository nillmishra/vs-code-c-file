#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows: \n");
    scanf("%d", &r);
    printf("Enter the number of columns: \n");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter a number: \n");
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("\n");
    printf("the sum of array is %d", sum);
    return 0;
}

