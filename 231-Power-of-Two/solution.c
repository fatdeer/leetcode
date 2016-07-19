bool isPowerOfTwo(int n) {
    if (n == 0)
        return false;
    while(n != 0)
    {
        if (n & 0x01 == 1)
        {
            n = n>>1;
            if (n == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            n = n>>1;
        }
    }
}