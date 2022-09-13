#include <stdio.h>
#include <stdlib.h>

/* produit des vecteur */
void vecteur(int U[],int N){
	int *p,*q;
	for(p=U;p<U+N;p++)
	scanf("%d",p);
	printf("dimension vecteur:");	
	printf( " (");
	for(p=U;p<U+N;p++){	
	printf("%d ",*p);
    while(p!=U+N-1)
     {printf(",");
     break;
	 }
	}

	printf( ")");}

int produit (int U[],int V[],int N){
int *q,*p;
	printf("\n le produit des deux vecteurs est: \n");
	printf( "(");
for (q=U,p=V ;q<U+N;q++,p++)
{printf("%d",*p * *q);
   while(q!=U+N-1)
     {
	printf(",");
         break; }} 
    printf(")");
}


void main( ) {
	int M,U[100],V[100];
	X:
	M=1;
	printf("entrer la dimension des deux vecteurs");
	scanf("%d",&M);
if (M>0)	{
    printf("\n saisir les dimension de la premier vecteur\n");
	vecteur(U,M);
	printf("\n saisir les dimension de la deuxieme vecteur\n");
	vecteur(V,M);
	produit (U,V,M);
	}
else 
{
printf("il faut que votre dimension soit un nombre plus que 0\n");
  goto X;
 } 

    
	
	
}
