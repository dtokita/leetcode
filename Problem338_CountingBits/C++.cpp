class Solution {
public:
    vector<int> countBits(int num) {
        int exponent;
        bool flag = 0;

        vector<int> answer(2, 0);

        answer[1] = 1;

        for(exponent = 0; exponent <= 32; exponent++){
                if(flag) break;

                if(num < pow(2, exponent)){
                        flag = 1;
                }
        }

        for(int i = 0; i < exponent - 2; i++){
                int size1 = answer.size();

                for(int j = 0; j < size1; j++){
                        answer.push_back(answer[j] + 1);
                }
        }

        answer.resize(num + 1);

        return answer;
    }
};
