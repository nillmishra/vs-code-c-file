// single loop

#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {3,7,9,0,4};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <=4; i++)
    {
        if ( max < arr[i] ){
        smax = max;
        max = arr[i];
        }
    }
    printf("the maximum value is %d", smax);
    return 0;
}