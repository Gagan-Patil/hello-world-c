#include <stdio.h>
#include <stdbool.h>

// 3. Valid Anagram (LeetCode Function)
bool isAnagram(char* s, char* t) {
    int counts[26] = {0};
    int i = 0;
    
    // Count frequencies of characters in both strings
    while (s[i] != '\0' && t[i] != '\0') {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
        i++;
    }
    
    // If strings are of different lengths
    if (s[i] != '\0' || t[i] != '\0') {
        return false;
    }
    
    // Check if all counts are zero
    for (int j = 0; j < 26; j++) {
        if (counts[j] != 0) {
            return false;
        }
    }
    
    return true;
}

// Local Testing Block
int main() {
    printf("--- Valid Anagram Local Tests ---\n");
    
    // Test Case 1: Typical case (valid anagram)
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 ('%s', '%s'): %s\n", s1, t1, isAnagram(s1, t1) ? "True" : "False");

    // Test Case 2: Edge case (different lengths / not anagram)
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 ('%s', '%s'): %s\n", s2, t2, isAnagram(s2, t2) ? "True" : "False");

    return 0;
}