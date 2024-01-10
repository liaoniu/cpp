#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    /*
    for (decltype(s.size()) i = 0; 
        i != s.size(); i++)
        s[i] = 'X';
    */
    decltype(s.size()) i = 0;
    while (i != s.size()){
        s[i] = 'X';
        i++;
    }
        

    cout << s << endl;
    return 0;
}