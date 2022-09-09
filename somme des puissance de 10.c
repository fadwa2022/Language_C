#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* prog de la somme des puissance de 10 */

void main(  ) {
	int i,S=0,N;
	printf("saisir la puissance finale de 10");
	scanf("%d",&N);
	for (i=0;i<=N;i++)
	    S+=pow(10,i);
	    printf("la somme est %d",S);
	
	
	 
}
