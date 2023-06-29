#include <stdio.h>

// Function to perform selection sort
void selectionSorting(int *arr, int n) {
    int i, j, minIndex, temp;
    
    for (i = 0; i < n - 1; i++) {
        // find the minimum element in the unsorted part of the array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap the found minimum element with the first element of the unsorted part
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    selectionSorting(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}

// #include <stdio.h>

// void insertionSorting(int *arr, int len) {
//     int i, j, temp;
//     for (i = 1; i < len; i++) {
//         temp = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > temp) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//     }
// }

// int main() {
//     int arr[] = {8, 5, 2, 6, 4};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     insertionSorting(arr, len);
//     printf("Sorted list: ");
//     for (int i = 0; i < len; i++) {
//         printf("%d", arr[i]);
//         if (i != len - 1) {
//             printf(", ");
//         }
//     }
//     return 0;
// }
