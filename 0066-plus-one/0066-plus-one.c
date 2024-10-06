/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//1
int* change(int* digits, int* digitsSize, int* returnSize){
    if(digits[*digitsSize] == 9){
        digits[*digitsSize] = 0;
        if(*digitsSize == 0){
            (*returnSize)++;
            int* digits_new = malloc(*returnSize*sizeof(int));
            digits_new[0] = 1;
            memcpy(digits_new + 1, digits, ((*returnSize)-1)*sizeof(int));
            free(digits);
            return digits_new;
        }
        else{
            (*digitsSize)--;
            return change(digits, digitsSize, returnSize);
        }
    }
    digits[*digitsSize]++;
    return digits;
}
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    digitsSize--;
    return change(digits, &digitsSize, returnSize);
}