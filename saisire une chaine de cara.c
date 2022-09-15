#include <stdio.h>
#include <stdlib.h>
/*saisir une chaine de caractaire*/
void remplir(char C[]){
	printf("saisir votre chaine");
	scanf("%s",C);
	}
void main (){
int N;
char C[30];
  remplir(C);
  printf("la chaine de caractere est :%s",C);
 
}
