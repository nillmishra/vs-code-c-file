#include<stdio.h>
#include <string.h>
int main(){
    char str[] = "College wallah";
    char* ptr = str;
    *ptr = 'P';
    printf("%s\n", str);
    printf("%c\n", *str);
    ptr++;
    printf("%c\n", *str);
    printf("%s\n", str);
return 0;
}
//for individiual it will work