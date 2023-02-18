#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> & v,int low,int mid,int high){
    vector<int> left;
    vector<int> right;
    for(int i=low;i<=mid;i++){
        left.push_back(v[i]);
    }
    for(int i=mid+1;i<=high;i++){
        right.push_back(v[i]);
    }
    int i = 0;
    int j = 0;
    int k = low;
    int lmax = left.size();
    int rmax = right.size();
    while(i<lmax && j<rmax){
        if(left[i]<=right[j]){
            v[k]=left[i];
            i++;
        }
        else{
            v[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<lmax){
        v[k]=left[i];
        k++;
        i++;
    }
    while(j<rmax){
        v[k]=right[j];
        k++;
        j++;
    }

}

void mergesort(vector<int> & v,int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        // cout<<"here"<<" "<<mid<<endl;
        mergesort(v,low,mid);
        mergesort(v,mid+1,high);
        merge(v,low,mid,high);
    }
}

int main(){
    vector<int> v = {1,4,2,5,3,2};
    mergesort(v,0,v.size()-1);
    for(auto x : v){
        cout<<x<<" ";
    }   
}