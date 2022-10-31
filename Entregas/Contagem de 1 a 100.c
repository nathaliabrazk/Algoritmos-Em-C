//Elabore um programa que realize a contagem de 1 ate 100 e nos multiplos de 5 imprima apenas M5, caso o numero seja multiplo de 10 imprima apenas M10 na tela, caso seja multiplo de 15 imprima apenas M15 e caso nao seja multiplo de 5,10 ou 15 imprima o valor atual da variavel.
#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
	if(i%1==0){
		printf("%d\n",i);
	}else{
		if(i%2==0){
			printf("%d\n",i);
		}else{
			if(i%3==0){
				printf("%d\n",i);
				}else{
					if(i%4==0){
						printf("%d\n",i);
					}else{
						if(i%5==0){
							printf("%M5\n");
						}
					}
				}
			}
		}
	}
	}
	
	
	
