#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result = a + b;
    if (b + c < result) result = b + c;
    if (a + c < result) result = a + c;

    printf("%d\n", result);

    return 0;
}