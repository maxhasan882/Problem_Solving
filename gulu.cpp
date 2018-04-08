#include<stdio.h>

long long fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int test,t = 1;
    scanf("%d", &test);
    while(test--)
    {
        long long n,result;
        scanf("%d", &n);
        result = fib(n+3);
        printf("Case %d: %lld\n",t++, result);
    }
    return 0;
}
