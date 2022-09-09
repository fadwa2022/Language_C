#include <stdio.h>
#include <stdlib.h>

/* programme de division*/
void main() {
	float a,b;
	printf("entre les deux nembre: ");
	scanf("%f%f",&a,&b);
	if(b==0){
		printf("erreur");
		return(0);
	}

	printf("le resultet est :%.2f",a/b);
	
 }
