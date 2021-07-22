long flippingBits(long n)
{
    long result = ~n;
    
    return result < 0 ? UINT_MAX + result + 1 : result;
}

