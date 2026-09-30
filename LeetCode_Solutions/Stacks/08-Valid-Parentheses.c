#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// 8. Valid Parentheses (LeetCode Function)
bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) return false; // Odd length strings cannot be valid
    
    char* stack = malloc((size_t)(len > 0 ? len : 1) * sizeof(*stack));
    if (stack == NULL) return false;
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c; // Push opening brackets
        } else {
            if (top == -1) {
                free(stack);
                return false; // Stack empty, meaning no matching opening bracket
            }
            
            char open = stack[top--]; // Pop the top bracket
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false; // Mismatched brackets
            }
        }
    }
    
    bool valid = top == -1; // True if stack is perfectly empty at the end
    free(stack);
    return valid;
}

// Local Testing Block
int main() {
    printf("--- Valid Parentheses Local Tests ---\n");
    
    // Test Case 1: Typical case (valid matching brackets)
    char s1[] = "()[]{}";
    printf("Test 1 ('%s'): %s\n", s1, isValid(s1) ? "True" : "False");

    // Test Case 2: Edge case (mismatched brackets)
    char s2[] = "(]";
    printf("Test 2 ('%s'): %s\n", s2, isValid(s2) ? "True" : "False");

    return 0;
}