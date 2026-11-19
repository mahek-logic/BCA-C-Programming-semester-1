int maxSubArray(int* nums, int numsSize) {
    int cur=nums[0],best=nums[0];
    for(int i=1;i<numsSize;i++){
        cur=( cur+ nums[i]> nums[i]) ? cur+ nums[i] : nums[i];
        if( cur > best ) best= cur ;
    }
    return best ;
}
