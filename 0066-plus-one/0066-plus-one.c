/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// 1
int* change(int* digits, int* result, int actual, int* returnSize){
    if(digits[actual] == 9){
        result[actual+1] = 0;
        if(actual > 0){        
            return change(digits, result, actual-1, returnSize);
        }
        else{
            (*returnSize)++;
            result[0] = 1;
            return result;
        }
    }
    memcpy(result+1, digits, (actual+1)*sizeof(int));
    result[actual+1]++;
    return result+1;
}
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* result = malloc((digitsSize+1)*sizeof(int));
    *returnSize = digitsSize;
    return change(digits, result, digitsSize-1, returnSize);
}