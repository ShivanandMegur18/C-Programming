#include <stdio.h>

int minOperations(int* nums, int numsSize, int k) {
    int sum = 0;

    // Calculate sum
    for(int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }

    // Return remainder
    return sum % k;
}

int main() {
    int n, k;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    // Call function
    int result = minOperations(nums, n, k);

    // Output result
    printf("Minimum operations: %d\n", result);

    return 0;
}