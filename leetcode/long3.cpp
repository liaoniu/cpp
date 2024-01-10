#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int left = 0, right = 0;
        int max = 0;
        int count = 0;
        vector<int> hash(256,-1);
        
        while (right != s.size()){
            if (hash[s[right]] == -1){
                hash[s[right]] = right;
                right++;
                count++;
            }
            else{
                max = ((count > max) ? count : max);
                while (hash[s[right]] != -1){
                    hash[s[left]] = -1;
                    left++;
                }
                count = right - left;
            }
        }
        max = ((count > max) ? count : max);
        return max;

    }
};


int main()
{
    string s = "abcabcbb";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;

}