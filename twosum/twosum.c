#include <stdio.h>
#include <malloc.h>
#include "twosum.h"

int main() {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int numsSize = sizeof(nums) / sizeof(int);
  int returnSize = 0;

  int* twoSumResult = twoSum(nums, numsSize, target, &returnSize);
  printf("[%d %d]\n", twoSumResult[0], twoSumResult[1]);
  return 0; 
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
 		
 		*returnSize = 2;

    int* result = (int *)malloc(sizeof(int)*(*returnSize));
    int i, j;
  
    for (i=0; i<numsSize-1; i++) {
      
      for (j=i+1; j<numsSize; j++) {
        
    		if ((nums[i] + nums[j]) == target) {
          
    			result[0] = i;
    			result[1] = j;
          
          // printf("%d %d", result[0], result[1]);
          
    			return result;
    		}
    	}
    }
    return result;

}