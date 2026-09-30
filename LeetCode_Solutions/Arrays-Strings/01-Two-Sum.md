## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
I used a nested loop (brute force) to iterate through the array. The outer loop picks a number, and the inner loop checks if any subsequent number adds up to the target.

### Complexity
- Time: $O(N^2)$ because we are checking every possible pair.
- Space: $O(1)$ excluding the memory allocated for the returned array, since we don't use any extra data structures.

### Notes
This is the simplest approach in C. To make it $O(N)$ time complexity, a hash map would be required, which is slightly more complex to implement in C compared to Python or C++.