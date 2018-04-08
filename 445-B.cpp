#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long n,x = 0,y = 0,coun = 0,m, up;
    cin>>n;
    cin>>str;
    for(int i = 0; i<n; i++)
    {
        if(str[i]=='U')y++;
        if(str[i]=='R')x++;
        if(i!=0 and i!=n-1 and x==y and str[i]==str[i+1])coun++;
    }
    cout<<coun<<endl;
    return 0;
}


