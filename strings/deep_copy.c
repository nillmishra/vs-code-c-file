#include<stdio.h>
#include <string.h>
int main(){
    char *s1 = "Physics Wallah";
    //deep copy
    char* s2;
    s2 = s1;
    s2 = "College Wallah";
    printf("%s\n", s1);
    printf("%s\n", s2);

return 0;
}