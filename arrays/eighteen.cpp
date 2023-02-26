//https://practice.geeksforgeeks.org/problems/minimum-difference-pair5444/1

class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
        sort(nums.begin(),nums.end());
        int curr_diff = nums[1]-nums[0];
        for(int i=1;i<nums.size();i++){
            curr_diff = min(curr_diff,nums[i]-nums[i-1]);
        }
        return curr_diff;
   	}    
};