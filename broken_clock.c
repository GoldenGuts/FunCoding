//kol1505

#include<stdio.h>


void del(char a[1000] , int i)
{
	int x;
	for(x=i;a[x];x++)
	 a[x]=a[x+1];
	a[x-1]='\0'; 
}


int initcheck(char a[1000] , char b[1000] )
{
	int i , j;
	for(i=0;a[i];i++)
	 for(j=0;b[j];j++)
	  if(a[i]==b[j])
	   a[i]=='0';
	   
	for(i=0;a[i];i++)
	if(a[i]!='0')
	 return(1);
	return(0);
}


main()
{
	char a[100] , b[100];
	int t , i ;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s", a);
		scanf("%s", b);
		if(initcheck(a,b))
		{
		for(i=0;a[i];i++)
		{
			if(a[i]==a[i+1])
			{
			del(a ,i+1);
			i--;
		}
		//	printf("\na)%sLen)%d", a,strlen(a));
			
		}
		for(i=0;b[i];i++)
		{
			if(b[i]==b[i+1])
			{
			del(b , i+1);
			i--;
		}
		//		printf("\nb)%slen)%d", b,strlen(b));
			
		
		}
		if(!strcmp(a,b))
		printf("Yes\n");
		else
		printf("No\n");
	}
	else
	printf("No\n");
	}
	//scanf("%d",&t);
}