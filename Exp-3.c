#include <stdio.h>
void combine(int arr[], int low, int mid, int high) 
{ 
int i = low, j = mid + 1, k = 0;
int temp[high - low + 1];
while (i <= mid && j <= high) 
{ 
if (arr[i] <= arr[j]) {
temp[k++] = arr[i++];
} 
else {
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
void mergeSort(int arr[], int low, int high) 
{ 
if (low < high) 
{
int mid = (low + high) / 2; 
mergeSort(arr, low, mid);
mergeSort(arr, mid + 1, high); 
combine(arr, low, mid, high);
}
}
int main() { 
int n;
printf("Enter the number of Elements: "); 
scanf("%d", &n);
int arr[n];
printf("Array input: "); 
for(int i = 0; i < n; i++){ 
scanf("%d", &arr[i]);
}
mergeSort(arr, 0, n-1);
printf("Resulted Sorted array using Merge Sort Approach: "); 
for(int i = 0; i < n; i++){
printf("%d ", arr[i]);
}
return 0;
} 




// Algo
// MERGE (A, p, q, r )
// 1. n1 ← q − p + 1
// 2. n2 ← r − q
// 3. Create arrays L[0 . . n1 + 1] and R[0 . . n2 + 1]
// 4. FOR i ← 0 TO n1

// 5. DO L[i] ← A[p + i]
// 6. FOR j ← 0 TO n2
// 7. DO R[j] ← A[q + j+1 ]
// 8. L[n1 + 1] ← ∞
// 9. R[n2 + 1] ← ∞
// 10. i ← 0
// 11. j ← 0
// 12. FOR k ← p TO r
// 13. DO IF L[i ] ≤ R[ j]
// 14. THEN A[k] ← L[i]
// 15. i ← i + 1
// 16. ELSE A[k] ← R[j]
// 17. j ← j + 1
