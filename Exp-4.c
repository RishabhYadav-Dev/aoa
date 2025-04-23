#include <stdio.h>
int partition(int arr[], int low, int high) { int pivot = arr[low];
int i = low, j = high; while (i < j) {
while (arr[i] <= pivot && i < high) i++; while (arr[j] > pivot && j > low) j--;
if (i < j) {
int temp = arr[i]; arr[i] = arr[j];
arr[j] = temp;
}
}
int temp = arr[low]; arr[low] = arr[j];
arr[j] = temp; return j;
}
void quickSort(int arr[], int low, int high) { if (low < high) {
int index = partition(arr, low, high); quickSort(arr, low, index - 1); quickSort(arr, index + 1, high);
}
}
int main() { int n;
printf("Enter the number of elements: "); scanf("%d", &n);
int arr[n];
printf("Array Input: ", n); for (int i = 0; i < n; i++) { scanf("%d", &arr[i]);
}
quickSort(arr, 0, n - 1);
printf("Resulted Sorted array using Quick Sort Approach: "); for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n"); return 0;
           }


Algo
