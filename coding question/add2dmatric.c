#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[2][2] = {{1,2},{3,4}};
    int brr[2][2] = {{5,6},{7,8}};
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
