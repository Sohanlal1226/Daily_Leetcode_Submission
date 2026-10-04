class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long num = 1;
        ans.push_back(1);
        for(int i = 0 ; i < rowIndex ; i++){
            num = num * (rowIndex-i);
            num = num / (i+1);
            ans.push_back(num);
        }
        return ans;
    }
};