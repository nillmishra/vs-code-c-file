#include <stdio.h>
int main(int argc, char const *argv[])
{
    char arr[3] = {'a', 'e', 'r'};
    int a[3]= {1,2,3};
    printf("%p \n", &a[0]);
    printf("%p \n", &a[1]);
    printf("%p \n", &a[2]); 
    printf("%c", arr[2]);
    return 0;
}
