#include<stdio.h>
#define get getchar_unlocked
 
inline int scan()
{
    int n=0,s=1;
    char p=get();
    if(p=='-')  s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=get();
    if(p=='-') s=-1,p=get();
    while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=get(); }
    return n*s;
}
 
int main()
{
    int T,N,C,Q,L,R;
    T = scan();
    while(T--)
    {
        N = scan(); C = scan(); Q = scan();
        while(Q--)
        {
            L = scan(); R = scan();
            if(C>=L && C<=R) C = L+R-C ;
        }
        printf("%d\n",C) ;
    }
    return 0;
}