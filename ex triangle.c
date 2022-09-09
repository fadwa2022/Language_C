#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main( ) { 
    int i, j=0, s, l;
  
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&l);
  
    for(i=1; i<=l; i++, j=0)
    {
        for(s=1; s<=l-i; s++)
        {
            printf("  ");
        }
        while(j != 2*i-1)
        {
            printf("* ");
            ++j;
        }
        printf("\n");
    }
    
    
}

 

