#include<stdio.h>
#include <string.h>
int main(){
    char s1[] = "College Wallah";
    //deep copy
    char s2[] = "COllege Wallah";
    s2[0] = 'M';
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%p\n", s1);
    printf("%p\n", s2);

return 0;
}