## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a frequency counting array of size 26 to represent the lowercase English alphabet. I iterated through both strings simultaneously, incrementing the count for characters in the first string and decrementing for the second. If the strings are valid anagrams, all values in the frequency array will cancel out to exactly zero.

### Complexity
- Time: $O(N)$ where $N$ is the length of the strings, because we iterate through the strings exactly once.
- Space: $O(1)$ because the size of the frequency array is fixed at 26, regardless of the input string length.

### Notes
This is much more efficient in C than sorting both strings first, which would take $O(N \log N)$ time.