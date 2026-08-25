class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int temp = k;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == k){
                i = -1;
                k = k + temp;
            }
        }
        return k ;
    }
};