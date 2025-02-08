#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double r;
    scanf("%d %d %d %lf", &a, &b, &c, &r);
    if (!(a + b <= c || a + c <= b || b + c <= a))
    {
        double p = (a + b + c) / 2.0;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        double Rt = (a * b * c) / (4.0 * S);
        double Rv = S / p;
        if (Rt <= r)
            printf("+");
        else
            printf("-");
        if (r <= Rv)
            printf("+");
        else
            printf("-");
    }
    return 0;
}