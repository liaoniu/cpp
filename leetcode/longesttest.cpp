#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        vector<int> hash(256, -1);
        int ptrL = 0, ptrR = 0;
        int count = 0;
        if (s.size() == 1 || s.size() == 0)
        {
            return s.size();
        }
        while (ptrR != s.length())
        {
            
            if (hash[s[ptrR]] == -1)
            {
                hash[s[ptrR]] = ptrR;
                count++;
            }
            
            else
            {
                maxLength = max(maxLength, count);
                while (s[ptrL] != s[ptrR])
                {
                    hash[s[ptrL]] = -1;
                    ptrL++;
                    count--;
                }
                ptrL++;
            }
            ptrR++;
        }
        maxLength = max(maxLength, count);
        return maxLength;
    }
};


int main()
{
    string s = "abcabcbb";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;

}