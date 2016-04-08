#define strndup(from, n) strncpy(calloc(n + 1, sizeof(char)), from, n)

char* longestPalindrome(char* s)
{
    int longest = 1, length = strlen(s);
    char* start = s, *center = s;

    while (center + longest / 2 < s + length) {
        char* b = center, *e = center + 1;

        // count # of chars in the center
        // eg. in ...abbbba..., there are 4 b's in the center
        while (*b == *e) {
            e++;
        }

        center = e;

        // count # of steps we can take
        while (b > s && *(b - 1) == *e) {
            --b, e++;
        }

        // eg. in ...tcabbbbacp...
        // and length of cabbbbac is 8, e - b
        if (e - b > longest) {
            longest = e - b;
            start = b;
        }
    }

    return strndup(start, longest);
}