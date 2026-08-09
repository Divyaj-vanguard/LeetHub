/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    *returnSize=2;
    int *arr=(int*)malloc(numsSize*sizeof(int));
for (i=0;i<numsSize;i++){
    for (j=numsSize-1;j>=0;j--){
        if(nums[i]+nums[j]==target && i!=j){
            arr[0]=i;
            arr[1]=j;
        }
    }

}
return arr;
}