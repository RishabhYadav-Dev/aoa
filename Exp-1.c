#include <stdio.h>

void selectionSort(int arr[], int n){ int min, i , j;
for(i = 0; i < n-1; i++){ min = i;
for(j = i+1; j < n; j++){ if(arr[j] < arr[min]){
min = j;
}
}
int temp = arr[i]; arr[i] = arr[min]; arr[min] = temp;
}
}

int main() { int n;
printf("Enter the number of Elements: "); 
scanf("%d", &n);
int arr[n];
printf("Array input: "); 
for(int i = 0; i < n; i++){ 
scanf("%d", &arr[i]);
}
selectionSort(arr , n);
printf("Resulted Sorted array using Selection Sort Approach: "); for(int i = 0; i < n; i++){
printf("%d ", arr[i]);
}
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
