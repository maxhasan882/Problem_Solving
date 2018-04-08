#include<bits/stdc++.h>
using namespace std;
int n, arr[100000+5], coun = 0, ckt[200], ckt1[200];
int vec[200][200];
int main()
{
   int test;
  for(int i = 1; i<=100; i++)
  {
      for(int j = 1; j<=100; j++)
      {
         int k = i*j;
         int v = sqrt(k);
         if(v*v == k)
         {
             vec[i][j] = 1;
             vec[j][i] = 1;
         }
         else
         {
             vec[i][j] = 0;
             vec[j][i] = 0;
         }
      }
  }
  scanf("%d", &test);
   while(test--)
   {
       scanf("%d", &n);
       memset(ckt,0,sizeof ckt);
       for(int i = 0; i<n; i++)
       {
           scanf("%d", &arr[i]);
           ckt[arr[i]]++;
       }
       for(int i = 0; i<n-1; i++)
       {
           ckt[arr[i]]--;
           for(int j = 1; j<=100; j++)
           {
               if(vec[arr[i]][j] == 1)
               {
                   coun+= ckt[j];
               }
           }
       }
       printf("%d\n", coun);
       coun = 0;
   }
    return 0;
}
