bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    unsigned int j = 1;
    while(j <= (unsigned int)x/10){
        j *= 10;
    }
    unsigned int i = 1;
    unsigned int val1 = x%i;
    unsigned int val2 = x/j;
    while(j>=i){
        if((x%(i*10))/i != (x/j)%10){
            return false;
        }
        i *= 10;
        j /= 10;
    }
    return true;
}