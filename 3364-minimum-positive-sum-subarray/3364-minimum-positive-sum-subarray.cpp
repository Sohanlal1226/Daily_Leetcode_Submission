class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int res = INT_MAX;
        if(l==nums.size()){
            int cnt=0;
            for(int i:nums) cnt+=i;
            if(cnt>0) res = min(res, cnt);
        if(res==INT_MAX) return -1;    
        return res;

        }
        for(int i=0;i<=nums.size()-l;i++){
            int cur=0, cnt=0;
            for(int j=i;j<nums.size();j++){
                cnt++, cur+=nums[j];
                if(cnt>r) break;
                else if(cnt>=l && cnt<=r && cur>0){
                    res = min(res, cur);
                }
            }
        }
        if(res==INT_MAX) return -1;
        return res;
    }
};