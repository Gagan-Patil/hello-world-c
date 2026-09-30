## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
I used the two-pointer technique. One pointer starts at the beginning (`left`) and the other at the end (`right`). The characters at these positions are swapped, and the pointers move toward the center until they meet.

### Complexity
- Time: $O(N)$ where $N$ is the number of characters in the string, because we iterate through half the array.
- Space: $O(1)$ since the array is modified in-place using only a temporary variable for swapping.

### Notes
This is a standard in-place array manipulation approach. The two-pointer method is highly efficient and avoids the need for allocating any extra memory.