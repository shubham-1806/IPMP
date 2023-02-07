//https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution {
public:

    int flag=0;

    //n elements before this
    int findnthpositionele(vector<int>& nums1, vector<int>&nums2,int n){
        // if(n==1){
        //     cout<<"------------------------------------------"<<endl;
        // }
        int start = 0;
        int end = nums1.size()-1;
        while(start<=end){
            // cout<<start<<" "<<end<<endl;
            int mid = (start+end)/2;
            int ini = mid;
            auto it = lower_bound(nums2.begin(),nums2.end(),nums1[mid]);
            int fini = it-nums2.begin();
            // cout<<"mid is "<<mid<<endl;
            // cout<<ini<<" "<<fini<<endl;
            // cout<<n<<endl;
            if ((ini+fini) == n){
                // cout<<"otha otha here"<<endl;
                flag=0;
                return mid;
            }
            else if((ini+fini)>n){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        // cout<<"come here";
        start = 0;
        end = nums2.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            int ini = mid;
            auto it = upper_bound(nums1.begin(),nums1.end(),nums2[mid]);
            // if(it!=nums1.end()){
            //     it--;
            // }
            int fini = it-nums1.begin();
            // cout<<"mid is "<<mid<<endl;
            // cout<<ini<<" "<<fini<<endl;
            // cout<<n<<endl;
            if (ini+fini == n){
                flag=1;
                return mid;
            }
            else if((ini+fini)>n){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        // cout<<"came here"<<endl;
        return -1;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int n =  nums1.size();
        int m = nums2.size();
        if((m+n)%2==0){
            int num1,num2;
            int ret2 = findnthpositionele(nums1,nums2,((m+n)/2));
            if(flag==0){
                num2 = nums1[ret2];
            }
            else{
                num2 = nums2[ret2];
            }
            // cout<<num2<<endl;
            int ret1 = findnthpositionele(nums1,nums2,((m+n)/2)-1);
            if(flag==0){
                num1 = nums1[ret1];
            }
            else{
                num1 = nums2[ret1];
            }
            // cout<<num1<<endl;
            return (((double)num1)+(num2))/2;
        }
        else{
            int ret1 = findnthpositionele(nums1,nums2,(((m+n)-1)/2));
            if(flag==0){
                return nums1[ret1];
            }
            else{
                return nums2[ret1];
            }
        }
    }
};