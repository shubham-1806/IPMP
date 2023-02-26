//https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        bool right = true;
        bool down = false;
        bool left = false;
        bool up = false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int rmin=0;
        int cmin=-1;
        int rmax=rows;
        int cmax=cols;
        int r=0;
        int c=0;
        vector<int> ans(rows*cols);
        for(int i=0;i<(rows*cols);i++){
            ans[i]=matrix[r][c];
            if(right){
                if((c+1)<cmax){
                    c++;
                }
                else{
                    right = false;
                    down = true;
                    cmax=c;
                }
            }
            if(down){
                if((r+1)<rmax){
                    r++;
                }
                else{
                    down = false;
                    left = true;
                    rmax = r;
                }
            }
            if(left){
                if((c-1)>cmin){
                    c--;
                }
                else{
                    left=false;
                    up=true;
                    cmin = c;
                }
            }
            bool from = false;
            if(up){
                if((r-1)>rmin){
                    r--;
                }
                else{
                    up=false;
                    right=true;
                    rmin=r;
                    from = true;
                }
            }
            if(right && from){
                if((c+1)<cmax){
                    c++;
                }
                else{
                    right = false;
                    down = true;
                    cmax=c;
                }
            }   
        }
        return ans;
    }
};