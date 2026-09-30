#include <stdio.h>

// 2. Reverse String (LeetCode Function)
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

// Local Testing Block
int main() {
    printf("--- Reverse String Local Tests ---\n");
    
    // Test Case 1: Typical case (odd length)
    char s1[] = {'h', 'e', 'l', 'l', 'o', '\0'}; 
    printf("Original 1: %s\n", s1);
    reverseString(s1, 5);
    printf("Reversed 1: %s\n", s1);

    // Test Case 2: Edge case (single character)
    char s2[] = {'H', '\0'};
    printf("Original 2: %s\n", s2);
    reverseString(s2, 1);
    printf("Reversed 2: %s\n", s2);

    return 0;
}