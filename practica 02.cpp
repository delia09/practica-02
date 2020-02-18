#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int main ()  {
	float a,b,c;
	int opt;
	printf("1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Division\n");
	printf("Seleccione una opcion");
	scanf("%d",&opt);
	printf("ingrese el primer operando:   ");
	scanf("%f", &a);
	printf("ingrese el segundo operando:  ");
	scanf("%f",&b);
	
	switch(opt) {
	case 1:
	c=a+b;
	break;
	case 2:
	c= a-b;
	break;
	case 3:
	c=a*b;
	break;
	case 4:
		while(b==0) {
			printf("Error b, debe de ser distinto de 0\n");
			printf("introduce el segundo operando:  ");
			scanf("%f", &b);
		}
		c=a/b;
		break;		
     	 default:
		 	printf("error opcion invalida");
		 	opt==5;
		 	
}
printf("el resultado es %0.2f",c);
	}


  

