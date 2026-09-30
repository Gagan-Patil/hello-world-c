#include <stdio.h>

// 4. Best Time to Buy and Sell Stock (LeetCode Function)
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;
    
    int minPrice = prices[0];
    int maxProf = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i]; // Found a cheaper day to buy
        } else if (prices[i] - minPrice > maxProf) {
            maxProf = prices[i] - minPrice; // Found a better day to sell
        }
    }
    
    return maxProf;
}

// Local Testing Block
int main() {
    printf("--- Buy and Sell Stock Local Tests ---\n");
    
    // Test Case 1: Typical case (profit possible)
    int prices1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1: Maximum Profit = %d\n", maxProfit(prices1, 6));

    // Test Case 2: Edge case (prices strictly descending, no profit)
    int prices2[] = {7, 6, 4, 3, 1};
    printf("Test 2: Maximum Profit = %d\n", maxProfit(prices2, 5));

    return 0;
}