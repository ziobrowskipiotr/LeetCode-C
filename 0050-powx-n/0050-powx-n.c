void pos_Pow(double* ans, double* x, unsigned int n, int med){
    if(n < 2){
        *ans = *x;
        return;
    }
    med = n/2;
    pos_Pow(ans, x, med, med);
    if(n%2 == 1){
        *ans *= *ans*(*x);
        return;
    }
    else{
        *ans *= *ans;
        return;
    }
}
//1
double myPow(double x, int n) {
    if(n == 0){
        return 1;
    }
    double ans = 1;
    int med;
    unsigned int exp;
    if(n > 0){
        exp = n;
        pos_Pow(&ans, &x, exp, med);
        return ans;
    }
    else{
        n++;
        exp = -n;
        exp++;
        pos_Pow(&ans, &x, exp, med);
        return 1/ans;
    }
}