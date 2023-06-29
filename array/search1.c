#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7]={1,21,3,4,21,6,7};
    int x=21;
    for (int i = 0; i <=6; i++)
    {
        if(arr[i]==x)
        {
            printf("%d is present in the array and its index is %d\n", x, i);
            // break;
        }
    }
    return 0;
}
