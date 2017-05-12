class Solution {
public:
    string reverseString(string s) {
        string reversed;
        for(std::string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); rit++){
            reversed += *rit;
        }
        return reversed;
    }
};
