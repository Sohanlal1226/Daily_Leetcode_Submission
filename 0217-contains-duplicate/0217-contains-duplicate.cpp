class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n1=nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int n2=s.size();
        return n1!=n2;
    }
};