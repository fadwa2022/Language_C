 #include <stdio.h>
#include  <stdlib.h>
/* Election Présidentielle*/
typedef struct{
	char nom[50];
	 }president;
typedef struct{
	char nom[50];
	char cin[10];
	 }electeur;
void presidents(int N,president T[]){
int i;
  printf("\n*******************entrer les noms des condidats********************\n");
  for(i=0;i<N;i++)
    {printf("Entrez le nom  de la personne N%d:\t",i+1);
        scanf("%s",T[i].nom ); }
}
void electeurs(int M,electeur E[]){
int i;

  printf("\n*******************entrer les noms des electeurs et leur cin********************\n");
  for(i=0;i<M;i++)
    {printf("\nEntrez le nom  de l'electeur %d:\t",i+1);
        scanf("%s",E[i].nom ); 
     printf("\nEntrez le cin  de l'electeur %d:\t",i+1);
        scanf("%s",E[i].cin); 
		}
}
void affichage_liste_presidents(int N,president T[]){
	
	int i;
     for(i=0;i<N;i++)
    printf("\n %d %s\n",i+1,T[i].nom );
}
void select(int M,int N,electeur E[],president T[]){
int c[M],choix,g,i,j,b=0,a=1,INDEX=0;
   for(j=0;j<M;j++) 
   {  printf("\n %s de CIN %s \n",E[j].nom,E[j].cin);
      printf("\n<<<<<<<<<<saisir le nombre de president que vous voulez a partir de la liste>>>>>>>>>>>>>>\n");
      affichage_liste_presidents(N,T);
	  scanf("%d",&choix);
      c[j]=choix;
   } 
  for(j=0;j<M;j++)
  {
   for(i=j;i<M;i++)
   {
   	 if(c[j]==c[i])
		 b++; 
   }
	if(b>a)
		 {
		 a=b;
		 b=0;
		 INDEX=j;
		 }
  }
		g=c[INDEX]-1;
		
		printf("\n lelecteur qui ganee est  %s  \t",T[g].nom);
}
void main(){
int i,j,N,M,choix ;
president T[50];
electeur E[50];
    printf("saisir le nombre de vos condidats\n");
    scanf("%d",&N);
    presidents(N,T);
    printf("saisir le nombre de vos electeurs\n");
    scanf("%d",&M);
    electeurs(M,E);
    printf("********le choix de president*********\n");
    select(M,N,E,T);
    }
