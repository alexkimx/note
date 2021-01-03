//순열검사
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// method A: sort
bool solution(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++){
        if (arr[i] != i+1) return false;
    }

    return true;
}

// method B: check array
int chk[100001] = {0};
bool solutionB(vector<int> arr)
{
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]>n || arr[i]<1) return false;
        chk[arr[i]]++;
    }
    for(int i=1; i<=n; i++){
        if(chk[i] != 1) return false;
    }

    return true;
}
