#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Solution {
public:
    bool isMatch(string s, string p) {
        const unsigned int m = s.size() + 1, n = p.size() + 1;
        if (s.size() == 0 && p.size() == 0)
            return true;
        if (p.size() == 0)
            return false;
        bool dp[m][n];
        dp[0][0] = true;
        for (int i = 2; i != n; i++){
            if (p[i-1] == '*'){
                dp[0][i] = dp[0][i-2];
            }
        }

        for (int i = 1; i != m; i++){
            for (int j = 1; j != n; j++){
                if (s[i-1] == p[j-1] || p[j-1] == '.'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if (p[j-1] == '*'){
                    dp[i][j] = dp[i][j-2];
                    if (p[j-2] == s[i-1] || p[j-2] == '.'){
                        dp[i][j] = (dp[i][j] || dp[i-1][j]);
                    }
                }
            }
        }

        return dp[m-1][n-1];
        }
    
};




int main()
{
    Solution sol;
    cout << sol.isMatch("mississippi", "mis*is*p*.") << endl;
    return 0;
}