#include <stdio.h>
#include<limits.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {3,7,9,0,4};
    int min = INT_MAX;
    for (int i = 0; i <=4; i++)
    {
        if ( min > arr[i] )
        min = arr[i];
    }
    printf("the minimum vale is %d", min   );
    return 0;
}
