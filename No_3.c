#include <stdio.h>

void printArray(int arr[], int n);

void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped; 

    for (i = 0; i < n - 1; i++) {
        swapped = 0;  
        printf("Pass %d:\n", i + 1);

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;  
            }
            printf("Iterasi %d.%d: ", i + 1, j + 1);
            printArray(arr, n);
        }

        if (swapped == 0) {
            printf("Array sudah terurut setelah Pass %d.\n", i + 1);
            break;
        }

        printf("\n");
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
    printf("Array sebelum diurutkan:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Array setelah diurutkan:\n");
    printArray(arr, n);

    return 0;
}
