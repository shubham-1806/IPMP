//https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        lis.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>lis[lis.size()-1]){
                lis.push_back(nums[i]);
            }
            else{
                auto it = lower_bound(lis.begin(),lis.end(),nums[i]);
                int ind = it -lis.begin();
                lis[ind] = nums[i];
            }
        }
        return lis.size();
    }
};