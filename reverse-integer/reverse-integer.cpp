class Solution {
public:
    int reverse(int x) {
        int remainder =0;
        int i =0;
        while(x!=0)
        {         
            if (remainder > INT_MAX/10 || (remainder == INT_MAX / 10 && x%10 > 7)) return 0;
            if (remainder < INT_MIN/10 || (remainder == INT_MIN / 10 && x%10 < -8)) return 0;
            remainder = remainder * 10 + x%10;
            x/=10;
        }
        return remainder;
    }
};