#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,arr[150], minn = 9999999,maxx= -1, minn_pos,maxx_pos;
    cin>>m;
    for(int i = 0; i<m; i++)
    {
        cin>>n;
        if(n<=minn)
        {
            minn_pos = i;
            minn = n;
        }
        if(maxx<n)
        {
            maxx_pos = i;
            maxx = n;
        }
    }
    int ans;
    if(minn_pos<maxx_pos)
    {
        ans = abs(m-minn_pos)+abs(1-maxx_pos);
    }
    else
    {
        ans = abs(m-minn_pos)+abs(0-maxx_pos);
    }
    cout<<ans<<endl;
    return 0;
}


