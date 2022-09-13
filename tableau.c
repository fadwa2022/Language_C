#include <stdio.h>
#include <stdlib.h>
/*   */
int taille_tableau(){
int N;
 printf ("saisire la taille de tableau ");
 scanf("%d",&N);
 return N;
 }
void remplir_tableau(int T[],int N){ 
int *p;
    printf("remplir le tableau:\n");
    for(p=T;p<T+N;p++)
     scanf("%d",p);
    }
void affiche_tableau(int T[],int N){ 
   int *p;
    printf("le tableau : \n");
    for(p=T;p<T+N;p++)
    printf("%d \t",*p);
}
int somme_tableau(int T[],int N){ 
   int *p,somme;
     for(p=T;p<T+N;p++)
    somme+= *p;
    printf(" \n la somme des elements des tableau est :%d \n",somme);
    return somme;
}
int produit_tableau(int T[],int N){
 int *p,produit=1;
    for(p=T;p<T+N;p++)
    produit*= *p;
    printf("le produit des elements de tableau est :%d\n",produit);
    return produit;
}
void moyenne_tableau(int T[],int N){
	int M=0;
	M=somme_tableau(T,N);
	 printf("la moyenne des elements de tableau est %d  \n",M/2);
	 }
void Maxis(int T[],int N){
   int M1,M2,*p;
   M1=M2=T[0];
   for(p=T;p<T+N;p++){	
   if(*p>M1)
	{ M2=M1;
   	  M1=*p;
   	 }
   }
   
	   printf ("les maximus de votre liste sont %d et %d",M1,M2);
}
void supprimer(int T[],int N){
 int k,*p=T,M;
 X:	printf("saisir la position que vous voulez la supprimer \n");
	scanf("%d",&k);
	while (k>N){
	 printf("taper une position qui exist\n");
	 goto X;
	}
	 for(p=T+k-1;p<T+N;p++)
	 *p=*(p+1);
	  M=N-1;
	affiche_tableau(T,M); }
int trouve (int T[],int k,int N){ 
  int*p,c=0;
  for(p=T;p<T+N;p++)
   {if (*p==k)
    c++;
	} 
  if(c!=0)
   printf("le nombre %d exist %d fois",k,c);
  else
  printf("le nombre %d n'exist %d pas",k);
    
}
void tri_tableau(int T[],int N){
int *p,*q,min;
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
void main() {
int T[100],N,x,n,k;
   do{ N=taille_tableau();}while(N>100);
   remplir_tableau(T,N);
   affiche_tableau(T,N);
 X: printf("\n******saisir le nombre de l'operation que vous voulez******\n\n");
   printf(" 1:la somme des elements de tableau \n 2:le produit des elements de tableau \n 3:la moyenne des elements de tableau \n 4:avoir les deux maximum valeur de tableau \n 5:suprimer un element \n 6:trouver un nombre avec nombre d'occurrence\n 7:trier le tableau a ordre croissant\n 8:quitte\n");
   scanf("%d",&x);
    switch (x){
    	case 1:
    	somme_tableau(T,N);
    	printf("\n<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste>>>>>>>>>>>>>>\n");
		goto X;
		case 2:
    	produit_tableau(T,N);
    	printf("\n<<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste>>>>>>>>>>>>>\n");
        goto X;
    	case 3:
    	moyenne_tableau(T,N);
    	printf("\n<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste>>>>>>>>>>>>>>\n");
	    goto X;
    	case 4:
    	Maxis(T,N);
    	printf("\n<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste>>>>>>>>>>>>>>\n");
        goto X;
    	case 5:
    	supprimer(T,N);
    	printf("\n<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste>>>>>>>>>>>>>>\n");
    	goto X;
    	case 6:
       	printf("taper le nombre que vous voulez trouver");
        scanf("%d",&k);
        trouve(T,k,N);
        printf("\n<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste >>>>>>>>>>>>>>\n");
        goto X;
    	case 7:
    	tri_tableau(T,N);
        printf("\n le tableau trier  : \n");
        affiche_tableau(T,N);
        printf("\n<<<<<<<<<<<<pour faire une autre operation taper un nombre de la liste>>>>>>>>>>>>>>\n");
    	goto X;
	}
}
