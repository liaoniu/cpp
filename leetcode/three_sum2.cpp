#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for (int i = 0; i != nums.size()-2; i++)
        {
            int j = i+1;
            int k = nums.size()-1;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
            }
        }
        vector<vector<int>> ans;
        for (auto triplets : s)
        {
            ans.push_back({triplets[0], triplets[1], triplets[2]});
        }
        return ans;
    }
};