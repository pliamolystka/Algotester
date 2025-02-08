#include <stdio.h>
#include <math.h>

int main() {
    double R, r;
    scanf("%lf %lf", &R, &r);
    
    if (r + (r * sqrt(3)) > (R * sqrt(3)) - R) {
        printf("rumpled\n");
    } else {
        printf("safe\n");
    }
    
    return 0;
}