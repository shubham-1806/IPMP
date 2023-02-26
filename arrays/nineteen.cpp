// https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            vector<int> v(n);
            for(int i=0;i<n;i++){
                v[i] = arr[i];
            }
            sort(v.begin(),v.end());
            int curr_min = v[0]+v[n-1];
            for(int i=0;i<n;i++){
                auto it = lower_bound(v.begin(),v.end(),(v[i]*(-1)));
                if(it!=v.begin()){
                    auto it2 = it-1;
                    if((it2-v.begin())!=i){
                        if(abs(0-(v[i]+*it2))<abs(0-curr_min)){
                            curr_min = (v[i]+*it2);
                        }
                    }
                }
                if(it!=v.end()){
                    if((it-v.begin())!=i){
                        if(abs(0-(v[i]+*it))<abs(0-curr_min)){
                            curr_min = (v[i]+*it);
                        }
                    }
                }
            }
            return curr_min;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends