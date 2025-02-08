#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long int lcm(long long int a, long long int b)
{
    return a * b / gcd(a, b);
}

long long int solve(long long int n, long long int b, long long int y)
{
    long long int c = (n - 1) / b + (n - 1) / y - (n - 1) / lcm(b, y);
    return c;
}

int main()
{
    long long int n, b, y;
    scanf("%lld %lld %lld", &n, &b, &y);
    long long int result = solve(n, b, y);
    printf("%lld\n", result);

    return 0;
}
