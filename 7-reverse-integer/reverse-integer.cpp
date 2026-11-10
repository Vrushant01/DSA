class Solution {
public:
    int reverse(int x) {
       long result = 0;
        
        while (x != 0) {
            int temp = x % 10;
            result = (result * 10) + temp;
            x /= 10;
        }
        
        // Check if the result fits within 32-bit signed integer limits
        if (result > INT_MAX || result < INT_MIN) {
            return 0;
        }
        
        return (int)result;
    }
};