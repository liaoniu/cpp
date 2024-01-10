#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    for (auto i = 0; i != 10; i++)
        ivec.push_back(i);
    
    int sought = 3;
    auto beg = ivec.begin(), end = ivec.end();
    auto mid = ivec.begin() + (end - beg)/2;
    while (mid != beg && *mid != sought){
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg)/2;
    }
    cout << *mid << endl;


}