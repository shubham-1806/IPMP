//https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        ll x = 0;
        for(int i=0;i<N;i++){
            x^=Arr[i];
        }
        x = x&(~(x-1));
        ll x2 = 0;
        ll x3=0;
        for(int i=0;i<N;i++){
            if(Arr[i]&x){
                x2^=Arr[i];
            }
            else{
                x3^=Arr[i];
            }
        }
        return {max(x2,x3),min(x2,x3)};
    }
};