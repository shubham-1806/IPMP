#include <bits/stdc++.h> 
using namespace std;
 

//didnt find thing to submit online :(
//I have assumed 1-indexed array

int binsearch(int start,int end,vector<int>& vect){
    if(start>end){
        return -1;
    }
    else{
        int mid = (start+end)/2;
        if(vect[mid]==mid+1){
            return mid+1;
        }
        else if(vect[mid]>(mid+1)){
            if (binsearch(0,mid-1,vect)==-1){
                return binsearch(vect[mid],end,vect);
            }
            return binsearch(0,mid-1,vect);
        }
        else{
            if(binsearch(mid+1,end,vect)==-1){
                return binsearch(0,min(vect[mid]+1,(int)vect.size()),vect);
            }
            return binsearch(mid+1,end,vect);
        }
    }
}


int main()
{
    int n;
    cin>>n;
    vector<int> inp(n);
    int start = 0;
    int end = n-1;
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    cout<<binsearch(0,n-1,inp)<<endl;
}