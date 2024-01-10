#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    string intToRoman(int num) {
        string roman;
        int num_M = num/1000;
        roman.append(num_M, 'M');
        num = num%1000;
        int num_D = num/500;
        int num_C = num/100;
        if (num_C == 4){
            roman.append("CD");
            num = num%100;
        }
        else if (num_C == 9){
            roman.append("CM");
            num = num%100;
        }
        else{
            num_D = num/500;
            num = num%500;
            num_C = num/100;
            roman.append(num_D, 'D');
            roman.append(num_C, 'C');
            num = num%100;
        }


        int num_L = num/50;
        int num_X = num/10;
        if (num_X == 4){
            roman.append("XL");
            num = num%10;
        }
        else if (num_X == 9){
            roman.append("XC");
            num = num%10;
        }
        else{
            num = num%50;
            num_X = num/10;
            roman.append(num_L, 'L');
            roman.append(num_X, 'X');
            num = num%10;
        }

        if (num == 4){
            roman.append("IV");
        }
        else if (num == 9){
            roman.append("IX");
        }
        else{
            roman.append(num/5, 'V');
            num = num%5;
            roman.append(num, 'I');
        }

        return roman;
    }
};



int main()
{
    Solution sol;
    cout << sol.intToRoman(3) << endl;
    return 0;
}