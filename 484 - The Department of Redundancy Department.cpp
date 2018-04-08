#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str, str1[100000];
    map<string, int>mp;
    map<string, int>mp1;
    int k = 0,j = 0;
    char ch;
    while(getline(cin,str))
    {
        int len  = str.length();
        j = 0;
        while(j<len)
        {
            string nk;
            while(str[j]!=' ')
            {
                nk+=str[j];
                j++;
                if(j == len)break;
            }
            if(str.length()>0)
            {
                mp[nk]++;
                str1[k++] = nk;
            }
            j++;
            if(len == j)break;
        }
    }
    for(int i = 0; i<k; i++)
    {
        if(mp1[str1[i]]!=-1 and str1[i].length()>0)
        {
            cout<<str1[i]<<" "<<mp[str1[i]]<<endl;
            mp1[str1[i]]=-1;
        }
    }
    return 0;
}
