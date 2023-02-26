//https://practice.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        vector<int> v(3,-1);
        int flag=0;
        for(int i=0;i<N;i++){
            if(v[0]==-1){
                v[0] = arr[i];
            }
            else if(v[1]==-1){
                if(arr[i]<v[0]){
                    v[0]=arr[i];
                }
                else if(arr[i]>v[0]){
                    v[1]=arr[i];
                }
            }
            else{
                if(arr[i]<v[0]){
                    int temp = arr[i];
                    int j = i+1;
                    while(j<N){
                        if(arr[j]>v[1]){
                            v[2] = arr[j];
                            break;
                        }
                        if(arr[j]>temp && arr[j]<v[1]){
                            v[0] = temp;
                            v[1] = arr[j];
                            break;
                        }
                        j++;
                    }
                    i=j;
                }
                else if(arr[i]>v[0] && arr[i]<v[1]){
                    v[1] = arr[i];
                }
                else if(arr[i]>v[1]){
                    v[2] = arr[i];
                }
            }
            if(v[2]!=-1){
                flag = 1;
                break;
            }
        }
        if(flag){
            return v;
        }
        else{
            vector<int> l;
            return l;
        }
    }
};