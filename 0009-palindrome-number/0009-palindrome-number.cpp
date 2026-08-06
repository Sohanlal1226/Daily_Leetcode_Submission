class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int rem = 0;
        long rev = 0;
        long num = x;
        while(x != 0){
            rem = x%10;
            x /= 10;
            rev = rev * 10 + rem ;
        }
        return rev == num;
    }
};