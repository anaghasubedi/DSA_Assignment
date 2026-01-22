#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Bubble Sort
void bubbleSort(int arr[], int n, int *comparisons, int *swaps) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            (*comparisons)++;
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*swaps)++;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n, int *comparisons, int *swaps) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            (*comparisons)++;
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            (*swaps)++;
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int n, int *comparisons, int *swaps) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0) {
            (*comparisons)++;
            if(arr[j] > key) {
                arr[j+1] = arr[j];
                (*swaps)++;
                j--;
            } else {
                break;
            }
        }
        arr[j+1] = key;
    }
}

// Merge Sort 
void merge(int arr[], int l, int m, int r, int *comparisons, int *swaps) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++) L[i] = arr[l+i];
    for(int j = 0; j < n2; j++) R[j] = arr[m+1+j];

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2) {
        (*comparisons)++;
        if(L[i] <= R[j]) {
            arr[k++] = L[i++];
            (*swaps)++;
        } else {
            arr[k++] = R[j++];
            (*swaps)++;
        }
    }

    while(i < n1) {
        arr[k++] = L[i++];
        (*swaps)++;
    }

    while(j < n2) {
        arr[k++] = R[j++];
        (*swaps)++;
    }
}

void mergeSort(int arr[], int l, int r, int *comparisons, int *swaps) {
    if(l < r) {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m, comparisons, swaps);
        mergeSort(arr, m+1, r, comparisons, swaps);
        merge(arr, l, m, r, comparisons, swaps);
    }
}

int main() {
    int N;
    printf("Enter the number of integers: ");
    scanf("%d", &N);

    int arr[N];
    srand(time(0));

    for(int i = 0; i < N; i++) {
        arr[i] = rand() % 1000 + 1; 
    }

    printf("\nOriginal Array:\n");
    printArray(arr, N);

    printf("\nChoose a sorting algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    int choice;
    scanf("%d", &choice);

    int comparisons = 0, swaps = 0;
    int arr_copy[N];
    for(int i = 0; i < N; i++) arr_copy[i] = arr[i];

    switch(choice) {
        case 1: bubbleSort(arr_copy, N, &comparisons, &swaps); break;
        case 2: selectionSort(arr_copy, N, &comparisons, &swaps); break;
        case 3: insertionSort(arr_copy, N, &comparisons, &swaps); break;
        case 4: mergeSort(arr_copy, 0, N-1, &comparisons, &swaps); break;
        default: printf("Invalid choice!\n"); return 0;
    }

    printf("\nSorted Array:\n");
    printArray(arr_copy, N);

    printf("\nTotal comparisons: %d\n", comparisons);
    printf("Total swaps: %d\n", swaps);

    return 0;
}
