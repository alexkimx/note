//programmers.com-가장큰수
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    string s1 = to_string(a)+to_string(b);
    string s2 = to_string(b)+to_string(a);
    return s1 > s2;

}

string solution(vector<int> numbers) {
    string answer = "";

    sort(numbers.begin(), numbers.end(), cmp);
    for(auto& i : numbers){
        answer += to_string(i);

    }
    return answer[0]=='0' ? "0": answer;
}