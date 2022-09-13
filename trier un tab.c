#include <stdio.h>
#include <stdlib.h>

/* trier un tab */
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
   
    for(p=T;p<T+N;p++)
    printf("%d \t",*p);
}
void tri_tableau(int T[],int N)
{int *p,*q,min;
	 for(p=T;p<T+N;p++){
	  for(q=p;q<T+N;q++)
	    if(*q<*p)
	  { 
	    min=*q;
	    *q=*p;
	    *p=min; 
      }   
	 }
	 
		} 
void main( ) {
 int T[100],N;
	 do{ N=taille_tableau(); }while(N>100);
       remplir_tableau(T,N);
    printf("\n le tableau : \n");
       affiche_tableau(T,N);
       tri_tableau(T,N);
    printf("\n le tableau trier  : \n");
       affiche_tableau(T,N);
}
