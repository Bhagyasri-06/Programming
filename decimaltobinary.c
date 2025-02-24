#include <stdio.h>

// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;

    // Taking input for the number of elements
    scanf("%d", &N);

    // Constraint check
    if (N < 1 || N > 100000) {
        printf("Invalid Input\n");
        return 1;
    }

    int arr[N];

    // Taking input for the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    bubbleSort(arr, N);

    // Printing the sorted array
    printArray(arr, N);

    return 0;
}
