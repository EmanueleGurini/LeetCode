#include <stdio.h>
#include <malloc.h>
#include "twosum.h"

int main() {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int numsSize = sizeof(nums) / sizeof(int);
  int returnSize = 0;

  int* twoSumResult = twoSum(nums, numsSize, target, &returnSize);
  printf("[%d %d]", twoSumResult[0], twoSumResult[1]);

  return 0; 
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
  
    int* result = (int *)malloc(sizeof(int)*2);
    int i, j;
    int a, b;
  
    for (i=0; i<numsSize-1; i++) {
      
      a = nums[i];
    	
      for (j=i+1; j<numsSize; j++) {
        
        b = nums[j];
        
    		if ((a + b) == target) {
          
    			result[0] = i;
    			result[1] = j;
          
          // printf("%d %d", result[0], result[1]);
          
    			return result;
    		}
    	}
    }
    return result;

}