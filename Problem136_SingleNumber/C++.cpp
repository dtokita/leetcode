class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int value = 0;  //Initialize variable

        for(int i = 0; i < nums.size(); i++){
            value = value ^ nums[i]; //Perform an XOR, if there is a pair, they will cancel each other out
        }

        return value;
    }
};
