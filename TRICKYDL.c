#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int a,i=1,po,p=0,s=0,j,k,m=0,pos,r=0;
	    scanf("%ld",&a);
	    do
	    {
	        p=p+a;
	            if(i==1)
	            po=1;
	            else
	            po=po*2;
	            s=s+po;
	        
	        k=p-s;
	        if(k>r)
	        {
	        r=k;
	        pos=i;
	        }
	        
	        i++;
	    }while(k>=0);
	    
	    printf("%ld %ld\n",i-2,pos);
	   
	}
	
	return 0;
}

