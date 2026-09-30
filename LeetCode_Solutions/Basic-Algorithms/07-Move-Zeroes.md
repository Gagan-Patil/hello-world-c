## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
I used a two-pointer approach (tracking an `insertPos`). I iterated through the array, placing every non-zero element I found at `insertPos` and then incrementing it. After looking at all elements, all non-zeroes were at the front in their original order. Finally, I filled the remaining positions from `insertPos` to the end of the array with zeroes.

### Complexity
- Time: $O(N)$ because the array is traversed sequentially, avoiding nested loops.
- Space: $O(1)$ because the modifications are done entirely in-place.

### Notes
This approach is significantly more optimal than a Bubble Sort variant, as it minimizes the number of write operations and shifts instead of constantly swapping adjacent elements.