class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        vector<string> answer;
        string temp;
        vector<bool> boolString;

        if(s.size() == 0) return answer;

        for(int i = 0; i < s.size(); i++){  //construct boolean representation
            if(s[i] == '-') boolString.push_back(0);
            else boolString.push_back(1);
        }

        for(int j = 0; j < boolString.size() - 1; j++){
            if(boolString[j] && boolString[j + 1]){
                temp = s;
                temp.replace(j, 2, "--");
                answer.push_back(temp);
            }
        }

        return answer;

    }
};
