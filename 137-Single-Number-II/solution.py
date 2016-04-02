class Solution {
public:
    int singleNumber(int A[], int n) {
        int r = 0, c = 0;
        while(n > 0) {
            --n;
            int t =  (~r & A[n] & ~c) | (r & ~A[n] & ~c); 
            c = (~r & ~A[n] & c) | (r & A[n] & ~c);
            r = t;
        }
        return r; 
    }
};