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
    while(result[0] < 0 && result[1] < 0){
        is = (ip+ik)/2;
        if(nums[is] == target){
            int tab[3] = {ip, is, -1};
            //ip_left, ik_left, is_left
            while(result[0] < 0){
                if(nums[tab[0]] == target){
                    result[0] = tab[0];
                }
                tab[2] = (tab[0] + tab[1])/2;
                if(nums[tab[2]] < target){
                    tab[0] = tab[2]+1;
                }
                else{
                    tab[1] = tab[2]-1;
                }
            }
            tab[0] = is; //ip_right
            tab[1] = ik; //ik_right
            tab[2] = -1; //is_right
            while(result[1] < 0){
                if(nums[tab[1]] == target){
                    result[1] = tab[1];
                }
                tab[2] = (tab[0] + tab[1])/2;
                if(nums[tab[2]] > target){
                    tab[1] = tab[2]-1;
                }
                else{
                    tab[0] = tab[2]+1;
                }
            }
        }
        else{
            if(nums[ip] <= target && target <= nums[is]){
                ik = is;
            }
            else if(nums[is] <= target && target <= nums[ik]){
                ip = is+1;
            }
            else{
                break;
            }
        }
    }
    return result;
}