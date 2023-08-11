#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int i,j,max=0;
  for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
         if((i&j)>max&&(i&j)<k) max=i&j;
      }
  }
  printf("%d\n",max);
  int mxi=0;
  for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
         if((i|j)>mxi&&(i|j)<k) mxi=i|j;
      }
  }
  printf("%d\n",mxi);
  int maxi=0;
  for(i=1;i<n;i++){
      for(j=i+1;j<=n;j++){
         if((i^j)>maxi&&(i^j)<k) maxi=i^j;
      }
  }
  printf("%d\n",maxi);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}