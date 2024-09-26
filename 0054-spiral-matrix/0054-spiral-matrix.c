/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    *returnSize = (*matrixColSize) * matrixSize;
    int jMax = *matrixColSize;
    int iMax = matrixSize;
    int jMin = -1;
    int iMin = 0;
    int* result = malloc(*returnSize * sizeof(int));
    int curr = 0;
    int i = 0;
    int j = 0;

    while(curr < *returnSize){
        while(curr < *returnSize && j < jMax){
            printf("%d\n", matrix[i][j]);
            result[curr] = matrix[i][j];
            curr++;
            j++;
        }
        j--;
        i++;
        while(curr < *returnSize && i < iMax){
            printf("%d\n", matrix[i][j]);
            result[curr] = matrix[i][j];
            curr++;
            i++;
        }
        i--;
        j--;
        while(curr < *returnSize && j > jMin){
            printf("%d\n", matrix[i][j]);
            result[curr] = matrix[i][j];
            curr++;
            j--;
        }
        j++;
        i--;
        while(curr < *returnSize && i > iMin){
            printf("%d\n", matrix[i][j]);
            result[curr] = matrix[i][j];
            curr++;
            i--;
        }
        i++;
        j++;

        jMax--;
        iMax--;
        jMin++;
        iMin++;
    }

    return result;
}