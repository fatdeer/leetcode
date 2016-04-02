int mySqrt(int x) {
    if (x < 2)
        return x;
    int left = 1, right = x / 2;
    int mid;
    int last_mid;
    
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (x / mid > mid)
        {
            left = mid + 1;
            last_mid = mid;
        }
        else if (x / mid < mid)
        {
            right = mid - 1;
        }
        else
            return mid;
    }
    return last_mid;
}