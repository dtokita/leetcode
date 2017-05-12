class Solution {
public:
    bool canPermutePalindrome(string s) {
        int string_size = s.size();
        vector<int> alphabet(55, 0);   //initialize empty vector
        char test;
        bool flag = 0;

        if(string_size % 2 == 0){   //if even
            for(int i = 0; i < string_size; i++){
                if(s[i] >= 97){
                    test = s[i] - 'a';
                }
                else if(s[i] >= 65 && s[i] <= 90){
                    test = s[i] - 36;
                }
                else{
                    test = 28;
                }

                alphabet[test]++;
            }

            for(int j = 0; j <= 55; j++){
                if(alphabet[j] % 2 == 1)
                    return 0;
            }

            return 1;
        }
        else{                       //if odd
            for(int i = 0; i < string_size; i++){
                if(s[i] >= 97){
                    test = s[i] - 'a';
                }
                else if(s[i] >= 65 && s[i] <= 90){
                    test = s[i] - 36;
                }
                else{
                    test = 28;
                }

                alphabet[test]++;
            }

            for(int j = 0; j <= 55; j++){
                if(alphabet[j] % 2 == 1){
                    if(flag)
                        return 0;

                    flag = 1;
                }
            }

            return 1;
        }

    }
};
