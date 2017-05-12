class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int count1 = 0, count2 = 0, smallestDiff = INT_MAX;
        bool flag = 0;

        for(int i = 0; i < words.size(); i++){
            if(word1 == words[i]){
                count1 = i;
                flag = 1;
            }

            if(word2 == words[i]){
                count2 = i;
                flag = 1;
            }

            if(smallestDiff > abs(count1 - count2)){
                smallestDiff = abs(count1-count2);
                flag = 0;
            }
        }

        return smallestDiff;
    }
};
