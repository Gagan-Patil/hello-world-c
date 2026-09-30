#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 5. Longest Common Prefix (LeetCode Function)
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    
    // Start by assuming the maximum possible prefix is the entire first string
    int prefixLen = strlen(strs[0]);
    
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        // Compare characters until a mismatch or end of string
        while (j < prefixLen && strs[i][j] != '\0' && strs[0][j] == strs[i][j]) {
            j++;
        }
        // Update the maximum valid prefix length
        prefixLen = j;
        
        // If there's no common prefix at all, we can stop early
        if (prefixLen == 0) break;
    }
    
    // Allocate memory for the result and copy the prefix
    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(result, strs[0], prefixLen);
    result[prefixLen] = '\0';
    
    return result;
}

// Local Testing Block
int main() {
    printf("--- Longest Common Prefix Local Tests ---\n");
    
    // Test Case 1: Typical case (common prefix exists)
    char* strs1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(strs1, 3);
    printf("Test 1: '%s'\n", res1);
    free(res1);

    // Test Case 2: Edge case (no common prefix)
    char* strs2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(strs2, 3);
    printf("Test 2: '%s'\n", res2);
    free(res2);

    return 0;
}