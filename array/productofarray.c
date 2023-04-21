#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 5, 7, 4};
    int product = 1;
    for (int i = 0; i <= 4; i++)
    {
        product = product*arr[i];
    }
    printf("%d", product);
    return 0;
}
