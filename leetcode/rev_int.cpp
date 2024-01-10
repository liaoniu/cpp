#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int sol = 0;
        do{
            sol = sol*10 + x%10;
            x = x/10;
        }while(x != 0);
        return sol==x;
    }
    
};


int main()
{
    Solution sol;
    cout << sol.isPalindrome(121);
    return 0;
}