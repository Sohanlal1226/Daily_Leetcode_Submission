class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incLen = 1, decLen = 1;
        int maxLen = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] > nums[i]) {
                incLen++;
                decLen = 1; 
            } else if (nums[i + 1] < nums[i]) {
                decLen++;
                incLen = 1;  
            } else {
                incLen = 1;
                decLen = 1;
            }
            maxLen = max(maxLen, max(incLen, decLen));
        }
        return maxLen;
    }
};