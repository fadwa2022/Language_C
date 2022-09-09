#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
/*  equation de 2 degree */
void main() {
	int a,b,c,D;
	printf ("saisire les valeurs de votre equation ");
	scanf("%d%d%d",&a,&b,&c);
	D=pow(b,2)-4*a*c;
	if(D>0)
	 printf("les deux solutions sont %.2f et  %.2f ", (-b-sqrt(D))/(2*a),(b-sqrt(D))/(2*a));
	if(D==0)
	printf("la solution est %.2f", (-b)/(2*a));
	if(D<0) 
	printf("aucune sol");
	
	 
}
