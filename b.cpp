#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,w,k, sum = 0;
    cin>>n>>w>>k;
    for(long long i = 1; i<=k; i++)
    {
        sum+=n*i;
    }
    long long need = sum - w;
    if(need<=0)cout<<0<<endl;
    else cout<<need<<endl;
    return 0;
}

