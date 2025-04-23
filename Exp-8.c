#include <stdio.h>
#include <stdlib.h>

int place(int pos); 
void print_sol(int n); 
void queen(int n);
int a[30], count = 0; 
int place(int pos) {
for (int i = 1; i < pos; i++) {
if (a[i] == a[pos] || abs(a[i] - a[pos]) == abs(i - pos)) 
{ 
  return 0;
}
}
return 1;
}

void print_sol(int n)
{ 
count++;
printf("\n\nSolution #%d:\n", count); 
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n; j++) 
{ 
if (a[i] == j)
printf("Q\t"); 
else
printf("*\t");
}
printf("\n");
}
}

void queen(int n) 
{ 
int k = 1;
a[k] = 0;
while (k != 0) {
a[k] = a[k] + 1;
while ((a[k] <= n) && !place(k)) a[k]++;
if (a[k] <= n) 
{ 
if (k == n)
print_sol(n); 
else 
{
k++;
a[k] = 0; 
}
} else { k--;
}
}
}
int main() { int n;
printf("Enter the number of Queens: "); scanf("%d", &n);
queen(n);
printf("\nTotal solutions = %d\n", count); return 0;
}





// Algo
// 1. Place the first queen in the left upper corner of the table.
// 2. Save the attacked positions.
// 3. Move to the next queen (which can only be placed to the next line).
// 4. Search for a valid position. If there is one go to step 8.
// 5. There is not a valid position for the queen. Delete it (the x coordinate is 0).
// 6. Move to the previous queen.
// 7. Go to step 4.
// 8. Place it to the first valid position.
// 9. Save the attacked positions.
// 10. If the queen processed is the last stop otherwise go to step 3.
