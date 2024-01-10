#include <iostream>
#include <string>

using namespace std;

int fact(int num){
    int res = 1;
    while (num > 1)
        res *= num--;
    return res;
}

int main()
{
    int num;
    cout << "Enter a number to calc the factorial:" << endl;
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num) << endl;
    return 0;
}