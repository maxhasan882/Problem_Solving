#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        map<int,int>mp;
        if(n==0 and m == 0)return 0;
        for(int i = 0; i<n; i++)
        {
            int k;
            cin>>k;
            mp[k] = 1;
        }
        int coun = 0;
        for(int i = 0; i<m; i++)
        {
            int v;
            cin>>v;
            if(mp.find(v)!=mp.end())coun++;
        }
        cout<<coun<<endl;
    }
    return 0;
}
