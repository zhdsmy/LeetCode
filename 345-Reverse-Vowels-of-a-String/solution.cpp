class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        string s1(s);
        char temp;
        for(int i = 0, j = n - 1; i < j; )
        {
            if(isvowels(s1[i]))
            {
                while(!isvowels(s1[j])){ j--; }
                if(i == j)
                    return s1;
                else
                {
                   temp = s1[j];
                   s1[j] = s1[i];
                   s1[i] = temp;
                   i++;
                   j--;
                }
            }
            else
                i++;
        }
        return s1;
    }
    
    bool isvowels(char a)
    {
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' \
        || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
            return true;
        else
            return false;
    }
};