int majorityElement(int* nums, int numsSize) {
    int cand = nums[0],count=0;
    for( int i=0;i<numsSize;i++){
        if(count==0) cand = nums[i];
        count+= (nums[i]==cand) ? 1 : -1 ;

    }
    return cand ;
}
