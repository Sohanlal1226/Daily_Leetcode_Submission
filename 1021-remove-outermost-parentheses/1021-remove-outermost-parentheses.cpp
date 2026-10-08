class Solution {
public:
    string removeOuterParentheses(string s) {
        string sol;
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                st.push(s[i]);
                if(st.size() > 1){
                    sol.push_back(s[i]);
                }
            }else{
                st.pop();
                if(!st.empty()){
                    sol.push_back(s[i]);
                }
            }
        }
        return sol;
    }
};