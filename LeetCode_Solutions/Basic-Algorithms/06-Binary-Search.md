## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used the standard iterative binary search algorithm. Two pointers (`left` and `right`) track the boundaries of the search space. I calculate the `mid` index and compare the target to `nums[mid]`. Depending on the result, I halve the search space by adjusting `left` or `right` until the target is found or the space is exhausted.

### Complexity
- Time: $O(\log N)$ because the search space is divided in half during each iteration.
- Space: $O(1)$ since we only use a few integer variables for pointers, regardless of the array size.

### Notes
Using `left + (right - left) / 2` to find the midpoint is a critical practice to avoid integer overflow that could happen if we used `(left + right) / 2` with very large array indices.