#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    vector<int> ivec1 = {}, ivec2 = {};
    auto it1 = ivec1.cbegin(), it2 = ivec2.cbegin();
    auto e1 = ivec1.cend(), e2 = ivec2.cend();
    if (e1 - it1 == e2 - it2){
        while (it1 != e1 && *it1 == *it2){
            it1++;
            it2++;
        }
    }
    if (it1 == e1 && it2 == e2)
        cout << "eq" << endl;
    else
        cout << "not eq" << endl;
    return 0;
}