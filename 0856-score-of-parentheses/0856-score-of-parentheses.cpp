class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int count = 0;
        int left = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                count++;
                left = 0;
            }else{
                count--;
                if(left == 1) continue;
                score = score + (1 << count);
                left = 1;
            }
        }
        return score;
    }
};