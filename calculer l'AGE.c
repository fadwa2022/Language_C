#include <stdio.h>
#include <stdlib.h>

/* programme ou but de calculer l'AGE */

 void main() {
 	int ANI,AAC,AGE;
 	printf("entrer votre date de naissance et l'annee actuelle succesivement");
 	scanf("%d%d",&ANI,&AAC);
 	if(ANI>AAC){
	printf("re verifier votre dates il faut que l'adate de naissance etre moin que l'adate actuelle"); }
 	if(ANI<=AAC){
 		AGE=AAC-ANI;
 		printf("l'age est %d",AGE);
	 }
 
	 
}
