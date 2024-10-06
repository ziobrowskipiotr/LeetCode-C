bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    unsigned int j = 1;
    while(j <= (unsigned int)x/10){
        j *= 10;
    }
    unsigned int i = 10;
    unsigned int val1 = x%i;
    unsigned int val2 = x/j;
    while(j>=i){
        if(val1 != val2){
            return false;
        }
        val1 = (x%(i*10))/i;
        val2 = (x/(j/10))%10;
        i *= 10;
        j /= 10;
    }
    return true;
}