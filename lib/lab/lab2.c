// 홀수 짝수 프로그램
#include <stdio.h>

void check(int x){
    if(x%2==1) printf("odd");
    else printf("even");
}
int main(){
    int N; // declare a variable
    int K;
    N = scanf("%d",&N); // get input
    for (int i = 0; i < N; i++)
    {
        /* code */
        scanf("%d",&K)
        check(K);
    }
    
    return 0; // end running
}
