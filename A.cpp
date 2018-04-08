#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    string str;
    cin>>n;
    cin>>str;
    for(int i = 0; i<n;)
    {
        flag = 0;
        cout<<str[i];
        while((str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'y') and i!=n)
        {
            flag = 1;
            i++;
        }
        if(i<n and flag == 1)cout<<str[i];
        i++;
    }
    cout<<endl;
}
