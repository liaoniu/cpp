#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        bool neg = false;
        int sol = 0;
        int sign = 1;
        bool have_sgn = false;
        for (int i = 0; i != s.size(); i++){
            if (s[i] == ' ')
                continue;

            if (s[i] == '+' && have_sgn == false){
                have_sgn = true;
                continue;
            }
                
            if (s[i] == '-' && have_sgn == false){
                neg = true;
                have_sgn = true;
                sign = -1;
                continue;
            }
            if (isdigit(s[i])){
                if (sign*sol > INT_MAX/10)
                    return INT_MAX;
                if (sign*sol < INT_MIN/10)
                    return INT_MIN;
                sol *= 10;
                sol += s[i] - '0';
                
            }
 
            else{
                break;
            }
        }
        sol = neg ? -sol : sol;
        cout << sol << endl;
        return sol;
    }
};


int main()
{
    Solution sol;
    sol.myAtoi("+-42");
    return 0;
}