#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7] =  {1,2,3,4,5,6,7};
    for (int i = 0; i <=6; i++)
    {
        if( arr[i]%2==0)
        {

            printf("%d ", arr[i] * 2);
        }
        else
        {
            printf("%d ", arr[i] + 10);
        }
    }
    

    return 0;
}
