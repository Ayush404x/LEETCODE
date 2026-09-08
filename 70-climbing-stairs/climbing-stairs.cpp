// class Solution {
// public:
// int stair(int n){
//     if(n==2) return 2;
//     if(n==1) return 1;
//     int ans = stair(n-1) + stair(n-2);
//     return ans;
// }
//     int climbStairs(int n) {
//         return stair(n);

//     }
// };



// using dynamic programing not recursion 



class Solution {
public:
    int stair(int n, vector<int>& dp) {
        if(n == 1) return 1;
        if(n == 2) return 2;

        if(dp[n] != -1) //it is a dp varibale  dp = dynamic programing
            return dp[n];

        dp[n] = stair(n - 1, dp) + stair(n - 2, dp);

        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1); // dp vector
        return stair(n, dp);
    }
};