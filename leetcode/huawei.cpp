#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s;
    double numOfWords = 1;
    double totLength = 0;
    while (getline(cin, s))
    {
        for (char& c : s)
        {
            if (c != ' ')
            {
                totLength++;
            }
            else
            {
                numOfWords++;
            }
        }
    }
    
    double avgWeight = totLength/numOfWords;
    avgWeight = round(avgWeight*100)/100;
    cout << avgWeight << endl;

    return 0;

}