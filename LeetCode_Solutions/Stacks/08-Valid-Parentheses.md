## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used an array as a stack to keep track of opening brackets. Whenever I encounter an opening bracket, I push it onto the stack. When I encounter a closing bracket, I pop the top element from the stack and check if they form a valid pair. If they mismatch or the stack is empty prematurely, it's invalid. If the stack is completely empty at the end, the string is valid.

### Complexity
- Time: $O(N)$ where $N$ is the length of the string, as we iterate through it exactly once.
- Space: $O(N)$ in the worst case (e.g., all opening brackets "((((("), the stack will store all characters.

### Notes
In C, since there is no built-in Stack data structure, I simulated one using a simple character array (`char stack[len]`) and a `top` integer index.