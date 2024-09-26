void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int temp;
    int i = 0;
    int size = matrixSize;
    while(i<size){
        for(int j=0; j<matrixSize; j++){
            temp = matrix[size-1-j][size-1-i];
            matrix[size-1-j][size-1-i] = matrix[i][j];
            matrix[i][j] = temp;
        }
        matrixSize--;
        i++;
    }
    int* temp1;
    for(int i=0; i<size/2; i++){
        temp1 = matrix[i];
        matrix[i] = matrix[size-1-i];
        matrix[size-1-i] = temp1;
    }
}