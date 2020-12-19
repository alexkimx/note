// 백준2839-설탕배달-greedy algorithm
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// 내 코드
int main(){
    int b[] = {5, 3}; //bags
    int N = 0;
    int ans;

    cin >> N;
    // check if remainder equals 0.
    for(int i = 0; i < 2; i++){
        if(N % b[i] == 0 ) ans = N/b[i];
    }
    for(int i = 0; i < 2; i++){
        while (N > 0)
        {
            /* code */
        }
        
        if(N % b[i] == 0 ) ans = N/b[i];
    }
         
    if(N != 0){
        ans = -1;
    }
    cout << ans;
    return 0;
}


// 친구 코드...
#define INF 2147000000 
void solution(){
	int n;
	cin >> n;
	vector<int> dp(n + 1, INF); 
	int bag[2] = {3, 5};
	
	// solution
	dp[0] = 0;
	for(int i=0; i<2; i++){
		for(int j=bag[i]; j<=n; j++){
			dp[j] = min(dp[j], dp[j - bag[i]] + 1);
		}
	}
	
	// result
	if(dp[n] == INF) cout << -1;
	else cout << dp[n];
	
}