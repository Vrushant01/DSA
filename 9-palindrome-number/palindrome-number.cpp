class Solution {
public:
    bool isPalindrome(int x) {
        int input = x;
        long result = 0;
        int digit =0;
        while(x != 0){
            digit = x%10;
            x /= 10;
            result = (result*10) + digit;
        }
        if(input < 0){
            result  = result * (-1);
        }
        if(input == result) return true;
        else return false;
    }
};