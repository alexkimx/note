// 백준2839-설탕배달-greedy algorithm
#include <iostream>
#include <stdio.h>
using namespace std;

int deno[] = {5, 3, 0}; //큰 수부터 할당. 여러개였다면 sort.

// 뺄셈의 최소 횟수 찾기
int main(){
    int cnt = 0;
    int N = 0;
    cin >> N;
    // subtract by largest num
    // until N is equal to or less than 0.
    //testcase:18->4,6->2
    for(int i = 0; i < 2; i++){
        while(N > deno[i+1]){ // N>=3
            N -= deno[i]; 
            cnt++; // 봉지 갯수 
        } 
            
    }
         
    if(N != 0){
        cnt = -1;
    }
    cout << cnt;
    return 0;
}
