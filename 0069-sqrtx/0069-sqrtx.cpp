class Solution {
public:
    int mySqrt(int x) {
        int res=0,low=1;
        long high=x;
        while(low<=high){
            long mid=(low+high)/2;
            if(mid*mid<=x){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
};