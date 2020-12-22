// 백준11047-동전0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    int res = 0;
    int a[10] = {0,};

    // input
    cin >> n >> k;
    for(int i=0; i++; i<n) cin >> a[i];
    
    // from the last element(largest coin).
    
    for(int i=n-1; i>=0; i--){
        k = k % a[i];
        res+= k/a[i];

    }
    
    // output
    cout << res;
    return 0;
}
