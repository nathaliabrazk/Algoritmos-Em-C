//Elabore um programa que realize a contagem de 1 ate 100 e nos mulltiplos de 5 imprima apenas M5, caso o nummero seja multiplo de 10 imprima apenas M10 na tela, caso seja multiplo de 15 imprima apenas M15 e caso nao seja multiplo de 5,10 ou 15 imprima o valor atual da variavel.
#include<stdio.h>
int main(){
//declaracao de variaveis
int i=0;
for(i=1;i<=100;i++){
    if(i%15==0){
        printf("M15\n");
    }else{
        if(i%10==0){
            printf("M10\n");
        }else{
            if(i%5==0){
                printf("M5\n");
        }else{
            printf("%d\n", i);
        }
    }
   
}
}
}