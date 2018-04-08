#include<bits/stdc++.h>
using namespace std;
const int maxx = 100005;
int tree[3*maxx], arr[maxx];
int get(int left, int right, int node,int st, int ed)
{
    if(ed<left or st>right)
    {
        return 99999999;
    }
    if(left>=st and right<=ed)
    {
        return tree[node];
    }
    int left_node = node*2;
    int right_node = node*2 + 1;
    int mid = (left+right)/2;
    int p = get(left,mid,left_node,st,ed);
    int q = get(mid+1,right,right_node,st,ed);
    return min(p,q);
}
void Seg(int left, int right, int node)
{
    if(left == right)
    {
        tree[node] = arr[left];
        return;
    }
    int left_node = node*2;
    int right_node = node*2 + 1;
    int mid = (left+right)/2;
    Seg(left,mid,left_node);
    Seg(mid+1,right,right_node);
    tree[node] = min(tree[left_node],tree[right_node]);
}
int main()
{
    int test,n,m,p,q,t = 1;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%d %d", &n, &m);
        for(int i = 1; i<=n; i++)
        {
            scanf("%d", &arr[i]);
        }
        Seg(1,n,1);
        printf("Case %d:\n", t++);
        for(int i = 0; i<m; i++)
        {
            scanf("%d %d", &p, &q);
            int sum = get(1,n,1,p,q);
            printf("%d\n", sum);
        }
    }
    return 0;
}
