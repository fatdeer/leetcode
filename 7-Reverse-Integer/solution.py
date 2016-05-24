int reverse(int x) {
    long long temp = 0;
    while (x)
    {
        temp *= 10;
        if (temp > 2147483647 || temp < -2147483648)
            return 0;
        temp += x % 10;
        if (temp > 2147483647 || temp < -2147483648)
            return 0;
        x /= 10;
    }
    
    return temp;
}