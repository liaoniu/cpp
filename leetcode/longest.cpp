#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> visited(256,-1);
        int left = 0, right = 1;
        int max = 1;
        int count = 1;
        if (s.size() == 0 || s.size() == 1){
            return s.size();
        }
        visited[s[left]] = left;
        while (right != s.size()){
            if (visited[s[right]] == -1){
                visited[s[right]] = right;
                right++;
                count++;
            }
            else{
                if (count > max){
                    max = count;
                }
                int end = visited[s[right]] + 1;
                for (int i = left; i != end; i++){
                    visited[s[i]] = -1;
                }
                left = end;
                count = right - left;
                
            }
        }
        if (count > max){
            max = count;
        }
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