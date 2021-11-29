class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        
        int l = 2;
        int r = x/2;
        while(l <= r)
        {
            long mid =  l + (r - l)/2;
            if((long)mid * mid < x)
                l = mid + 1;
            else if((long)mid * mid > x)
                r = mid - 1;
            else
                return mid;
        }
        return r;
    }
};