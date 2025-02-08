#include<stdio.h>
#include<math.h>
int main (){
    int n,m;
    scanf("%d%d", &n, &m);
    int s;
    for(int i =0; i<n; i++){
        char t;
        scanf("%c", &t);
        if(t == '.'){
        if(abs(m-i)<abs(m-s))
        s=i;
        }
    }
    printf("%d", s);
}
