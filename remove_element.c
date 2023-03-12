#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int i, j;
    for (i = 0, j = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j++] = nums[i];
        }
    }
    return j;
}


int main() {
    int nums[] = {3, 2, 2, 3, 4};
    int numsSize = 5;
    int val = 3;
    
    int k = removeElement(nums, numsSize, val);
    
    printf("After removing %d from the array, the array is: ", val);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("The length of the modified array is: %d\n", k);
    
    return 0;
}
