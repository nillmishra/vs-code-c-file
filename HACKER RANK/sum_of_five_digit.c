#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,s=0,d;
    scanf("%d", &n);
    for(i=n;i>0;i=i/10){
        d=i%10;
        s=s+d;
    }
    printf("%d",s);
    return 0;
}