class Solution {
public:
    string reverseString(string s) {
        char* reversed = new char[s.length() + 1];
        reversed[s.length()] = '\0';
        int j = 0;
        for(auto i = s.end() - 1; i >= s.begin(); i--)
        {
            reversed[j++] = *i;
        }
        string reversedStr(reversed);
        delete[] reversed;
        return reversedStr;
    }
};