#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(0<=a and a<=100){
        if(0<=b and b<=100){
            printf("%d", a+b);
        }
    }
    return 0;
}