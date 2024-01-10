#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    int a, b;
    
    while (cin >> a >> b){
        try{
            if (b==0)
                throw runtime_error("The second value cannot be 0.");
            cout << static_cast<double>(a)/ b << endl;
            return 0;
        } catch (runtime_error err){
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if ( !cin || c == 'n')
                break;
        } 
    }




}