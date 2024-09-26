/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    *returnSize = (*matrixColSize) * matrixSize;
    int* result = malloc(*returnSize * sizeof(int));
    int tab[7] = {0, 0, *matrixColSize, matrixSize, -1, 0, 0};
    // j, i, jMax, iMax, jMin, iMin, curr

    while(tab[6] < *returnSize){
        while(tab[6] < *returnSize && tab[0] < tab[2]){
            result[tab[6]] = matrix[tab[1]][tab[0]];
            tab[6]++;
            tab[0]++;
        }
        tab[0]--;
        tab[1]++;
        while(tab[6] < *returnSize && tab[1] < tab[3]){
            result[tab[6]] = matrix[tab[1]][tab[0]];
            tab[6]++;
            tab[1]++;
        }
        tab[1]--;
        tab[0]--;
        while(tab[6] < *returnSize && tab[0] > tab[4]){
            result[tab[6]] = matrix[tab[1]][tab[0]];
            tab[6]++;
            tab[0]--;
        }
        tab[0]++;
        tab[1]--;
        while(tab[6] < *returnSize && tab[1] > tab[5]){
            result[tab[6]] = matrix[tab[1]][tab[0]];
            tab[6]++;
            tab[1]--;
        }
        tab[1]++;
        tab[0]++;

        tab[2]--;
        tab[3]--;
        tab[4]++;
        tab[5]++;
    }
    return result;

}