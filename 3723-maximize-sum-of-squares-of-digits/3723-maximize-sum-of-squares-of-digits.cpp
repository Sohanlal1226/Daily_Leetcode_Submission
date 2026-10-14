class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res = "";

        while(res.length() < num){
            int cur = min(9,sum);
            res += to_string(cur);
            sum -= cur;
        }
        if(sum > 0) return "";
        return res;
    }
};