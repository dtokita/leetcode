class Solution {
public:
    int addDigits(int num) {
        return num - 9 * floor((num - 1)/9); //digital root
    }
};
