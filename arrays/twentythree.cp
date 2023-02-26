// https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    vector<int> mm(N);
	    for(int i=0;i<N;i++){
	        mm[i] = mat[i][0];
	    }
	    auto it1 = lower_bound(mm.begin(),mm.end(),X);
	    if( it1!=mm.end() && *it1==X){
	        return 1;
	    }
	    else if(it1==mm.begin()){
	        return 0;
	    }
	    else{
	        it1--;
	        int num = it1-mm.begin();
	        auto it2 = lower_bound(mat[num].begin(),mat[num].end(),X);
	        if(it2==mat[num].end()){
	            return 0;
	        }
	        else if(*it2==X){
	            return 1;
	        }
	        else{
	            return 0;
	        }
	    }
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends