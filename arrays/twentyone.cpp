
//https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
  
    void recurse(int arr[],int i){
        int curr = arr[abs(arr[i])];
        if(arr[i]==0){
            return;
        }
        else{
            if(curr>0){
                arr[abs(arr[i])]*=(-1);
                return;
            }
            else{
                arr[abs(arr[i])]*=0;
                recurse(arr,abs(curr));
            }
        }
    }
  
    vector<int> duplicates(int arr[], int n) {
        vector<int> v;
        int zrcnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zrcnt++;
            }
        }
        if(zrcnt>1){
            v.push_back(0);
        }
        for(int i=0;i<n;i++){
            recurse(arr,i);
        }
        for(int i=1;i<n;i++){
            if(arr[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends