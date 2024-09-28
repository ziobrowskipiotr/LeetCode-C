int searchInsert(int* nums, int numsSize, int target) {
    int cur = numsSize/2;
    int add = numsSize/2;
    while(cur != 0 && cur != numsSize-1){
        add /= 2;
        if(nums[cur] == target){
            return cur;
        }
        else if(nums[cur-1] < target){
            if(nums[cur+1] > target){
                return cur;
            }
            else{
                cur += add;
            }
        }
        else{
            cur -= add;
        }
    }
    if(cur == 0){
        return 0;
    }
    else{
        return numsSize;
    }
}