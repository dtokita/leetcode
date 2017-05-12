class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> frequency_s(26, 0);
        vector<int> frequency_t(26, 0);

        for(int i = 0; i < s.size(); i++){
            frequency_s[s[i] - 'a']++;
        }

        for(int j = 0; j < t.size(); j++){
            frequency_t[t[j] - 'a']++;
        }

        for(int k = 0; k < 26; k++){
            if(frequency_s[k] != frequency_t[k])
                return k + 'a';
        }

        return 'a';
    }
};
