#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int max = 0;
        string max_string;
        if (s.size() == 1 || s.size() == 0){
            return s;
        }

        //odd substr
        for (int i = 0; i != s.size()-1 ; i++){
            int curr = 1;
            int j = 1;
            while (j!=i+1 && i+j != s.size()){
                if (s[i-j] == s[i+j]){
                    curr += 2;
                    j++;
                }
                else
                    break;
            }
            if (curr > max){
                max = curr;
                max_string = s.substr(i-j+1, i+j-1);
            }
        }

        //even substr
        int max2 = 0;
        string max_string2;
        for (int i = 0; i != s.size()-1; i++){
            int curr = 0;
            int j = 0;
            while (j!=i+1 && i+j+1 != s.size()){
                if (s[i-j] == s[i+j+1]){
                    curr += 2;
                    j++;
                }
                else
                    break;
            }
            if (curr > max2){
                max2 = curr;
                max_string2 = s.substr(i-j+1, i+j);
            }
        }

        if (s.size() == 2 && s[0] == s[1])
            return s;
        if (max == 0 && max2 == 0)
            return s.substr(0,1);

        if (max > max2)
            return max_string;
        return max_string2;




    }
};


int main()
{
    string s = "ccb";
    Solution sol;
    cout << sol.longestPalindrome(s) << endl;

    return 0;
}