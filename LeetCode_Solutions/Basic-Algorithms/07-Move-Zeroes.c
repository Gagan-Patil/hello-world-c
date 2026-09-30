#include <stdio.h>

// 7. Move Zeroes (LeetCode Function)
void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    
    // Pass 1: Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }
    
    // Pass 2: Fill the rest of the array with zeroes
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}

// Helper function for local testing
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");
}

// Local Testing Block
int main() {
    printf("--- Move Zeroes Local Tests ---\n");
    
    // Test Case 1: Typical case (mixed zeroes and non-zeroes)
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test 1: ");
    printArray(nums1, 5);

    // Test Case 2: Edge case (only zeroes)
    int nums2[] = {0, 0, 0};
    moveZeroes(nums2, 3);
    printf("Test 2: ");
    printArray(nums2, 3);

    return 0;
}