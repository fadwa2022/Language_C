#include <stdio.h>
#include <stdlib.h>
//calcule l'air dun cercle
void main(){
	const float P=3.14 ;
	float r,A ;
	printf("saisir le rayon du cercle\n");
	scanf("%f",&r);
	   A=(r*r)*P;
	printf("l'air de ce cercle c'est:%.2f",A );
	}

