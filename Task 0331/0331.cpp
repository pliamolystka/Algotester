#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    int array[26] = {0};
    int count = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        array[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (array[i] % 2 != 0) {
            count++;
        }
    }
    if (count > 1) {
        printf("NO \n");
    } else {
        printf("YES \n");
    }

    return 0;
}