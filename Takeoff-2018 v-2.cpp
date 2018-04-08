#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    string str,str1,str2;
    while(test--)
    {
       cin>>str>>str1>>str2;
       str.reverse();
       str1.reverse();
       str2.reverse();
       int len = max(str.length(),max(str1.length(),str2.lenght()));

    }
}
