class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        int s = 1;
        while(n % 4 == 0){
            n /= 4;
        }
        return n == 1;
    }
};