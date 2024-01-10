#include <iostream>
#include <vector>
#include <tuple>
using mat = int [][];
using namespace std;

struct Solution{
public:
    tuple<int[n][n], int > Chain_Order(vector<int> p){
        int n = p.size() - 1;
        mat M (n, vector<int> (n));
        mat S (n, vector<int> (n));
        M.fill();
        for (int i = 0; i != n; i++){
            
        }
    }
};

int main()
{
    vector<int> p;
    p.insert(p.end(), {30, 35, 15, 5, 10, 20, 25});
    int n = p.size() - 1;
    Solution sol;
    mat M (n, vector<int> (n));
    mat S (n, vector<int> (n));
    tie(M, S) = sol.Chain_Order(p);
    return 0;
}