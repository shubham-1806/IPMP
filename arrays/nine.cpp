//https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:

    bool checkperfect(long double e){
        return ((ceil(e) - floor(e)) ==0);
    }

    bool judgeSquareSum(int c) {
        long double num = c;
        num = sqrt(num);
        for(long double i=0;i<=num;i++){
            if(checkperfect(sqrt((c-i*i)))){
                return true;
            }
        }
        return false;
    }
};
