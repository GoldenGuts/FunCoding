#include<stdio.h>
#include<math.h>
int main()
{
	long int t,h;
	long long int s,x,p;
	scanf("%ld",&t);
	while(t--)
	{scanf("%ld%lld",&h,&s);
		x=(long long)h*h-4*s;
		if(x>=0)
		{
			p=(long long)h*h+4*s;
			printf("%lf %lf %ld\n",(sqrt(p)-sqrt(x))/2,(sqrt(x)+sqrt(p))/2,h);
		}
		else printf("-1\n");
	}
}  