// 땅따먹기 (undone)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int n = land.size();
    int sum = 0;
    int temp = max_element(land[0].begin(),land[0].end());
    
    sum += land[0][temp];
    for(int i=1; i<n; i++){
        land[temp].erase(land[temp].begin() + 1);
        sum += max_element(land.begin(),land.end());
    }
    
    
    
    return sum;
}