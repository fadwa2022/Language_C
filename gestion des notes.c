#include <stdio.h>
#include <stdlib.h>
/* gestion des notes d un classe */
 int N=100;
int mini(int Note[],int N){
   int  min=*Note,*p; 
    p=Note;
	for (p=Note;p<Note+N;p++)
	if (p<min)
	min=*p;
	return(min);
}
int maxi(int Note[],int N){
   int  max=*Note,*p; 
    p=Note;
	for (p=Note;p<Note+N;p++)
	if (p>max)
	max=*p;
	return(max);
}

void main( ) 
{
int Note[N],*p,M=0,min,max;
  do{printf("saisire le nombre des etudients");
    scanf("%d",&N);
    }while(N>100);
    printf ("entrer le notes");
    for (p=Note;p<Note+N;p++)
    {scanf("%d",p);
    M += *p;}
	printf("les notes de classe est \n");
    for (p=Note;p<Note+N;p++)
    printf("%d \n",*p); 
    printf (" \n la moyenne de classe est :%d \n",M/N );
    printf ("  le min est :%d \n", mini(Note,N));
    printf ("  la max est :%d \n", maxi(Note,N));
	}
