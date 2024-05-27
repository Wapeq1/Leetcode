#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* indices = malloc(2 * sizeof(int));
    *returnSize = 2;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }
    int hashTableSize = max - min + 1;
    int* hashTable = calloc(hashTableSize, sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int hashIndex = nums[i] - min;
        if (complement >= min && complement <= max && hashTable[complement - min] != 0) {
            indices[0] = hashTable[complement - min] - 1;
            indices[1] = i;
            return indices;
        }
        hashTable[hashIndex] = i + 1;
    }
    return NULL;
}