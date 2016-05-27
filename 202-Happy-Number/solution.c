int crazy(int num) {
    int sum = 0;
    while (num > 0) {
        int mod = num % 10;
        sum += mod * mod;
        num /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    while (n != 1) {
        n = crazy(n);
        if (n == 4) {
            return false;
        }
    }
    return true;
}