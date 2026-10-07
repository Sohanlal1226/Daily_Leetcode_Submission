class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> sol;
        int maxi = INT_MIN;
        for(int i = 0 ; i < candies.size() ; i++){
            if(candies[i] > maxi) maxi = candies[i];
        }
        for(int i = 0 ; i < candies.size() ; i++){
            int candy = candies[i] + extraCandies;
            if(candy >= maxi) sol.push_back(true);
            else sol.push_back(false);
        }
        return sol;
    }
};