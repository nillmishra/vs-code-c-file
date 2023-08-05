#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] ={0,8,9,6,1};
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    //selection sort
    int n = 5;
    for (int i = 0; i< n-1; i++){
        int min = INT_MAX;
        int mindex = -1;
        for(int j = i; j < n; j++){
            if(min > arr[j]){
                min = arr[j]; 
                mindex = j;
            }
        }
        int temp = arr[mindex];
        arr[mindex] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}