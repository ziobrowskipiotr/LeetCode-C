int climbStairs(int n) {
    int n1 = 1;
    int n2 = 1;
    int temp;
    while(n>1){
        temp = n1;
        n1 = n1 + n2;
        n2 = temp;
        n--;
    }
    return n1;
}