#define INT_MAX  0x7FFFFFFF
#define INT_MIN  0x80000000
int divide(int dividend, int divisor) {
    if (divisor == 0) {
        return INT_MAX;
    }

    if (divisor == 1) {
        return dividend;
    }

    if (divisor == -1) {
        return dividend == INT_MIN ? INT_MAX : -dividend;
    }

    unsigned int result = 0;
    unsigned int u_dividend;
    unsigned int u_divisor;
    int sign_divided;
    int sign_divisor;

    if (dividend >= 0) {
        u_dividend = dividend;
        sign_divided = 1;

    } else {
        u_dividend = -dividend;
        sign_divided = -1;
    }

    if (divisor >= 0) {
        u_divisor = divisor;
        sign_divisor = 1;

    } else {
        u_divisor = -divisor;
        sign_divisor = -1;
    }

    unsigned int a = u_dividend;

    while (1) {
        unsigned int b = u_divisor, k = 1;

        while (a > b) {
            b = b << 1;
            k = k << 1;
        }

        if (a < b) {
            b = b >> 1;
            k = k >> 1;
        }

        if (k == 0) {
            break;
        }

        a = a - b;
        result += k;
    }

    return sign_divided * sign_divisor * result;
}