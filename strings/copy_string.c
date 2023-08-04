#include<stdio.h>
#include <string.h>
int main(){
    char s1[] = "College wallah";
    char * s2 = s1; //s2 is a shallow copy
    s1[0] = 'M';
    printf("%s\n", s2);
return 0;
}