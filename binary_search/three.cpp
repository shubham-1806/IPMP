#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    int l = lower_bound(v.begin(),v.end(),k)-v.begin();
    int r = upper_bound(v.begin(),v.end(),k) - v.begin();
    if((r-l)>(n/2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}