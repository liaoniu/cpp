#include <iostream>
#include <vector>

using namespace std;

int main()
{
    constexpr size_t m = 3, n = 4;
    int ia[m][n] = {1,2,3,4,5,6,7,8,9,0,1,2};
    // version 1
    for (size_t i = 0; i != m ; i++){
        for (size_t j = 0; j != n; j++){
            cout << ia[i][j] << endl;
        }
    }

    // version 2
    for (int (&row)[4] : ia){
        for (int &col : row){
            cout << col << endl;
        }
    }

    // version 3
    for (int (*row)[4] = begin(ia); row != end(ia); row++){
        for (int *col = begin(*row); col != end(*row); col++){
            cout << *col << endl;
        }
    }

    return 0;
}