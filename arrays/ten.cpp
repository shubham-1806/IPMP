//https://leetcode.com/problems/3sum/

class Solution {
public:

    vector<vector<int>> twosum(int num,int left,int right,vector<int>& nums){
        int i=left;
        int j=right;
        num*=(-1);
        vector<vector<int>> ans;
        while(i<j){
            if(i!=left && nums[i]==nums[i-1]){
                i++;
                if(j!=right && nums[j]==nums[j+1]){
                    j--;
                }
                continue;
            }
            if(j!=right && nums[j]==nums[j+1]){
                j--;
                continue;
            }
            if(nums[i]+nums[j]==num){
                vector<int> v;
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                i++;
                j--;
                ans.push_back(v);
            }
            else if((nums[i]+nums[j])>num){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            else{
                vector<vector<int>> twosumans = twosum(nums[i],i+1,nums.size()-1,nums);
                for(int j=0;j<twosumans.size();j++){
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(twosumans[j][0]);
                    v.push_back(twosumans[j][1]);
                    ans.push_back(v);
                }
            }   
        }
        return ans;
    }
};