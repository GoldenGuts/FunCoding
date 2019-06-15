#include <stdio.h>
#include <string.h>
int main()
{
	int i,T, N,K,Times,Remainder;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &K);
		Times = K/25;
        Remainder = K- Times*25;
        if(K%25 == 0) goto Jump;
        for(i= 97 + Remainder ; i>=97 ;i--)printf("%c", i);
        Jump: while(Times--) for(i=122 ; i>=97; i--) printf("%c", i);
        printf("\n");
	}
	return 0;
}
