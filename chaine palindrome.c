#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*chaine palindrome*/
void main( ) {
char C[30],N[30];
int A;
printf("saisire votre chaine \n");
gets(C);
puts(C);
strcpy(N,C);
strrev(N);
A=strcmp(N,C); 
if(A==0)
printf("la chaine est palindrome");
else
printf("la chaine pas palindrome");
}
