#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[6]= {1,3,5,7,9,4};
    int evensum =0;
    int oddsum = 0;
    for (int i = 0; i <=5; i++)
    {
        if (i%2==0)
        {
            evensum = evensum + arr[i];
        }
        else
        {
            oddsum = oddsum + arr[i];
        }
        
    }
    printf("%d", evensum - oddsum);
    
    return 0;
}
