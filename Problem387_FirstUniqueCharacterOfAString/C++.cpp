class Solution {
public:
    int firstUniqChar(string s) {
        std::vector<int> arr(26);

        /* Construct a count vector */
        for(int i = 0; i < s.length(); i++) {
            arr[s[i] - 'a']++;
        }

        /* Rescan the string and check the values */
        for(int j = 0; j < s.length(); j++) {
            if(arr[s[j] - 'a'] == 1) return j;
        }

        return -1;
    }
};
