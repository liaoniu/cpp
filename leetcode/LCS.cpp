#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h> 
using namespace std;
using mat = vector<vector<int>>;

struct Solution
{
    public:
        tuple<int, string> LCS(string x, string y){
            int m = y.size() + 1, n = x.size() + 1;
            mat M(m, vector<int> (n,0));
            mat S(m, vector<int> (n,-1));
            for (int i = 1; i != m; i++){
                for (int j = 1; j != m; j++){
                    if (y[i] == x[j]){
                        M[i][j] = M[i-1][j-1] + 1;
                        S[i][j] = 0;
                    }
                    else if (M[i-1][j] < M[i][j-1]){
                        M[i][j] = M[i][j-1];
                        S[i][j] = 2;
                    }
                    else{
                        M[i][j] = M[i-1][j];
                        S[i][j] = 1;
                    }
                }
            }
            string s = "";
            int i = m - 1, j = n - 1;
            
            while (M[i][j] != 0){
                switch (S[i][j])
                {
                case 0:
                    s.append(1, y[i-1]);
                    i--;
                    j--;
                    break;
                
                case 1:
                    j--;
                    break;
                case 2:
                    i--;
                    break;
                default:
                    break;
                }
                
            }
            reverse(s.begin(), s.end());
            return tie(M[m-1][n-1], s);
        }
};


int main()
{
    Solution sol;
    int c;
    string s;
    string x = "BDCABA", y = "ABCBDAB";
    tie(c, s) = sol.LCS(x,y);
    cout << s << endl;
    return 0;
}