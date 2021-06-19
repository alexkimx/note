// 엑심베이 problem1

class Solution {
    public int solution(String s) {
        int answer = 0;
        // iterate a to z
        int wordCount = 0;
		for (char letter = 'a'; letter <= 'z'; letter++) {
			for (int i = 0; i < s.length(); i++) {
				if (s.charAt(i) == letter) {
					wordCount++;
				}
			}
		// find if odd
			if (wordCount%2 == 1) {
				answer++;
				wordCount = 0;
			}
		}
        return answer;
        
        
    }
}