#include<bits/stdc++.h>
using namespace std;
char str[2005][2005];
int r[100],c[100];
int main()
{
    int n,m,tr, total = 0;
    cin>>n>>m>>tr;
    getchar();
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            scanf("%c", &str[i][j]);
        }
        getchar();
    }
    int rw = 1,col = 1,ans = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int k = 1; k<=m; k++)
        {
            if(str[i][k-1] == '*')
            {
                r[i] = 0;
                c[k] = 0;
            }
            else {
                r[i]++;
                c[k]++;
                if(r[i]>=tr)ans++;
                if(c[k]>=tr and tr!=1)ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
