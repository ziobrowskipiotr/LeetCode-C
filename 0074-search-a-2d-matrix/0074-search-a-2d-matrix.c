//1
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int i = 0;
    int jp = 0;
    int jk = matrixColSize[0]-1;
    int js;
    while(i < matrixSize){
        if(matrix[i][0] <= target){
            if(matrix[i][matrixColSize[i]-1] >= target){
                while(jp<=jk){
                    js = (jp+jk)/2;
                    if(matrix[i][js] == target){
                        return true;
                    }
                    else if(matrix[i][js] > target){
                        jk = js-1;
                    }
                    else{
                        jp = js+1;
                    }
                }
                return false;
            }
            else{
                i++;
            }
        }
        else{
            return false;
        }
    }
    return false;        
}