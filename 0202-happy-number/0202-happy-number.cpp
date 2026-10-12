class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(n != 1){
            int sqaure = 0 ;

            while(n != 0){
                sqaure += (n % 10) * (n % 10);
                n /= 10;
            }

            n = sqaure;

            if(seen.count(sqaure) > 0) return false;
            else seen.insert(sqaure);
        }
        
        return true; 
    }
};