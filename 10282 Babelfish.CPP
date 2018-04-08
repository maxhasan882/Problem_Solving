#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;
    string str,str1, line;
    while(getline(cin,line))
    {
        if(line=="")
        {
            break;
        }
        istringstream sin(line);
        sin>>str>>str1;
        mp[str1] = str;
    }
    while(cin>>str)
    {
        if(mp.find(str)!=mp.end())
        {
            cout<<mp[str]<<endl;
        }
        else cout<<"eh"<<endl;
    }
    return 0;
}
