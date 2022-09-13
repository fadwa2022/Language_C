#include <stdio.h>

int taille_tableau()
{int N;
 printf ("saisire la taille de tableau");
 scanf("%d",&N);
 return N;
 }
void remplir_tableau(float T[],int N)
{ float *p;
    printf("remplir le tableau:\n");
    for(p=T;p<T+N;p++)
     scanf("%f",p);
    }
void affiche_tableau(float T[],int N)
{ float *p;
    printf("le tableau : \n");
    for(p=T;p<T+N;p++)
    printf("%.2f \t",*p);
}
float somme_tableau(float T[],int N)
{ float *p,somme;
    for(p=T;p<T+N;p++)
    somme+= *p;
    return somme;
}
float produit_tableau(float T[],int N)
{ float *p,produit=1;
    for(p=T;p<T+N;p++)
    produit*= *p;
    printf("le produit des elements de tableau est :%.2f \n",produit);
    return produit;
}
 void main() {
float T[100],somme;
int N;
  do{ N=taille_tableau();}while(N>100);
   remplir_tableau(T,N);
   affiche_tableau(T,N);
   somme=somme_tableau(T,N);
   printf(" \n la somme des elements des tableau est :%.2f \n",somme);
   produit_tableau(T,N);
   printf("la moyenne des elements de tableau est %.2f \n:",somme/2);
 }
