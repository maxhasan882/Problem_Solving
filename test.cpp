#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[6000];
    cin>>n;
    for(int i = 1; i<=n; i++)cin>>arr[i];
    if(n<3){cout<<"NO"<<endl;return 0;}
    for(int i = 1; i<=n; i++)
    {
        int a = arr[arr[i]];
        int b = arr[a];
        int c = arr[b];
        if(arr[i] == c){cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
