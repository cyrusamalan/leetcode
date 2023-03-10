#include <stdio.h>

int removeDuplicates(int* nums, int numSize){
    if(numSize == 0){
        return 0;
    }
    int i = 0;
    for(int j = 1; j < numSize; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, numsSize);

    printf("The unique elements in the array are: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("The number of unique elements in the array is: %d\n", k);

    return 0;
}
