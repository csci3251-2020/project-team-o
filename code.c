#include <stdio.h>
#define N 5
void diu(char ch, int x) {
    for (int i=0;i<x;i++) printf("%c",ch);
}
void diu2(int i){

        diu(' ',N-i);
        diu('*',1);
        diu(' ',N+(i-2)*2);
        diu('*',1);
        diu('\n',1);
}
int main() {
    diu(' ',N-1);
    diu('*',N);
    diu('\n',1);
    for(int i=2;i<=N;i++)diu2(i);
    for (int i =N-1;i>=2;i--)diu2(i);
    
    diu(' ',N-1);
    diu('*',N);
    diu('\n',1);
    return 0;
}

