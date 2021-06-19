class Solution {
    public int solution(int n) {
        int res = 0;
        // box for 3 and 5
        res+= n/5;
        n = n % 5;
        if(n%3!=0) return -1;

        res+= n/3;
        n = n % 3;
        if(n!=0) return -1;
        
        
        
        return res;
    }
}