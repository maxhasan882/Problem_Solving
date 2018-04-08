#include<bits/stdc++.h>
using namespace std;
int tree[3000], arr[1000];
void Update(int left, int right, int node,int pos, int newvalue)
{
    if(left>pos or right<pos)
    {
        return;
    }
    if(left == pos and right == pos)
    {
        tree[node] = newvalue;
        return;
    }
    int left_node = node*2;
    int right_node = node*2 + 1;
    int mid = (left+right)/2;
    Update(left,mid,left_node,pos,newvalue);
    Update(mid+1,right,right_node,pos,newvalue);
    tree[node] = tree[left_node]+tree[right_node];
}

int get(int left, int right, int node,int st, int ed)
{
    if(ed<left or st>right)
    {
        return 0;
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
    return p+q;
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
    tree[node] = tree[left_node]+tree[right_node];
}
int main()
{
    for(int i = 1; i<=7; i++)
    {
        cin>>arr[i];
    }
    Seg(1,7,1);
    int sum =  get(1,7,1,2,6);
    cout<<sum<<endl;

    int newvalue, pos;
    cin>>pos>>newvalue;
    Update(1,7,1,pos,newvalue);
    int sum1 =  get(1,7,1,2,6);
    cout<<sum1<<endl;
    return 0;
}
