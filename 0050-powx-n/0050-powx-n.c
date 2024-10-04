double pos_Pow(double ans, double* x, unsigned int n, int med){
    if(n < 2){
        return *x;
    }
    med = n/2;
    ans = pos_Pow(ans, x, med, med);
    if(n%2 == 1){
        ans *= ans*(*x);
        return ans;
    }
    else{
        ans *= ans;
        return ans;
    }
}

double myPow(double x, int n) {
    if(n == 0){
        return 1;
    }
    double ans = 1;
    int med;
    unsigned int exp;
    if(n > 0){
        exp = n;
        return pos_Pow(ans, &x, exp, med);
    }
    else{
        n++;
        exp = -n;
        exp++;
        return 1/pos_Pow(ans, &x, exp, med);
    }
}