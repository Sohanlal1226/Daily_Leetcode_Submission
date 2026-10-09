class Solution {
public:
    int minInsertions(string s) {
        int mini = 0;
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                if((cnt != 0 && cnt%2 != 0) && s[i-1] == ')'){
                    mini++;
                    cnt--; 
                }
                cnt += 2;
            }else{
                cnt--;
                if((cnt == -1 && i < (s.size() - 1)) && s[i+1] == ')'){
                    cnt = 0;
                    mini += 1;
                    i++;
                }else if(cnt == -1){
                    cnt = 0;
                    mini += 2;
                }
            }
        }
        mini = mini + cnt;
        return mini;
    }
};