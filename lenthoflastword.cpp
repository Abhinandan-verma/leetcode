class Solution {
public:
    int lengthOfLastWord(string s) {


        int n = s.size();
        int length = 0;

        // Step 1: skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    

        
    }
};
