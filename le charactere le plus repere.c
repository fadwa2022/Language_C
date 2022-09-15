#include <stdio.h>
#include <stdlib.h>

/* le charactere le plus repere dans la chaine */

void main() {
	char c[30],v,*p,*q;
	int N=1,k=0;
X:	printf("saisire votre chaine ");
	gets(c);
	for(p=c;p<c+strlen(c);p++){
		for(q=p;q<c+strlen(c);q++){
         if(*p==*q)
         k++;
		}
		if (k>N)
		{N=k;
		v=*p;}
	   k=0;}
	   if(N==1)
	   {
	   	printf("aucun caracter ne se repete");
	   	goto X;
	   }
	
   printf("le charactere le plus existe est %c et il exist %d fois",v,N);	
 
}
