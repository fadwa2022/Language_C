#include <stdio.h>
#include <stdlib.h>

/* affichage des dix nombre qui suite*/

 void main( ) {
 int N,i;
   printf ("taper le nembre que vous voulez afficher les dix nombre qui le suive");
   scanf("%d",N);
    for(i=N+1;i<=N+10;i++)
     printf("%d",i);
}
