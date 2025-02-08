#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    int count = 0;
    scanf("%s", str1);
    scanf("%s", str2);
    if (str1[strlen(str1) - 2] == 'y') {
        count++;
    }
    if (str2[strlen(str2) - 2] == 'y') {
        count++;
    }
    for (int i = 1; i < strlen(str1); i += 2) {
        if (str1[i] == 'u') {
            printf("ku");
        }
    }
    for (int i = 1; i < strlen(str2); i += 2) {
        if (str2[i] == 'u') {
            printf("ku");
        }
    }
    switch (count) {
        case 0:
            break;
        case 1:
            printf("kyu");
            break;
        case 2:
            printf("ku");
            break;
    }

    return 0;
}
