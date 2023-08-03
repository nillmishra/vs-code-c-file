#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, y;
    float x, t;
    scanf("%d %d", &n, &y);
    scanf("%f %f", &x, &t);
    printf("%d %d\n",n+y, n-y);
    printf("%.1f %.1f", x+t, x-t);
    return 0;
}
