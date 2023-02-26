//https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool check1=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=0;
            }
            if(nums[i]==1){
                check1=true;
            }
        }
        for(int i=0;i<nums.size();i++){
            // cout<<"bruh"<<endl;
            // cout<<nums[i]<<endl;
            // cout<<nums.size()<<endl;
            int a = nums[i];
            int b =nums.size();
            // cout<<a-b<<endl;
            if(nums[i]!=0 && nums[i]!=(-1) && a<=b){
                int val=nums[i];
                val=max(val,0-val);
                // cout<<val<<endl;
                if(nums[val-1]>0){
                    nums[val-1]*=(-1);
                }
                else if(nums[val-1]==0){
                    nums[val-1]=-1;
                }
                // for(auto x : nums){
                //     cout<<x<<" ";
                // }
                // cout<<endl;
            }
        }
        
        if(!check1){
            return 1;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=0){
                    if(i==0){
                        if(!check1){
                            return 1;
                        }
                    }
                    else{
                        return i+1;
                    }
                }
            }
            return nums.size()+1;
        }
    }
};