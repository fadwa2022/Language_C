#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*   la somme des carre*/

int main( ) {
	int i,N,S=0;
	printf("saisir le nombre carre finale");
	scanf("%d",&N);
	for(i=1;i<N+1;i++)
	     S=pow(i,2);
	printf("la somme des carre est : %d",S);
	
 
}
