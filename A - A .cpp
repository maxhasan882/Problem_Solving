#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &m);
        if(m&1)flag = 1;
    }
    if(flag)
    cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}
