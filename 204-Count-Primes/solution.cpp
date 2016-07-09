class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
    if(n == 3) return 1;
    bool *prime= (bool*)malloc(sizeof(bool)*n);
    int i=0,j=0;
    int count = n-2;
    int rt = sqrt(n);//trick1
    for(j = 0; j < n; j++)
    {
        prime[j] = 1;
    }
    for(i = 2; i <= rt; i++)
    {
         if (prime[i])//trick2
        {
            for(j=i*i ; j<n ; j+=i)//trick3
            {
                if (prime[j])
                        {
                           prime[j]=0;
                           count--;//trick4
                        }
            }
        }
    }
    free(prime);
    return count;
    }
};