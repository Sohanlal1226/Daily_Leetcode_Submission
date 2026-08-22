class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        int temp = n;
        int product = 1;
        while(n != 0){
            sum += n%10;
            product *= n%10;
            n /= 10;
        }
        if(temp%(sum + product) == 0) return true;
        return false;
    }
};