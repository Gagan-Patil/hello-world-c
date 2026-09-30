#include <stdio.h>

// 6. Binary Search (LeetCode Function)
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    
    while (left <= right) {
        // Calculate mid this way to prevent integer overflow
        int mid = left + (right - left) / 2; 
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

// Local Testing Block
int main() {
    printf("--- Binary Search Local Tests ---\n");
    
    // Test Case 1: Typical case (target exists)
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    printf("Test 1: Index = %d\n", search(nums1, 6, target1));

    // Test Case 2: Edge case (target does not exist)
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    printf("Test 2: Index = %d\n", search(nums2, 6, target2));

    return 0;
}