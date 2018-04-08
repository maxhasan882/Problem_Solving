#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   if(n>0 and m>0)cout<<1<<endl;
   else if(n>0 and m<0)cout<<4<<endl;
   else if(n<0 and m<0)cout<<3<<endl;
   else cout<<2<<endl;
    return 0;
}
