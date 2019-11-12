#include<stdio.h>
#include<stdlib.h>
//esta funcion es la que hara todo el trabajo
int saludos(int personas){
	//saludo seran los saludos que de una persona
	//total la sumatoria de todos los saludos
	int total,saludo;
	//el saludo que da una persona es las personas
	//menos el mismo
	saludo=personas-1;
	//cuadno sea una persona no hay saludos
	if (saludo==0){
		return saludo;
	}
	//se hace la sumatoria de los saludos
	total=saludo+saludos(personas-1);
	return total;
}
int main(int argc ,char*argu[]){
	int resultado,personas;
	//se toma el primer argumento
	personas=atoi(argu[1]);
	//se llama a la funcion
	resultado=saludos(personas);
	//se imprime el resultado
	printf("%i\n",resultado);
	return 0;
}