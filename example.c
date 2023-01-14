#include "0-1knapsack.c"

int main() {
    int W = 50;
    int wt[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int n = sizeof(wt)/sizeof(wt[0]);
    printf("%d", knapSack(W, wt, val, n));

    return 0;
}
