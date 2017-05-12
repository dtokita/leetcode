class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0, high = numbers.size() - 1;
        vector<int> answer;

        while(1){
            if(numbers[low] + numbers[high] < target)
                low++;
            else if(numbers[low] + numbers[high] > target)
                high--;
            else{
                answer.push_back(low + 1);
                answer.push_back(high + 1);
                return answer;
            }
        }

        return answer;
    }
};
