bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    if(x<10){
        return true;
    }
    int j = 1; //low
    int i = 1; //high
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