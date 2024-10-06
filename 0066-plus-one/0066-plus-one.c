/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* change(int* digits, int actual, int* returnSize){
    if(digits[actual] == 9){
        digits[actual] = 0;
        if(actual == 0){
            (*returnSize)++;
            int* digits_new = malloc(*returnSize*sizeof(int));
            digits_new[0] = 1;
            memcpy(digits_new + 1, digits, ((*returnSize)-1)*sizeof(int));
            free(digits);
            return digits_new;
        }
        else{        
            change(digits, actual-1, returnSize);
        }
    }
    digits[actual]++;
    return digits;
}
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    return change(digits, digitsSize-1, returnSize);
}