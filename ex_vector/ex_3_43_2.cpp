#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const size_t m = 3, n = 4;
    int ia[m][n] = {1,2,3,4,5,6,7,8,9,0,1,2};
    // version 2
    for (int (&row)[4] : ia){
        for (int &col : row){
            cout << col << endl;
        }
    }

    return 0;
}