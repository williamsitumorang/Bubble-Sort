#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {           
        for (j = 0; j < n - i - 1; j++) {   
            if (arr[j] > arr[j + 1]) {       
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {11, 9, 3, 2, 1, 6, 8, 4, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);   
    printf("Sebelum bubble sort:\n");
    printArray(arr, n);

    bubbleSort(arr, n); 

    printf("Sesudah bubble sort:\n");
    printArray(arr, n);
    return 0;
}
