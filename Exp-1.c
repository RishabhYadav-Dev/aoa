#include <stdio.h>
void insertion_sort(int arr[], int n) 
{ 
for (int i = 0; i < n; i++) 
{
int j = i;
while (j > 0 && arr[j - 1] > arr[j]) 
{ 
int temp = arr[j - 1];
arr[j - 1] = arr[j]; 
arr[j] = temp;
j--;
}
}
printf("After Using insertion sort: "); 
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
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
insertion_sort(arr , n); 
return 0;
}








// Algotithm
// INSERTION-SORT (A)
// 1 for j = 2 to A. length
// 2 key = A[j]
// 3 // Insert A[j] into the sorted sequence A [1...j-1]
// 4 i = j - 1
// 5 while i > 0 and A[i] > key
// 6 A [i+1] = A[i]
// 7 i = i - 1
// 8 A [i+1] = key
