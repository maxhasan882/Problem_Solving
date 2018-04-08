#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    string str;
    int test, t = 1;
    arr[2]=arr[3]=arr[5]=arr[7]=arr[11]=arr[13]=arr[17]=arr[19]=arr[23]=1;
    cin>>test;
    while(test--)
    {
        cin>>str;
        if(arr[str.length()]==1)
        {
            printf("Case %d: Bad luck\n",t++);
        }
        else
        {
            int k = str.length();
            while(k++)
            {
                if(arr[k]==1)
                {
                     printf("Case %d: %d i got it\n",t++,k);
                     break;
                }
            }
        }

    }
    return 0;
}
