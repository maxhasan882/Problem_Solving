#include<bits/stdc++.h>
using namespace std;
void rec(int n)
{
    if(n == 1)
    {
        printf("%d\n", n);
        return ;
    }
    rec(n-1);
    printf("%d\n", n);
}
int mian()
{
    rec(10);
    return 0;
}
