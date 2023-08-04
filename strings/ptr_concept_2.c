#include<stdio.h>
#include <string.h>
int main(){
    char * ptr = "College wallah";
    ptr = "Physics Wallah";
    printf("%s\n", ptr);
    printf("%c\n", *ptr);
    ptr++;
    printf("%c", *ptr);
return 0;
}

//in normal initillisation, we can modify individual character but not the entire string
//but in pointer initillisation, we can modify entire string but not the individual character.