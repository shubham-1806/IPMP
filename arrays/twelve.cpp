//https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        for(int i=0;i<N+2;i++){
            arr[abs(arr[i])-1]*=-1;
        }
        vector<int> v;
        for(int i=0;i<N;i++){
            if(arr[i]>0){
                v.push_back(i+1);
            }
        }
        return v;
    }
};