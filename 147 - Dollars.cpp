#include<bits/stdc++.h>
using namespace std;

long long change,coin[] = {1,2,5,10,20,50,100},coin1[] = {5,10,20,50},n = 7,m = 4, coun = 0, dp[10][7500],dp1[10][7500], arr[7489+7];

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
long long coinChange1(long long i, long long amount)
{
    long long ret1 = 0, ret2 = 0;
    if(i>=m)
    {
        if(amount == 0)return 1;
        else return 0;
    }
    if(dp1[i][amount]!=-1)
    {
        return dp1[i][amount];
    }
    if(amount-coin1[i]>=0)
    {
        ret1 = coinChange1(i,amount-coin1[i]);
    }
    ret2 = coinChange1(i+1, amount);
    return dp1[i][amount] = ret1+ret2;
}
int main()
{
    memset(dp,-1, sizeof dp);
    memset(dp1,-1, sizeof dp1);
    string str;
    while(getline(cin,str))
    {
        if(str == "0.00")return 0;
        int len  = str.length();
        int flag = 0,before = 0,after = 0,gun1 = 1, gun2 = 1;
        for(int i = len-1; i>=0; i--)
        {
            if(str[i]==' ')
            {
                break;
            }
            if(str[i] == '.')
            {
                flag = 1;
                continue;
            }
            if(flag == 1)
            {
                before+=(str[i]-48)*gun1;
                gun1*=10;

            }
            else
            {
                after+=(str[i]-48)*gun2;
                gun2*=10;
            }
        }
        cout<<before<<" "<<after<<endl;
        int sum = 0;
        if(before!=0)
        {
            sum+=coinChange(0,before);
            sum+=coinChange1(0,before*100);
        }
        if(after!=0)
        {
            sum+=coinChange1(0,after);
        }
        cout<<sum<<endl;
    }
    return 0;
}
