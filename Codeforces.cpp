#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,cpy = 0,diff;
    cin>>x>>y;
    cpy = y-1;
    diff  = x- cpy;
    if(diff<0 or diff&1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}

