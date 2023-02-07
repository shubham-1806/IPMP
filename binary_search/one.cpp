#include <bits/stdc++.h>
using namespace std;

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

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    cout<<binsearch(v,0,n-1,k);
}