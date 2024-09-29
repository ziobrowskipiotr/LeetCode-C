int findPeakElement(int* nums, int numsSize) {
    int ip = 0;
    int ik = numsSize-1;
    int is;
    while(ip<ik){
        is = (ip+ik)/2;
        if(nums[is]>nums[is+1]){
            if(is>0 && nums[is]>nums[is-1]){
                return is;
            }
            else{
                ik = is-1;
            }
        }
        else{
            ip = is+1;
        }
    }
    return ip;
}