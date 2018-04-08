#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,arr[100005], box = 0, pos = 1, maxx = 0;
    cin>>n>>k;
    for(int i = 0;i<k; i++)
    {
        cin>>arr[i];
        long long cal = n/arr[i];
        long long ans = cal*arr[i];
        if(ans>0 and ans>maxx)
        {
            maxx = ans;
            box = arr[i];
            pos = i+1;
        }
    }
    cout<<pos<<" "<<maxx/arr[pos-1]<<endl;
}
