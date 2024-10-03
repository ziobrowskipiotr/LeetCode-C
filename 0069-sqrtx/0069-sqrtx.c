int mySqrt(int x) {
    int i = 0;
    long int a = 0;
    int r1 = 1;
    int r2 = 2;
    while(a<=x){
        a = a+r1;
        r1 = r1 + r2;
        i = i+1;
    }
    return i-1;
}