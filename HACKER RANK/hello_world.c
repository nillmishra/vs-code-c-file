#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char str[100];
    scanf("%[^\n]%*c", &str);
  	
    printf("Hello, World!\n");
    printf("%s", str);
    return 0;
}
