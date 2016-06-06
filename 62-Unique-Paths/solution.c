#define max(a, b) ((a) > (b) ? (a) : (b))
static long long factor(int n, int start)
{
    long long ret = 1;

    for (int i = start; i <= n; ++i) {
        ret *= i;
    }

    return ret;
}

static long long combination(int n, int k)
{
    if (k == 0) {
        return 1;
    }

    if (k == 1) {
        return n;
    }

    long long ret = factor(n, k + 1);
    ret /= factor(n - k, 1);
    return ret;
}

int uniquePaths(int m, int n)
{
    return combination(m + n - 2, max(m - 1, n - 1));
}