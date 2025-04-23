#include <stdio.h>

void selectionSort(int arr[], int n)
{ 
int min, i , j;
for(i = 0; i < n-1; i++){
min = i;
for(j = i+1; j < n; j++){
if(arr[j] < arr[min]){
min = j;
}
}
int temp = arr[i]; arr[i] = arr[min]; 
arr[min] = temp;
}
}

int main() { 
int n;
printf("Enter the number of Elements: "); 
scanf("%d", &n);
int arr[n];
printf("Array input: "); for(int i = 0; i < n; i++)
{ 
scanf("%d", &arr[i]);
}
selectionSort(arr , n);
printf("Resulted Sorted array using Selection Sort Approach: "); 
for(int i = 0; i < n; i++){
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
