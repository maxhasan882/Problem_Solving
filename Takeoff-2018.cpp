#include<bits/stdc++.h>
using namespace std;
bool check(string str)
{
    int len = str.length();
    bool flag = true;
    for(int i = 0; i<len; i++)
    {
        if(str[i] == '#')flag = false;
    }
    return flag;
}
int number(string str)
{
    int len = str.length(), multi = 1, number = 0;
    for(int i = len-1; i>=0; i--)
    {
        number+=(str[i]-48)*multi;
        multi*=10;
    }
    return number;
}
int main()
{
    int test, t = 1;
    cin>>test;
    while(test--)
    {
        int gap=0;
        string str,str1,str2;
        cin>>str>>str1>>str2;
        bool ck1 = check(str);
        bool ck2 = check(str1);
        bool ck3 = check(str2);
        if(ck1 and ck2)
        {
            int ans  = number(str) + number(str1);
            int  k = str2.length()-1;
            while(ans!=0)
            {
                if(str2[k]=='#')
                {
                    gap = ans%10;
                    break;
                }
                ans/=10;
                k--;
            }

        }
        else if(ck1 and ck3)
        {
            int ans  = abs(number(str) - number(str2));
            int k = str1.length()-1;
            while(ans!=0)
            {
                if(str1[k]=='#')
                {
                    gap = ans%10;
                    break;
                }
                ans/=10;
                k--;
            }
        }
        else
        {
            int ans  = abs(number(str2) - number(str1));
            int k = str.length()-1;
            while(ans!=0)
            {
                if(str[k]=='#')
                {
                    gap = ans%10;
                    break;
                }
                ans/=10;
                k--;
            }
        }
        printf("Case %d: %d\n", t++, gap);
    }
    return 0;
}
