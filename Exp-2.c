#include <stdio.h>
void combine(int arr[], int low, int mid, int high) { int i = low, j = mid + 1, k = 0;
int temp[high - low + 1];
while (i <= mid && j <= high) { if (arr[i] <= arr[j]) {
temp[k++] = arr[i++];
} else {
temp[k++] = arr[j++];
}
}
while (i <= mid) {
temp[k++] = arr[i++];
}
while (j <= high) {
temp[k++] = arr[j++];
}
for (int i = 0; i < k; i++) { arr[low + i] = temp[i];
}
}
void mergeSort(int arr[], int low, int high) { if (low < high) {
int mid = (low + high) / 2; mergeSort(arr, low, mid); mergeSort(arr, mid + 1, high); combine(arr, low, mid, high);
}
}
int main() { int n;
printf("Enter the number of Elements: "); scanf("%d", &n);
int arr[n];
printf("Array input: "); for(int i = 0; i < n; i++){ scanf("%d", &arr[i]);
}
mergeSort(arr, 0, n-1);
printf("Resulted Sorted array using Merge Sort Approach: "); for(int i = 0; i < n; i++){
printf("%d ", arr[i]);
}
return 0;
} 


// Algo
// 1. k ← length [A]
// 2. for j ←1 to n-1
// 3. smallest ← j
// 4. for I ← j + 1 to k
// 5. if A [i] < A [ smallest]
// 6. then smallest ← i
// 7. exchange (A [j], A [smallest])
