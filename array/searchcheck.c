#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7]={1,21,3,4,21,6,7};
    int x=21;
    int check =0;
    for (int i = 0; i <=6; i++)
    {
        if(arr[i]==x)
        {
            check =1;
            break;
        }
    }
    if(check==0)
    {
        printf("%d is not present in the array", x);
    }
    else{
        printf("%d is present in the array", x);
    }
    return 0;
}
