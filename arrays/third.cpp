//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int x = 0;
        int x2 = 0;
        for(int i=1;i<=n;i++){
            x = x^i;
            if(i!=n){
                x2 = x2^array[i-1];
            }
        }
        return x^x2;
    }
};