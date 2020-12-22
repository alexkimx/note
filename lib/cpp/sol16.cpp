//백준-가장긴증가하는수열
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int a[1000]={0,};
    // input
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    // LIS
    int dp[1000] ={0,};
    for(int i=0; i<n; i++){
        int temp = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j]) temp = max(temp,dp[j]);

        }
        dp[i] = temp + 1;        
    }
    int res=0;
    for (int i = 0; i < n; i++)
    {
        res = max(res, dp[i]);
    }
    // output
    cout << res;
    return 0;
}