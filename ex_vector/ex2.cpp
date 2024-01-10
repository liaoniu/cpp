#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> iivec(10,1);
    vector<int> ivec;
    for (int i=0; i != 10; i++)
        ivec.push_back(i);


    for (auto it = ivec.begin();
        it != ivec.end(); it++)
        *it *= 2;

    for (int i:ivec)
        cout << i;
    return 0;

}