#include<stdio.h>
#include<stdlib.h>
int main(int arcgc, char*argu[]){
	//resultado empieza con 1 porque es el neutro multipllicativo
	float num1,num2,resultado=1;
	//el numero uno sera la base
	num1=atof(argu[1]);
	//y el numero dos sera el exponente
	num2=atof(argu[2]);
	//se utiliza un for para multiplicar la base las veces que diga el exponente
	for(int i=0;i<num2;i++){
		resultado=resultado*num1;
	}
	//se imprime el resultado
	printf("%.2f\n",resultado);
	return 0;
}	