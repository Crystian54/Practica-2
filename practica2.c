/*Programa que precede a la calculadora conswieth, whilw y dowhile
Chavez Jimenez Crystian Alonso 1AV6*/
#include<stdio.h>
#include<conio.h>
int main()
{
int o;
char op;
float a,b,c;
do{
    system("cls");
	printf("elige la opcion \n");
	printf("1-SUMA \n2-RESTA\n3-MULTIPLICACION\n4-DIVISION\n");
	printf("elige una opcion (1-4)\n"); scanf("%d",&o);
    printf("dame el primer operando \t"); scanf("%f",&a);
    printf("dame el segundo operando \t"); scanf("%f",&b);
	switch (o){
		case 1:
		c=a+b;
		printf("el resultado es %f \n",c);
		break;
		case 2:
		c=a-b;
		printf("el resultado es %f \n",c);
		break;
		case 3:
		c=a*b;
		printf("el resultado es %f \n",c);
		break;
		case 4:
		while(b==0){
			printf("b no puede ser 0 dame otro valor de b \n"); scanf("%f",&b);
			}
		c=a/b;
		printf("el resultado es %f \n",c);
		break;
		default:
		printf("opcion no valida\n");

	}
	printf("quieres hacer otra operacion?\n");
	printf("(S) Si \n(N) No\n");
	scanf("%c",&op);
	op=getch();
}while(op=='S' || op=='s');
return 0;
}
