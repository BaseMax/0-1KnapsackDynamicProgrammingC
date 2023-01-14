#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int knapSack(int W, int wt[], int val[], int n)
{
    int **dp = (int **) malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        dp[i] = (int *) malloc((W + 1) * sizeof(int));
    }

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (wt[i-1] <= w) {
                dp[i][w] = MAX(val[i-1] + dp[i-1][w-wt[i-1]], dp[i-1][w]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    int result = dp[n][W];

    for (int i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);

    return result;
}

int main()
{
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;

    int n = sizeof(val)/sizeof(val[0]);
    printf("%d\n", knapSack(W, wt, val, n));

    return 0;
}
