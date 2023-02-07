// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

//subfuntions here can be used to implement floor and ceil so not uploading seperately

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

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int initial = binsearch(nums,0,n-1,target);
        int ind1,ind2;
        ind1=initial;
        ind2=initial;
        while(ind1!=0 && binsearch(nums,0,ind1-1,target)!=-1){
            ind1 = binsearch(nums,0,ind1-1,target);
        }
        while(ind2!=(n-1) && binsearch(nums,ind2+1,n-1,target)!=-1){
            ind2 = binsearch(nums,ind2+1,n-1,target);
        }
        return {ind1,ind2};
    }
};