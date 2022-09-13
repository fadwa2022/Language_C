#include <stdio.h>
#include <stdlib.h>

/* trouver les deux max */
int taille(){
	int N;
   printf("saisir le nombres des elements que vous voulez saisire\n");
   scanf("%d",&N);
   return N;
} 
void remplire(int T[],int N){ 
int *p;
printf("remplire le tableau");
 for(p=T;p<T+N;p++)
  scanf("%d",p);
}
void affichage(int T[],int N){ 
int *p;
 printf("les nombre que  saisi :\n");
  for(p=T;p<T+N;p++)
  printf("%d \t",*p);
}
void Maxis(int T[],int N){
   int M1,M2,*p;
   M1=M2=T[0];
   for(p=T;p<T+N;p++)
   {
   	if(*p>M1)
   	  M1=*p;
   	if(*p>M2||M2<M1)
   		M2=*p;
	   }
	   printf ("les maximus de votre liste sont %d et %d",M1,M2);
}
void main( ) {
	int T[1000],N;
	 do{
	    N=taille();
	 }while(N>1000);
       remplir(T,N);
       affichage(T,N);
       Maxis(T,N);
}
