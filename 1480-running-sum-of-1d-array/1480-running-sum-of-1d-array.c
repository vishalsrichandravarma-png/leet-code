
int* runningSum(int* nums, int numsSize, int* returnSize){
    int sum=0;
    *returnSize = numsSize; //size for the new array to be returned
    
for(int i=1;i<numsSize;i++)
    {
        nums[i]+=nums[i-1];
    }
    return nums;
}