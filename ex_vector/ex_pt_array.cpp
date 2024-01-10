#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int arr[10];
    for (int &i:arr)
        i = 10;
    
    auto *b = begin(arr), *e = end(arr);
    while (b!=e){
        *b = 0;
        cout << *b << endl;
        b++;
    }
    return 0;

}