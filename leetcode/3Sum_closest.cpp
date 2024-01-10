#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min_distance = INT_MAX;
        int min_difference = INT_MIN;
        sort(nums.begin(), nums.end());
        for (int i = 0; i != nums.size() - 2; i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];
                int distance = abs(target - sum);
                int difference = sum - target;
                if (distance < min_distance){
                    min_distance = distance;
                    min_difference = difference;
                }
                
                if (difference < 0){
                    j++;
                }else if (difference > 0){
                    k--;
                }else{
                    return 0;
                }

            }
            if (min_difference > 0){
                return min_distance;
            }
            
        }
        return min_distance;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 2, 1, -4};
    s.threeSumClosest(nums, 1);
    return 0;
}