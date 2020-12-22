// 백준-ATM
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int p[1001];
    int res = 0;
    //input
    cin >> n ;
    for(int i=0; i<n; i++) cin >> p[i];
    sort(p, p+n);
    for(int i=0; i<n; i++){ // sum of elements in front
        res += p[i]*(n-i);
    }
    //output
    cout << res;
    return 0;
}