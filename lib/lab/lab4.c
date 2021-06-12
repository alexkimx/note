// 홀수 짝수 프로그램
#include <stdio.h>


int main(){
    int N; // declare a variable
    int K;
    N = scanf("%d",&N); // get input
    for (int i = 0; i < N; i++) // repeat N times
    {
        scanf("%d",&K);
        if(K%2==1) printf("odd");
        else printf("even");
    }
    
    return 0; // end running
}
