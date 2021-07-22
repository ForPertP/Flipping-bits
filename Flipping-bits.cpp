long flippingBits(long n)
{
    return UINT_MAX - n;
}

long flippingBits1(long n)
{
    long result = ~n;
    return result < 0 ? UINT_MAX + result + 1 : result;
}

