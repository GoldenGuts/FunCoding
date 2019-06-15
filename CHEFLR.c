#include<stdio.h>
 
int main()
    {
        int temp;
        int i;
        char child;
        unsigned long int result;
        scanf("%d\n",&temp);
        while(temp--){
            result=1;
            i=0;
            child=getchar();
            while(child!='\n' && child!=EOF)
                {
                if(i==0)
                    {
                    if (child=='l')
                        result=result*2;
                    if (child=='r')
                         result=result*2+2;
                    i=1;
                    }
                else
                    {
                    if (child=='l')
                    result=result*2-1;
                    if (child=='r')
                    result=result*2+1;
                    i=0;
                    }
                if (result>1000000007)
{
result=result%1000000007;
}
child=getchar();
}
if (result==1000000007)
printf("0" );
else
printf("%ld\n",result );
}
return 0;
}
 
