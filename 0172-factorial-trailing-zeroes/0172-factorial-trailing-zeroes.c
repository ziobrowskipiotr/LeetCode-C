//1
int trailingZeroes(int n) {
    int num = 5;
    int result = 0;
    while(num <= n){
        result += n/num;
        num *= 5;
    }
    return result;
}