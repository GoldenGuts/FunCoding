#include<stdio.h>
#define gc getchar_unlocked
inline long long int sscan()
{long long int n=0,c=gc();
while(c<'0'||c>'9')
c=gc();
while(c<='9'&&c>='0')
    {
n=n*10+c-'0';
c=gc();
    }
return n;
}
 
int main()
{
    long long int t;
    t=sscan();
    //int last=0;
    while(t--)
    {
        long long int input;
        input=sscan();
        long long int ans;
        ans=(input*2)+  ( (input-1)*(input)/2 ) ;
 
        //if(last==0)
            printf("%lld\n",ans);
        //else
            //printf("%llu\n",ans-(input-last));
        //0last = input/2;
    }
    return 0;
}