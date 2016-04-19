class Solution {
public:
    int integerBreak(int n) {
        assert(n >= 2);
        if(n < 5)
        {
            int mid = n / 2;
            int rest = n - mid;
            return mid * rest;
        }
        else
        {
            int power = n / 3;
            int remain = n % 3;
            switch(remain)
            {
                case 0:
                    return pow(3, power);
                case 1:
                    return pow(3, power - 1) * 4;
                case 2:
                    return pow(3, power) * 2;
            }
        }
    }
};