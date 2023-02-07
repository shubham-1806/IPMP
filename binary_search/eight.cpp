// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int start=0;
	    int end=n-1;
	    int maxx=0;
	    while(start<=end){
	       int mid = (start+end)/2;
	       if(arr[mid]>maxx){
	           maxx=arr[mid];
	       }
	       if(mid==n-1){
	           break;
	       }
	       else{
	           if(mid==0){
	               break;
	           }
	           else{
	               if(arr[mid+1]<arr[mid] && arr[mid]>arr[mid-1]){
	                   break;
	               }
	               if(arr[mid+1]>arr[mid]){
	                   start=mid+1;
	               }
	               else{
	                   end=mid-1;
	               }
	           }
	       }
	    }
	    return maxx;
	}
};