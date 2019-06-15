#include <stdio.h>

int main(void) {
   int i,total;
   scanf("%d",&total);
   
   for(i=0;i<total;i++){
       
       int j,k[4];
       
       for(j=0; j<4; j++){
       scanf("%d",&k[j]);
       }
       
       if( k[0]==0 || k[1]==0 || k[2]==0 || k[3]==0 || (k[0]+k[1]==0) || (k[0]+k[2]==0) || (k[0]+k[3]==0) || (k[1]+k[2]==0) || (k[1]+k[3]==0) ||(k[2]+k[3]==0) || (k[0]+k[1]+k[2]==0) || (k[0]+k[1]+k[3]==0) || (k[1]+k[2]+k[3]==0) || (k[0]+k[2]+k[3]==0) || (k[0]+k[1]+k[2]+k[3]==0) )
       printf("Yes\n");
       else
       printf("No\n");
   }
	return 0;
}

