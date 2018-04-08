#include<bits/stdc++.h>
using namespace std;

long long change,coin[] = {1,5,10,25,50},n = 5, coun = 0, dp[10][30005];

long long coinChange(long long i, long long amount)
{
    long long ret1 = 0, ret2 = 0;
    if(i>=n)
    {
        if(amount == 0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1)
    {
        return dp[i][amount];
    }
    if(amount-coin[i]>=0)
    {
        ret1 = coinChange(i,amount-coin[i]);
    }
    ret2 = coinChange(i+1, amount);
    return dp[i][amount] = ret1+ret2;
}
int main()
{
    freopen("in.txt", "rt", stdin);
    freopen("out.txt", "wt", stdout);
    memset(dp,-1, sizeof dp);
    long long m;
    while(~scanf("%lld", &m))
    {
       long long k = coinChange(0,m);
       if(k == 1 or k == 0)
       {
           printf("There is only %lld way to produce %lld cents change.\n", k,m);
       }
       else
       printf("There are %lld ways to produce %lld cents change.\n", k,m);
    }
    return 0;
}
