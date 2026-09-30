## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I used a greedy, single-pass approach. As I iterate through the array of prices, I continuously keep track of the minimum price seen so far. At each step, I calculate the potential profit if I were to sell on that day (current price minus minimum price) and update the maximum profit if this potential profit is higher. 

### Complexity
- Time: $O(N)$ because the array is traversed exactly once.
- Space: $O(1)$ because only two integer variables (`minPrice` and `maxProf`) are used, regardless of the input size.

### Notes
This optimization avoids the $O(N^2)$ brute force approach of checking every pair. It essentially guarantees we are always looking backward for the cheapest buy day for any given sell day.