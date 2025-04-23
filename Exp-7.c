#include <stdio.h> 
#include <string.h>

void lcs(char s1[], char s2[]) { int n = strlen(s1);
int m = strlen(s2); int dp[n + 1][m + 1];

for (int i = 0; i <= n; i++) { for (int j = 0; j <= m; j++) {
if (i == 0 || j == 0) dp[i][j] = 0;
else if (s1[i - 1] == s2[j - 1])
dp[i][j] = 1 + dp[i - 1][j - 1]; else
dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1];
}
}
int lcs_length = dp[n][m];
printf("The Length of Longest Common Subsequence is %d\n", lcs_length); char lcs_str[lcs_length + 1];
lcs_str[lcs_length] = '\0';
int i = n, j = m, index = lcs_length - 1; while (i > 0 && j > 0) {
if (s1[i - 1] == s2[j - 1]) {
lcs_str[index--] = s1[i - 1]; i--;
j--;
} else if (dp[i - 1][j] > dp[i][j - 1]) { i--;
} else { j--;
}
}
printf("The Longest Common Subsequence is: %s\n", lcs_str);
}
int main() {
char s1[100], s2[100]; printf("Enter first string: "); scanf("%s", s1);
printf("Enter second string: "); scanf("%s", s2);
lcs(s1, s2); return 0;
} 






// Algo
// LCS-LENGTH(X, Y) 
// 1 m <-- length[X] 
// 2 n <-- length[Y] 
// 3 for i <--1 to m 
// 4 do c [i, 0] <-- 0 
// 5 for j <-- 0 to n 
// 6 do c [0, j] <-- 0 
// 7 for i <-- 1 to m 
// 8 do for j <-- 1 to n 
// 9 do if xi = yj 
// 10 then c[i,j] <--- c[i - 1, j - 1] + 1
// 11 b [i, j] <--- " ↖ " //diagonal arrow 
// 12 else if c[ i - 1 ,j]>= c[i, j - 1] 
// 13 then c[i,j] <-- c[i - 1, j] 
// 14 b [i, j] <-- " ↑ "
// 15 else c[i,j] <-- c[i, j - 1] 
// 16 b [i, j] <-- " ← "
// 17 return c and b 
//   PRINT-LCS(b, X, i, j) 
// 1 if i = 0 or j = 0 
// 2 then return 
// 3 if b[i, j] = " ↖ " 
// 4 then PRINT-LCS(b, X, i - 1, j – 1) 
// 5 print xi; 
// 6 elseif b[i, j] = "↑" 
// 7 then PRINT-LCS(b, X, i - 1, j) 
// 8 else PRINT-LCS (b, X, i, j − 1)
