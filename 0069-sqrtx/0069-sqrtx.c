int mySqrt(int x) {
    if(x==0){
        return x;
    }
    if(x<2){
        return 1;
    }
    long tab[4];
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = x/2;
    while(tab[1]<=tab[2]){
        tab[3] = (tab[1]+tab[2])/2;
        if(tab[3] * tab[3] == x){
            return (int)tab[3];
        }
        else if(tab[3] * tab[3] < x){
            tab[1] = tab[3]+1;
            tab[0] = tab[3];
        }
        else{
            tab[2] = tab[3]-1;
        }
    }
    return (int)tab[0];
}