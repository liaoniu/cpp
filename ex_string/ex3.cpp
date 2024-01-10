#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string hex("0123456789ABCDEF");
    string::size_type n;
    string result;
    while (cin >> n)
        if (n < hex.size())
            result += hex[n];
    cout << result << endl;
    return 0;
}