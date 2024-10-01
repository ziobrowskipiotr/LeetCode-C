/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = malloc(2 * sizeof(int));
    result[0] = -1;
    result[1] = -1;
    if(numsSize == 0){
        return result;
    }
    int ip = 0;
    int ik = numsSize-1;
    int is;
    while(true){
        is = (ip+ik)/2;
        if(nums[is] == target){
            int ip_left = ip;
            int ik_left = is;
            int is_left;
            int ip_right = is;
            int ik_right = ik;
            int is_right;
            while(true){
                if(nums[ip_left] == target){
                    result[0] = ip_left;
                    break;
                }
                is_left = (ip_left + ik_left)/2;
                if(nums[is_left] < target){
                    ip_left = is_left+1;
                }
                else{
                    ik_left = is_left-1;
                }
            }
            while(true){
                if(nums[ik_right] == target){
                    result[1] = ik_right;
                    break;
                }
                is_right = (ip_right + ik_right)/2;
                if(nums[is_right] > target){
                    ik_right = is_right-1;
                }
                else{
                    ip_right = is_right+1;
                }
            }
            break;
        }
        else{
            if(nums[ip] <= target && target <= nums[is]){
                ik = is;
            }
            else if(nums[is] <= target && target <= nums[ik]){
                ip = is+1;
            }
            else{
                printf("tu");
                break;
            }
        }
    }
    return result;
}