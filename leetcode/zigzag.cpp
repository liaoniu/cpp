#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int m = 2*numRows - 2;
        string str_ls[numRows];
        if (numRows == 1)
            return s;

        for (int i=0; i != s.size(); i++){
            if (i%m < numRows){
                str_ls[i%m].push_back(s[i]);
            }
            else{
                int line = 2*numRows - 2 - i%m;
                str_ls[line].push_back(s[i]);
            }
        }
        string sol = "";
        for (string& k : str_ls){
            sol.append(k);
        }
        cout << sol << endl;
        return sol;
    }
};


int main()
{
    Solution sol;
    sol.convert("PAYPALISHIRING", 3);
    return 0;
}