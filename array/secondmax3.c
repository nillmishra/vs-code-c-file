#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int arr[5] = {5,4,3,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <=4; i++)
    {
        if ( max < arr[i] ){
        smax = max;
        max = arr[i];
        }
        else if(smax < arr[i])
        {
            smax = arr[i];
            
        }
    }
    printf("the maximum value is %d", smax);
    return 0;
}
// decreasing order mai error de dega
// you are absolutely free to this things