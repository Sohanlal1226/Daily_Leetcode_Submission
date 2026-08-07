class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char i : s){
            if(isalnum(i)){
                res += tolower(i);
            }
        }
        for(int i = 0 ; i < (res.size()+1)/2 ; i++){
            if(res[i] != res[res.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};