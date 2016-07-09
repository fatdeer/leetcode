int climbStairs(int n) {
    int pre = 0;
    int cur = 1;
    
    for (int i = 0; i < n; i++)
    {
        int tmp = cur;
        cur += pre;
        pre = tmp;
    }
    return cur;
}