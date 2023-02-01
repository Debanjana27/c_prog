//Leetcode
//Code
class Solution {
public:
    
    int MOD = 1000000007;
    long long power(int n){
        long long ret = 1, p = 2;
        while(n){
            if(n&1){
                ret *= p;
                ret %= MOD;
            }
            p *= p;
            p %= MOD;
            n >>= 1;
        }
        return ret;
    }
    
    int monkeyMove(int n) {
        int ret = (power(n)-2+MOD)%MOD;
        return ret;
    }
};
