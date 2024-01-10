#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int arr1[] = {1,3,5,7}, arr2[] = {1,3,5,7};
    auto *b1 = begin(arr1), *b2 = begin(arr2), *e1 = end(arr1), *e2 = end(arr2);
    if (e1-b1 == e2 - b2){
        while (b1 != e1 && *b1==*b2){
            b1++;
            b2++;
        }
    }
    else
        cout << "not euqal" << endl;
    if (b1 == e1)
        cout << "equal" << endl;
    else
        cout << "not euqal" << endl;
    return 0;
}