#include <iostream>
using namespace std;

int main() {
    int val{3};
    int *ip1, *ip2;
    int *ip3 = &val;
    cout << ip3 << endl;
    ip1 = &val;
    cout << ip1 << endl;
    cout << *ip3 << endl;
    cout << *ip1 << endl;
    int *p1 = nullptr;
    cout << p1 << endl;
    return 0;
} 