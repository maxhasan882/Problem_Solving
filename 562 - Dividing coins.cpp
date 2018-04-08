#include<bits/stdc++.h>
using namespace std;
int change = 0,coin[150],n, coun = 999999999, dp[105][25002], sum = 100;

int coinChange(int i, int amount)
{
    //cout<<"Amount = "<<amount<<endl;
    int ret1 = 0, ret2 = 0;
    if(i>=n)
    {
        return amount;
    }
    if(dp[i][amount]!=-1)
    {
        return dp[i][amount];
    }
    if(amount+coin[i]<=change)
    {
        ret1 = coinChange(i+1,amount+coin[i]);
    }
    ret2 = coinChange(i+1, amount);
    int k = sum - ret1;
    int l = sum - ret2;
    int dif1 = abs(k-ret1);
    int dif2 = abs(l-ret2);
    coun = min(coun,min(dif1,dif2));
    return dp[i][amount] = max(ret1,ret2);
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        memset(dp,-1, sizeof dp);
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            cin>>coin[i];
            change+=coin[i];
        }
        if(n==0)
        {
            cout<<0<<endl;
            coun = 99999999;
            continue;
        }
        sum= change;
        change/=2;
        int k = coinChange(0,0);
        cout<<coun<<endl;
        change = 0;
        coun = 99999999;
    }
    return 0;
}
