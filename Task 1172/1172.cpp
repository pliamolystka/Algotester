#include <stdio.h>

int main() {
    int n, p = 0, np = 0;
    scanf("%d", &n);
    int arr[n], parni[n], neparni[n], res[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            parni[p] = arr[i];
            p++;
        } else {
            neparni[np] = arr[i];
            np++;
        }
    }

    if (p > np + 1 || np > p + 1) {
        printf("-1\n");
    } else {
        int i = 0, j = 0, index = 0;
        int yes = np > p;

        while (index < n) {
            if (yes) {
                res[index] = neparni[i];
                i++;
            } else {
                res[index] = parni[j];
                j++;
            }
            index++;
            yes = !yes;
        }

        for (int k = 0; k < n; k++) {
            printf("%d", res[k]);
            if (k < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
