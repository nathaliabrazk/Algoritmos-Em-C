//Elabore um programa que realize a contagem de 1 até 100 e nos múltiplos de 5 imprima apenas M5, caso o número seja múltiplo de 10 imprima apenas M10 na tela, caso seja múltiplo de 15 imprima apenas M15 e caso não seja múltiplo de 5,10 ou 15 imprima o valor atual da variável.
#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		if(i%5==0){
			printf("M5\n");
		}else{
			if(i%10==0){
				printf("M10\n");
			}
		}
		if(i%15==0){
			printf("M15\n");
		}else{
			printf("%d\n",i);
		}
	}
		
return 0;
}