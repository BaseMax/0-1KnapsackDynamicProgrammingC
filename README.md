# 0-1 Knapsack Problem in C

This is an implementation of the 0-1 knapsack problem in C using dynamic programming. The problem consists of a set of items, each with a weight and a value, and a knapsack with a maximum weight capacity. The goal is to determine the subset of items that maximizes the total value of the knapsack without exceeding its weight capacity.

## How to use

To use this implementation, include the knapsack.c file in your project and call the knapSack() function with the following parameters:

- `W`: the maximum weight capacity of the knapsack
- `wt[]`: an array of weights for each item
- `val[]`: an array of values for each item
- `n`: the number of items

The function will return the maximum value that can be put in the knapsack without exceeding its weight capacity.

```
#include "0-1knapsack.c"

int main() {
    int W = 50;
    int wt[] = {10, 20, 30};
    int val[] = {60, 100, 120};
    int n = sizeof(wt)/sizeof(wt[0]);
    printf("%d", knapSack(W, wt, val, n));

    return 0;
}
```

### Note

This implementation uses dynamic memory allocation to create a 2D array with variable size, so please remember to free the allocated memory after using the function.

### Time and Space Complexity

The time complexity of this implementation is O(nW) where n is the number of items, W is the knapsack capacity. The space complexity is also O(nW) for the 2D array.

I hope this implementation helps you solve the 0-1 knapsack problem in your project. If you have any questions or suggestions, feel free to reach out.

Copyright (c) 2022, Max Base
