#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> hash;
        hash['I'] = 1;
        hash['V'] = 5;
        hash['X'] = 10;
        hash['L'] = 50;
        hash['C'] = 100;
        hash['D'] = 500;
        hash['M'] = 1000;
        int result = 0;
        int last = 0;
        for (int i = 0; i != s.size(); i++){
            result += hash[s[i]];
            if (last < hash[s[i]]){
                result -= 2*last;
            }
            last = hash[s[i]];
        }
        return result;
    }
};


int main()
{
    Solution sol;
    cout << sol.romanToInt("MCMXCIV") << endl;
    return 0;
}