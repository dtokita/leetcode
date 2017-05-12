class Solution {
public:
    bool isPalindrome(int x) {
        int remainder, original = x, reversed = 0;

        if(x < 0)
            return 0;

        while(x != 0){
            remainder = x % 10;
            reversed = reversed * 10 + remainder;
            x = x / 10;
        }

        if(original == reversed)
            return 1;
        else
            return 0;
    }
};
