int searchInsert(int* nums, int numsSize, int target){
    int ip = 0;
    int ik = numsSize-1;
    int is = (ik+ip)/2;
    while(ip<=ik){
        printf("is: %d\n, ip: %d\n, ik: %d\n", is, ip, ik);
        if(nums[is] == target){
            printf("1, %d\n", is);
            return is;
        }
        else if(nums[is] > target){
            if(is-1<ip){
                return is;
            }
            else if(nums[is-1] < target){
                printf("2, %d\n", is);
                return is;
            }
            else{
                ik = is - 1;
            }
        }
        else{
            if(is+1 > ik){
                return is+1;
            }
            else if(nums[is+1] > target){
                printf("3, %d\n", is);
                return is+1;
            }
            else{
                ip = is + 1;
            }
        }
        is = (ik+ip)/2;
    }
    return -1;
}
