    #include <stdio.h>
    inline int fastinput()
    {
    int t=0;
    char c;
    c=getchar_unlocked();
    while(c<'0' || c>'9')
    c=getchar_unlocked();
    while(c>='0' && c<='9')
    {
    if(c!='4'&&c!='7')
    t++;
    c=getchar_unlocked();
    }
    return(t);
    }
    int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    printf("%d\n",fastinput());
    }
    return 0;
    } 