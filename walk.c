#include<stdio.h>
#define getcx() getchar_unlocked()
inline int inp ( )
//fast input function
{
   int n=0;
   int ch=getcx();
//int sign=1;
   while( ch < '0' || ch > '9' )
{
 ch=getcx();
}
   while(  ch >= '0' && ch <= '9' )
          n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   //n=n*sign;
   return n;
}
int main()
{
    int t, n, w[100000],i,max;
 
    t=inp();
 
    while(t--)
    {
        n=inp();
 
        w[0]=inp();
        max=w[0];
        for(i=1;i<n;i++)
        {
            w[i]=inp();
            if(max<(w[i]+i))
                max=w[i]+i;
        }
 
        printf("%d\n",max);
    }
    return 0;
}