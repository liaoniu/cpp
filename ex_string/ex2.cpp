#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (decltype(str.size()) i=0; 
    i != str.size() && !isspace(str[i]); i++)
        str[i] = toupper(str[i]);
    cout << str << endl;
    return 0;

}