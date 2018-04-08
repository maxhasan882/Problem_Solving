#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   while(test--)
   {
       long long v,k,n, m,x,y,g,ct;
       cin>>v>>k;
       g = v-1;
       n = sqrt(g);
       m = cbrt(g);
       x = g - (n+m-1);
       //cout<<"1 to = "<<x<<endl;
       n = sqrt(k);
       m = cbrt(k);
       y = k - (m+n-1);
       //cout<<"all = "<<<<endl;
       ct = y-x;
       cout<<ct<<endl;
   }
    return 0;
}
