// 백준9095: 1+2+3더하기 문제
#include<iostream>
using namespace std;

void solution(int n) {
    
    int dp[20] = { 0 };
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int j = 4; j < n + 1; j++)
    {
        dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
    }
    cout << dp[n] << endl;

};

int main() {
    
    int t;
    cin >> t;
    int n[20];
    for (int i = 0; i < t; i++) cin >> n[i];

    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++) {
        int m = n[i];
        solution(m);
    }
    
    return 0;
}
