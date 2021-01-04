//스티커모으기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp1[100001]; // 첫번째 스티커를 뜯은 경우
int dp2[100001]; // 첫번째 스티커를 뜯지 않은 경우
int solution(vector<int> sticker)
{
    int n = sticker.size();
    
    if(n==1) return sticker[0];

    // case 1:
    dp1[0] = sticker[0];
    dp1[1] = dp1[0];
    for (int i = 2; i < n-1; i++)
    {
        dp1[i]=max(dp1[i-1],dp1[i]+dp1[i-2]);
        
    }
    
    // case 2:
    dp2[0] =0;
    dp2[1] = dp2[0];
    for (int i = 2; i < n-1; i++)
    {
        dp2[i]=max(dp2[i-1],dp2[i]+dp2[i-2]);
        
    }


    return max(dp1[n-2],dp2[n-1]);
}