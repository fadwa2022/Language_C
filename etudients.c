#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  programme  qui lit un ensemble de personnes avec leurs âges et supprime ensuite toutes celles qui sont âgées de vingt ans et plus. */
typedef struct {
 char nom[50];
 int age;	
}personne;
void remplire(personne T[],int N) {
int i;
 printf("saisir vos etudient");
 for (i=0;i<N;i++) 
 {	
   printf("\n enter le nom de la personne %d\n",i+1);
 	scanf("%s",T[i].nom);
 	printf("\nenter son age\n");
 	scanf("%d",&T[i].age);}
	 } 
void affichage(personne T[],int N){ 
   int i; 
   for (i=0;i<N;i++) {	
   printf("\nla personne %d : \n",i+1);
   printf("\n NOM: %s\n AGE: %d \n",T[i].nom,T[i].age);}
  }
int select (personne T[],int N){
	int i,M=0,j;
	 for (i=0;i<N;i++) 
	 {
	 if(T[i].age>19)
	  {
	 for(j=i;j<N;j++)
	    {
		strcpy(T[j].nom,T[j+1].nom);
        T[j].age = T[j+1].age;
		}
		M=--N;
		i--;
	  }
	   	
	 }
	  return M;
}
void main(){
	int i,N,M;
     personne T[50];
    do {printf("saisir le nombre de vos etudents\n");
         scanf("%d",&N);
	}while(N>50);
	remplire (T,N);
	printf("\n*******LISTE DE VOS ETUDIENTS*********\n ");
    affichage(T,N);
    //select (T,N);
  printf("\n*******LISTE DE VOS ETUDIENTS ON UN AGE MOINS QUE 20*********\n "); 
    M=select(T,N);
    affichage(T,M);
	}
