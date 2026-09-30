#include <stdio.h>
#include <stdlib.h>

// 1. Two Sum (LeetCode Function)
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

// Local Testing Block
int main() {
    printf("--- Two Sum Local Tests ---\n");
    
    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1;
    int* res1 = twoSum(nums1, 4, target1, &returnSize1);
    if(returnSize1 > 0) printf("Test 1: [%d, %d]\n", res1[0], res1[1]);
    free(res1);

    // Test Case 2: Edge case (small array)
    int nums2[] = {3, 3};
    int target2 = 6;
    int returnSize2;
    int* res2 = twoSum(nums2, 2, target2, &returnSize2);
    if(returnSize2 > 0) printf("Test 2: [%d, %d]\n", res2[0], res2[1]);
    free(res2);

    return 0;
}