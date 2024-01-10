#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        auto p1 = nums.begin();
        auto p2 = p1 + 1, p3 = p1 + 2;
        auto end = nums.end();
        while(p1 + 2 != end){
            int sum = *p1 + *p2 + *p3;
            if (sum == 0){
                result.push_back(vector<int> {*p1, *p2, *p3});
            }
            p3++;
            if (p3 - end == 0){
                p2++;
                if (p2 + 1 == end){
                    p1++;
                    p2 = p1 + 1;
                }
                p3 = p2 + 1;
            }


        }
        return result;
    }
};


int main()
{
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, 4};
    s.threeSum(nums);
    return 0;
}