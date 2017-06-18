class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        // This works because we know that the majority element when
        // sorted must be the middle element, or else it won't be the
        // majority element
        return nums[nums.size() / 2];
    }
};
