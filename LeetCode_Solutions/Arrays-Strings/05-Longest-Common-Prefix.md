## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I used horizontal scanning. I took the first string as the initial "prefix" and compared it against the next string character by character. I truncated the prefix length whenever a mismatch occurred. I repeated this against all strings until the prefix was either fully verified or reduced to an empty string.

### Complexity
- Time: $O(S)$ where $S$ is the sum of all characters in all strings. In the worst case, all strings are identical.
- Space: $O(1)$ auxiliary space, since we only allocate memory at the end to return the final string.

### Notes
It's important to track the `prefixLen` as an integer rather than modifying the first string directly in memory, as some environments strictly enforce read-only string literals.