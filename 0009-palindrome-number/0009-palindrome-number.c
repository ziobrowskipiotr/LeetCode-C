bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    unsigned int j = 1;
    while(j <= (unsigned int)x/10){
        j *= 10;
    }
    unsigned int i = 1;
    while(j>=i){
        if((x%(i*10))/i != (x/j)%10){
            return false;
        }
        i *= 10;
        j /= 10;
    }
    return true;
}