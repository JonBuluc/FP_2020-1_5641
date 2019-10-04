#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argu[]){
	int Num;
	int Par=1;
	int Non=0;
	Num=atoi(argu[1]);
	if (Num%2==0){
		printf("%d\n",Par);
	}
	else {
		printf("%d\n",Non);
	}
	return 0;
}