//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int x = 0;
        for(auto y : nums){
            x^=y;
        }
        x = x&(~(x-1));
        int x1=0;
        int x2=0;
        for(auto y : nums){
            if(x&y){
                x1^=y;
            }
            else{
                x2^=y;
            }
        }
        return {min(x1,x2),max(x1,x2)};
    }
};