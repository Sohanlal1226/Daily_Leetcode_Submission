class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        stack<char> st;
        for(auto i : s){
            if(i == '('){
                st.push(i);
                cnt = max(cnt , static_cast<int>(st.size()));
            }else if(i == ')'){
                st.pop();
            }
        }

        return cnt;
    }
};