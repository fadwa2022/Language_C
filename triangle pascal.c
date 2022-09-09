#include <stdio.h>
#include <stdlib.h>

/* triangle pascal  */

void main() { 
 int  N,i,j,p=1;
  printf("saisire le nbr des ligne: ");
  scanf ("%d",&N);
  for(i=0;i<N;i++)
  { for (j=0;j<=i;j++)
      { 
      if (j==0||j==i)
        {
		printf ("1");
         p=1;
		 } 
      else 
     {
	  p = p*(i-j+1)/j;
      printf ("%d",p);
	  } 
	  
         
	  }printf("\n");
  }
 
}
