// 백준2839-설탕배달-greedy algorithm
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

// solution A
int solutionA(){
    int N;
    cin >> N;
    int cnt = 0;

    while (N >= 0) {
        if (N % 5 == 0) {
            cout << N / 5 + cnt;
            return;
        }
        N -= 3;
        cnt++;
    }
    cout << "-1";
    return;
}


// solution B (친구 코드)
#define INF 2147000000 
void solutionB(){
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