#include <stdio.h> 
struct Item {
int value, weight;
};
void sortItems(struct Item arr[], int n) { for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
double ratio1 = (double)arr[j].value / arr[j].weight;
double ratio2 = (double)arr[j + 1].value / arr[j + 1].weight; if (ratio1 < ratio2) {
struct Item temp = arr[j]; arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
double fractionalKnapsack(int W, struct Item arr[], int n) { sortItems(arr, n);
double maxValue = 0.0; for (int i = 0; i < n; i++) {
if (W >= arr[i].weight) { W -= arr[i].weight;
maxValue += arr[i].value;
} else {
maxValue += ((double)arr[i].value / arr[i].weight) * W; break;
}
}
return maxValue;
}
int main() { int n, W;
printf("Enter number of items: "); scanf("%d", &n);
struct Item arr[n];
printf("Enter total weight capacity: "); scanf("%d", &W);
printf("Enter values of items: "); for (int i = 0; i < n; i++) {
scanf("%d", &arr[i].value);
}
printf("Enter weights of items: "); for (int i = 0; i < n; i++) { 
scanf("%d", &arr[i].weight);
}
printf("Maximum value in Knapsack = %.2f\n", fractionalKnapsack(W, arr, n)); return 0;
}




// Algo
// Fractional Knapsack (Array W, Array V, int M) 
// 1. for i <-- 1 to size (V) 
// 2. calculate cost[i] <- v[i] / W[i] 
// 3. Sort-Descending (cost) 
// 4. i <-- 1
// 5. while (i <= size (V)) 
// 6. if W[i] <= M 
// 7. M <-- M - W[i] 
// 8. total <-- total + V[i];
// 9. if W[i] > M 
// 10. i <-- i+1
