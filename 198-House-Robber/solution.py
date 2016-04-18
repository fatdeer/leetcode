int rob(int num[], int n) {
    switch(n){
        case 0:
            return 0;
        case 1:
            return num[0];
        default:
            break;
    };  

    int dp1 = num[0];
    int dp2 = num[0] > num[1]? num[0]: num[1];
    int c=2;

    while(c < n){ 
        int temp = dp2;
        int s = dp1 + num[c];
        dp2 = s > dp2? s: dp2; 
        dp1 = temp;
        ++c;
    };  

    return dp2;
    
}