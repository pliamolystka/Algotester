#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    double result = pow(n, k);
    if (result > pow(10, 9)) {
        printf("-1\n");
    } else {
        printf("%d\n", (int)result);
    }

    return 0;
}