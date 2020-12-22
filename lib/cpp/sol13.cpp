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
    while(k!=0){
        for(int i=n-1; i--; i>=0){
        k = k % a[i] == 0 ? 0 : k - a[i] * (k / a[i]);
        res++;        
        }

    }
    

    // output
    cout << res;
    return 0;
}
