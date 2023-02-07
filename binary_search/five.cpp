// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left=-1;
        for (int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                left = i;
                break;
            }
        }
        int right = -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                right = i;
                break;
            }
        }
        if(left == -1 || right== -1){
            return 0;
        }
        else{
            // cout<<left<<endl;
            // cout<<right<<endl;
            int minn_left = *min_element(nums.begin()+left,nums.end());
            int maxx_right = *max_element(nums.begin(),nums.end()-(nums.size()-right-1));
            int ans_left=-1;
            int ans_right=-1;
            // cout<<minn_left<<endl;

            for(int i=0;i<nums.size();i++){
                if(nums[i]>minn_left){
                    ans_left = i;
                    break;
                }
            }
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]<maxx_right){
                    ans_right =i;
                    break;
                }
            }
            return ans_right-ans_left+1;
        }
    }
};