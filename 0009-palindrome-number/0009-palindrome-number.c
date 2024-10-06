bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int j = 1;
    int i = 1;
    while(j <= x/10){
        j *= 10;
    }
    while(j>=i){
        if((x%(i*10))/i != (x/j)%10){
            return false;
        }
        i *= 10;
        j /= 10;
    }
    return true;
}