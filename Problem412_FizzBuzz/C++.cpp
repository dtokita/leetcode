class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> answer;

        for(int i = n; i > 0; i--){
            if(i % 3 == 0 && i % 5 == 0){
                answer.push_back("FizzBuzz");
            }
            else if(i % 3 == 0){
                answer.push_back("Fizz");
            }
            else if(i % 5 == 0){
                answer.push_back("Buzz");
            }
            else{
                answer.push_back(std::to_string(i));
            }
        }

        std::reverse(answer.begin(), answer.end());

        return answer;
    }
};
