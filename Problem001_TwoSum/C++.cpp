class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int low = 0;
        int high = nums.size() - 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[low] + nums[high] == target){
                answer.push_back(low);
                answer.push_back(high);
                return answer;
            }

            if(nums[low] + nums[high] < target){
                low++;
            }
            else{
                high--;
            }
        }

        return answer;
    }
};
