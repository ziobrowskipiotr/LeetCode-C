int mySqrt(int x) {
    int i = 0;
    unsigned int* tab = malloc(3*sizeof(unsigned int));
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    while(tab[0]<=x){
        tab[0] = tab[0]+tab[1];
        tab[1] = tab[1] + tab[2];
        i = i+1;
    }
    free(tab);
    return i-1;
}