#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* */

void main() {
 char C[30],D[30];
 int i,n=0;
  printf("saisir le premier text ");
  gets(C);
  printf("saisir le deuxieme text ");
  gets(D);
  if (strlen(C)==strlen(D))
   {for(i=0;i<strlen(C);i++)
    {if(C[i]!=D[i])
          n++;
          }
    printf("la distance de hamming entre %s et %s est: %d ",C,D,n);
	} 
		   
  else
   printf("les motes que vous avez saisir on pas le meme langeur")  ;
 
}
