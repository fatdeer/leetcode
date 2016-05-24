bool isPalindrome(int x) {
     if (x < 0)
        return 0;
     long long temp = 0;
     int backup = x;
     while (x)
     {
         temp *= 10;
         if (temp > INT32_MAX || temp < INT32_MIN)
             return 0;
         temp += x % 10;
         x /= 10;
     }
     return (temp == backup) ? 1 : 0;
}