#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
int main()
{
   int cases;
   int i,j,m,n,size,ans;
   char in[MAX][MAX+1];
   for(scanf("%d",&cases);cases;cases--){
      scanf("%d%d",&n,&m);
      for(i=0;i<n;i++)
         scanf("%s",in[i]);
      ans=0;
      for(i=0;i<n;i++)
         for(j=0;j<m;j++)
            for(size=1;i+size<n && j+size<m;size++)
               if(in[i][j]==in[i+size][j] && in[i][j]==in[i][j+size] &&
                     in[i][j]==in[i+size][j+size])
                  ans++;
      printf("%d\n",ans);
   }
   return 0;
}