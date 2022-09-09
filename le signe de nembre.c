#include <stdio.h>
#include <stdlib.h>

/* le signe de nembre*/

int main( ) {
 int N;
  printf ("saisire le nembre que vous voulez tester");
  scanf("%d",&N);
  if(N<0)
  printf("le nembre est negative");
  else if (N>0)
   printf ("le nembre est positive");
   else
   printf ("nembre null");
	      
	return 0;
}
