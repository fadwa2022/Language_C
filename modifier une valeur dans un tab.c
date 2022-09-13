#include <stdio.h>
#include <stdlib.h>
/* insere un nbr a une posision exact*/
int taille_tableau()
{int N;
 printf ("saisire la taille de tableau");
 scanf("%d",&N);
 return N;
 }
void remplir_tableau(int T[],int N)
{ int *p;
    printf("remplir le tableau:\n");
    for(p=T;p<T+N;p++)
     scanf("%d",p);
    }
void affiche_tableau(int T[],int N)
{ int *p;
    printf("le tableau : \n");
    for(p=T;p<T+N;p++)
    printf("%d \t",*p);
}
void modificatin(int T[],int N)
{int x,k,*p=T;
X:	printf("saisir la position que vous voulez la modifier et la valeur\n");
	scanf("%d%d",&k,&x);
	while (k>N){
	 printf("taper une position qui exist\n");
	 goto X;
	}
	do{
	 *(p+k-1)=x;
	 break;	
  	}while(k<N);
    }
void main( ) {
int T[100],N,x;
  do{ N=taille_tableau();}while(N>100);
   remplir_tableau(T,N);
   affiche_tableau(T,N);
   printf("\n si vous voulez modifier une position exact tapez 1 si non tapez un nombre\n");
   scanf("%d",&x);
   if(x==1)
   modificatin(T,N);
   affiche_tableau(T,N);
}
