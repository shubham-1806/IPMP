#include <bits/stdc++.h>
using namespace std;


int find_pos(vector<int>& v,int low,int high){
    int i = low-1;
    int piv = v[high];
    for(int k=low;k<high;k++){
        if(v[k]<piv){
            swap(v[k],v[++i]);
        }
    }
    swap(v[++i],v[high]);
    return i;
}

void qs(vector<int>&v,int low,int high){
    if(low<high){
        int pos = find_pos(v,low,high);
        qs(v,low,pos-1);
        qs(v,pos+1,high);
    }
}


int main(){
    vector<int> v = {1,4,2,5,3,2};
    qs(v,0,v.size()-1);
    for(auto x : v){
        cout<<x<<" ";
    }   
}