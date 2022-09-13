#include <stdio.h>
#include <stdlib.h>

/*trouver un nombre*/
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
int trouve (int T[],int k,int N)
{ int*p,c=0;
  for(p=T;p<T+N;p++)
   {if (*p==k)
    c++;
	} 
  if(c!=0)
   printf("le nombre %d exist %d fois",k,c);
  else
  printf("le nombre %d n'exist %d pas",k);
    
}
void main() {
	int N,T[100],change=0,k;
	do{
		N=taille();
	}while(N>100);
	X:
	remplire(T,N);
	affichage(T,N);	
	printf("\n pour modifier le tableau taper 1 si non taper un nombre\n");
	scanf("%d",&change);
    if(change==1)	
     goto X;
    
	printf("taper le nombre que vous voulez trouver");
    scanf("%d",&k);
    trouve (T,k,N); 
     
}
