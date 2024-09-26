int count(int i, int j, int** board, int boardSize, int* boardColSize){
    int cont = 0;
    if(i-1 >= 0){
        if(board[i-1][j] == 1 || board[i-1][j] == 2){
            cont++;
        }
        if(j-1>=0){
            if(board[i-1][j-1] == 1 || board[i-1][j-1] == 2){
                cont++;
            }
        }
        if(j+1<*boardColSize){
            if(board[i-1][j+1] == 1 || board[i-1][j+1] == 2){
                cont++;
            }
        }
    }

    if(i+1 < boardSize){
        if(board[i+1][j] == 1 || board[i+1][j] == 2){
            cont++;
        }
        if(j-1>=0){
            if(board[i][j-1] == 1 || board[i][j-1] == 2){
                cont++;
            }
            if(board[i+1][j-1] == 1 || board[i+1][j-1] == 2){
                cont++;
            }
        }
        if(j+1<*boardColSize){
            if(board[i][j+1] == 1 || board[i][j+1] == 2){
                cont++;
            }
            if(board[i+1][j+1] == 1 || board[i+1][j+1] == 2){
                cont++;
            }
        }
    }

    if(i+1 == boardSize){
        if(j-1>=0){
            if(board[i][j-1] == 1 || board[i][j-1] == 2){
                cont++;
            }
        }
        if(j+1 < *boardColSize){
            if(board[i][j+1] == 1 || board[i][j+1] == 2){
                cont++;
            }
        }
    }
    return cont;
}
void gameOfLife(int** board, int boardSize, int* boardColSize) {
    for(int i=0; i<boardSize; i++){
        for(int j=0; j<*boardColSize; j++){
            switch(board[i][j]){
                case 0:
                    if(count(i, j, board, boardSize, boardColSize) == 3){
                        board[i][j] = 3;
                    }
                    break;
                case 1:
                    int con = count(i, j, board, boardSize, boardColSize);
                    if(con < 2){
                        board[i][j] = 1;
                    }
                    else if(con > 3){
                        board[i][j] = 1;
                    }
                    else{
                        board[i][j] = 2;
                    }                    
                    break;
            }

        }
    }
    for(int i=0; i<boardSize; i++){
        for(int j=0; j<*boardColSize; j++){
            board[i][j] /= 2;
        }
    }
}