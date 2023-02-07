//https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
public:

    int binsearch(vector<int>& nums,int start,int end,int find){
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==find){
                return mid;
            }
            else if(nums[mid]>find){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0]<nums[n-1] || n==1){
            return binsearch(nums,0,n-1,target);
        }
        else{
            int start = 0;
            int end = n-1;
            int mid = (start+end)/2;
            while(start<=end){
                mid = (start+end)/2;
                if(mid==n-1){
                    break;
                }
                else if(mid==0){
                    if(nums[mid+1]>nums[mid]){
                        break;
                    }
                    else{
                        start = mid+1;
                    }
                }
                else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid]+1){
                    break;
                }
                else{
                    if(nums[mid]>nums[0]){
                        start = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }
            }
            // cout<<"here"<<endl;
            cout<<mid<<endl;
            if(mid==0){
                return binsearch(nums,0,n-1,target);
            }
            if(binsearch(nums,0,mid-1,target)==-1){
                return binsearch(nums,mid,n-1,target);
            }
            else{
                return binsearch(nums,0,mid-1,target);
            }
        }
    }
};


