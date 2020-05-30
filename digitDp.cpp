

// I can use up to limit of string a and need the digit sum == need.

// return sum of digit == i below the no. represent by string a 

int dp[][][];

int digitDp(int pos, int flag, int sum){

    if(pos == a.size())
        return sum == need;

    if(dp[pos][flag][sum] != -1){
        return dp[pos][flag][sum];
    } 

    int ans = 0;
    if(flag == 1){
        for(int j = 0; j <= 9; ++j){
            ans = (ans + digitDp(pos + 1, flag, sum + j)) % mod;
        }
    }
    else{
        int mx = a[pos] - '0';
        for(int i = 0; i <= mx; ++i){
            if(i == mx)
                ans = (ans + digitDp(pos + 1, flag, sum + i)) % mod;
            else
                ans = (ans + digitDp(pos + 1, 1, sum + i)) % mod;
        }
    }
    return  dp[pos][flag][sum] = ans;
}
