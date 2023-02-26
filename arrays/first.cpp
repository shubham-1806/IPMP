//https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        for(auto x : nums1){
            if(m.find(x)==m.end()){
                m[x]=1;
            }
        }
        for(auto x : nums2){
            if(m.find(x)!=m.end()){
                m[x]=2;
            }
        }
        vector<int> ans;
        for(auto x : m){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};