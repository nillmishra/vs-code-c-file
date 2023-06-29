#include<stdio.h>
int main(int argc, char const *argv[])
{
    char arr[]= "AEC Wallah is Best.";
    int i =0;
    while(arr[i]!='\0')
    {
        printf("%c", arr[i]);
        printf("%c", i[arr]);
        printf("%c", *(arr+i));
        printf("%c", *(i+arr));
        i++;
    }
    return 0;
}
