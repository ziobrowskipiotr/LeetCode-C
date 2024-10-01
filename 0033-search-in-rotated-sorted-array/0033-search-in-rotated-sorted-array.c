int search(int* nums, int numsSize, int target) {
    int ip = 0;
    int ik = numsSize-1;
    int is;
    while(ip<=ik){
        is = (ip+ik)/2;
        if(nums[is] == target){
            return is;
        }
        if(nums[is] >= nums[ip]){
            if(nums[ip] <= target && target <= nums[is]){
                ik = is;
            }
            else{
                ip = is+1;
            }
        }
        else{
            if(nums[is] <= target && target <= nums[ik]){
                ip = is;
            }
            else{
                ik = is-1;
            }
        }
    }
    return -1;
}