#include<stdio.h>
#include <string.h>
int main(){
    char str[12] = "Physics";
    printf("%s\n", str);
    //2nd index p l
    for(int i = 6; i>=2; i--){
        str[i+1] = str[i];
    }
    str[2] ='K';
    printf("%s\n", str);

return 0;
}