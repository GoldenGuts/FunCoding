#include <stdio.h>
#include<math.h>
int f(int x,int y)
{
    float result=pow(x,2)+y;
      double sr=sqrt(result);
    return ((sr - floor(sr)) == 0);
}

int main() {
 long x,y;
 long result=0,flag=0;
 long i;
 long j;
 scanf("%ld %ld",&x,&y);
 for(i=1;i<=x;i++)
   {
       for(j=1;j<=y;j++)
       {result=f(i,j);
       if(result==1)
        flag++;
        }
      // printf("%d ",flag); 
   }
   printf("%ld",flag);
	return 0;
}