//https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        for(int i=0;i<N;i++){
            int counter = 0;
            for(int j=0;j<M;j++){
                if(A[i][j]==1) counter++;
            }
            A[i][0] = counter;
        }
        int minn=0;
        int curr = 1000000;
        for(int i=0;i<N;i++){
            if(A[i][0]<curr){
                curr = A[i][0];
                minn = i;
            }
        }
        return minn+1;
    }
};