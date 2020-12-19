//프로그래머스-체육복
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    // initialize with 1.
    vector<int> u(n+2, 1); 
    // make lost 0, rserve 2.
    for(int i=0; i<lost.size(); i++) 
        u[lost[i]]--;
    for(int i=0; i<reserve.size(); i++) 
        u[reserve[i]]++;
    
    // if the next is lost && i am reserve
    for(int i = 1; i <= n; i++){
        if(u[i-1] == 0 && u[i]==2){
            u[i-1]=u[i]=1;
        }else if(u[i]==2 && u[i+1]==0){
            u[i]=u[i+1]=1;
        }
    }
    for(int i=0; i<=n; i++){
        if(u[i]>0) answer++;
    }
     
    return answer-1;
}

