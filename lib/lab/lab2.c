#include <stdio.h>
// 홀수 짝수 프로그램

void check(int x){
    if(x%2==1) printf("odd");
    else printf("even");
}
int main(){
    int N; // declare a variable
    int K;
    N = scanf("%d",&N); // get input
    for (int i = 0; i < N; i++) // repeat N times
    {
        scanf("%d",&K);
        check(K);
    }
    
    return 0; // end running
}
