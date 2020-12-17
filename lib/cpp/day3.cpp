// 백준2839-설탕배달-greedy algorithm
#include <bits/stdc++.h> 
using namespace std;

int deno[] = {5, 3}; //큰 수부터 할당.

// 약수의 최소 갯수 찾기
int main(){
    int cnt = 0;
    int N = 0;
    cin >> N;
    // subtract by largest num
    // until N is equal to or less than 0.
    while(N>0){      
        for(int i = 0; i < 2; i++){ 
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
