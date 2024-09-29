int findMin(int* nums, int numsSize) {
    int ip = 0;
    int ik = numsSize-1;
    int is;
    while(ip<ik){
        is = (ip+ik)/2;
        if(nums[is] > nums[ik]){
            ip = is+1;
        }
        else{
            ik = is;
        }
    }
    return nums[ip];    
}