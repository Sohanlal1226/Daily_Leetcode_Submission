class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for(auto& x : nums){
            x = abs(x);
        }
        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < n ; i++){
            if(i < n/2){
                res -= 1LL * nums[i] * nums[i];
            }else{
                res += 1LL * nums[i] * nums[i];
            }
        }

        return res;
    }
};