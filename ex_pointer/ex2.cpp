#include <iostream>
using namespace std;

int main() {
    int val = 1024;
    int *p1 = &val;
    int **p2 = &p1;
    cout << &p1 << endl;
    cout << p2 << endl;
    cout << p1 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;
    return 0;
}