#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int sol = 0;
        vector<int> vec;
        int i = 0;
        do{
            vec.push_back(x%10);
            x = x/10;
        }while(x!=0);
        for (int j : vec){
            sol += j;
            sol *= 10;
        }
        sol /= 10;
        cout << sol << endl;
        return sol;
    }
};


int main()
{
    Solution sol;
    sol.reverse(123);
    return 0;
}