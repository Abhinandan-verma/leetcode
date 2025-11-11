class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;  // If needle is empty, return 0

        int hLen = haystack.size();
        int nLen = needle.size();

        if (nLen > hLen) return -1;

        for (int i = 0; i <= hLen - nLen; ++i) {
            int j = 0;
            while (j < nLen && haystack[i + j] == needle[j]) {
                ++j;
            }
            if (j == nLen) return i;  // Found the needle
        }

        return -1;  // Needle not found
    }
};
