#include<bits/stdc++.h>
using namespace std;
int change = 0,coin[150],n, coun = 999999999, dp[50][4000], sum = 100;

int coinChange(int i, int amount)
{
    //cout<<"YES"<<endl;
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
    //cout<<ret1<<" hh "<<ret2<<endl;
    coun = min(coun,min(dif1,dif2));
    return dp[i][amount] = max(ret1,ret2);
}
int main()
{
    int test;
    int flag  = 0;
    cin>>test;
    while(test--)
    {
        if(flag == 0)
        {
           memset(dp,-1, sizeof dp);
        }
        char ch;
        int k;
        n = 0;
        while(scanf("%d%c", &k, &ch))
        {
            coin[n++] = k;
            change+=k;
            if(ch == '\n')break;
        }
        sum= change;
        change/=2;
        //cout<<n<<endl;
        if(sum&1)
        {
            cout<<"NO"<<endl;
            flag = 1;
        }
        else
        {
            flag = 0;
            int k = coinChange(0,0);
            //cout<<"K = "<<coun<<endl;
            if(coun== 0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        change = 0;
        coun = 99999999;
    }
    return 0;
}
