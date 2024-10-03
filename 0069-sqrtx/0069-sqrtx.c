int mySqrt(int x) {
    if(x==0){
        return x;
    }
    if(x<2){
        return 1;
    }
    long ans = 0;
    long left = 1;
    long right = x/2;
    long medium;
    while(left<=right){
        medium = (left+right)/2;
        if(medium * medium == x){
            return (int)medium;
        }
        else if(medium * medium < x){
            left = medium+1;
            ans = medium;
        }
        else{
            right = medium-1;
        }
    }
    return (int)ans;
}