//1
int searchInsert(int* nums, int numsSize, int target){
    int ip = 0;
    int ik = numsSize-1;
    int is = (ik+ip)/2;
    while(ip<=ik){
        if(nums[is] == target){
            return is;
        }
        else if(nums[is] > target){
            ik = is - 1;
        }
        else{
            ip = is + 1;
        }
        is = (ik+ip)/2;
    }
    return ip;
}