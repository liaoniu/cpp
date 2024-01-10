#include <iostream>

using namespace std;

int change(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    change(&a, &b);
    cout << a << b << endl;
    return 0;
}