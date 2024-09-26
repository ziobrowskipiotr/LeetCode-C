void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int temp;
    int i = 0;
    while(i<*matrixColSize){
        for(int j=0; j<matrixSize; j++){
            temp = matrix[*matrixColSize-1-j][*matrixColSize-1-i];
            matrix[*matrixColSize-1-j][*matrixColSize-1-i] = matrix[i][j];
            matrix[i][j] = temp;
        }
        matrixSize--;
        i++;
    }
    int* temp1;
    i = 0;
    while(i<*matrixColSize/2){
        temp1 = matrix[i];
        matrix[i] = matrix[*matrixColSize-1-i];
        matrix[*matrixColSize-1-i] = temp1;
        i++;
    }
}