int mySqrt(int x) {
    if(x==0){
        return x;
    }
    if(x<2){
        return 1;
    }
    int result;
    long* tab = malloc(3*sizeof(long));
    tab[0] = 1;
    tab[1] = x/2;
    while(tab[0]<=tab[1]){
        tab[2] = (tab[0]+tab[1])/2;
        if(tab[2] * tab[2] == x){
            result = (int)tab[2];
            free(tab);
            return result;
        }
        else if(tab[2] * tab[2] < x){
            tab[0] = tab[2]+1;
            result = tab[2];
        }
        else{
            tab[1] = tab[2]-1;
        }
    }
    free(tab);
    return result;
}