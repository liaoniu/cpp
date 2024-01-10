#include <iostream>
#include <vector>

using namespace std;


void myPrint(vector<int>::iterator iter, vector<int>::iterator end)
{
    if (iter != end){
        cout << *iter << " ";
        myPrint(iter+1, end);
    }
}

int main()
{
    
    vector<int> vec = {1,2,3,4,5};
    myPrint(vec.begin(), vec.end());
    return 0;

}
