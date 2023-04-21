#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 5, 7, 4};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}
