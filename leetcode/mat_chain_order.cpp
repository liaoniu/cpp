#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
using mat = vector<vector<int>>;


struct Solution{
public:
    tuple<mat, mat> Chain_Order(vector<int> p){
        int n = p.size() - 1;
        mat M (n, vector<int> (n,INT_MAX));
        mat S (n, vector<int> (n,0));
        for (int i = 0; i != n; i++){
            M[i][i] = 0;
        }
        for (int l = 1; l != n; l++){
            for (int i = 0; i != n - l; i++){
                int j = l + i;
                for (int k = i; k != j; k++){
                    int q = M[i][k] + M[k+1][j] + p[i]*p[k+1]*p[j+1];
                    if (q < M[i][j]){
                        M[i][j] = q;
                        S[i][j] = k;
                    }
                }
            }
        }
        return tie(M, S);
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
    cout << M[0][5] << endl;
    return 0;
}