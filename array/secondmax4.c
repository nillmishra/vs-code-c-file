#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int arr[7] = {1,2,3,4,4,5,6};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <=4; i++)
    {
        if ( max < arr[i] ){
        smax = max;
        max = arr[i];
        }
    else if(smax < arr[i] && max!= arr[i])
        {
            smax = arr[i];
            
        }
    }
    printf("the maximum value is %d", smax);
    return 0;
}