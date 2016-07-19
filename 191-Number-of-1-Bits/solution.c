int hammingWeight(uint32_t n) {
    int length = 0;
    while (n > 0)
    {
        length += n & 0x01;
        n >>= 1;
    }
    return length;
}