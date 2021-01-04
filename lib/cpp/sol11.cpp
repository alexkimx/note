// 나머지한점 (undone)
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
   vector<int> ans = {0,0};
    for(int i=0; i<3; i++)
    {
        ans[0] ^= v[i][0];
        ans[1] ^= v[i][1];
    }
    return ans;
}