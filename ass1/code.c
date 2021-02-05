#include <stdio.h>
#include<stdlib.h>
#include <time.h>

// clock_t start, end;
// double cpu_time_used;

int arr[10000];
int matrix[100][100];

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l >= r) {return;}
    int m = (l + r - 1) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
int main() {
    // start = clock();
    /* Do the work. */
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            //random numbers between 0-1000
            matrix[i][j] = rand() % 100 + 1 ;
        }
    }
    printf("Initial matrix is : \n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int index = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[index++] = matrix[i][j];
        }
    }
    // Sorting the array
    mergeSort(arr, 0, 100 - 1);
    index = 0;
    printf("\nSorted matrix is : \n ");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = arr[index++];
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // printf("%f", cpu_time_used);
}