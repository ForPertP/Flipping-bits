#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'flippingBits' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long flippingBits(long n)
{
    return UINT_MAX - n;
}

long flippingBits2(long n)
{
    long result = ~n;
    return result < 0 ? UINT_MAX + result + 1 : result;
}
