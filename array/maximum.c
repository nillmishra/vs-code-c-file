#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {3,7,9,0,4};
    int max = -1;
    for (int i = 0; i <=4; i++)
    {
        if ( max < arr[i] )
        max = arr[i];
    }
    printf("the maximum vale is %d", max   );
    return 0;
}
