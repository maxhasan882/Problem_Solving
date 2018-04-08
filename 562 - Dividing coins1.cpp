#include<bits/stdc++.h>
using namespace std;
int change = 0,coin[150],n, coun = 0, dp[6000][6000], sum = 0;

int coinChange(int i, int amount)
{
    int ret1 = 0, ret2 = 0;
    if((amount+coin[i])>=change or i>=n)
    {
        //cout<<"Change = "<<amount+coin[i]<<endl;
        return amount+coin[i];
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
    //cout<<max(ret1,ret2)<<endl;
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
        int am = change;
        change/=2;
        //cout<<am<<endl;
        int k = coinChange(0,0);
        int l = am - k;
        cout<<abs(k-l)<<endl;
        change = 0;
    }
    return 0;
}
