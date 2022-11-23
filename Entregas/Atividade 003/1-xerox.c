/*Escreva um programa que resolva o seguinte problema: uma copia(xerox) custa R$ 0,25
por folha, mas acima de 100 folhas esse valor cai para 0,20 por unidade. Dado o total
de copias, iforme o valor a ser pago*/
#include<stdio.h>
int main(){
    //TERMINAR
    //declaracao de variaveis 
    int quant;
    float valor;

    printf("Informe a quantidade de copias:");
    scanf("%d",&quant);

    //validacao
    if(quant<=100){
        //imressao de resultado
        valor==quant*0,25;
        printf("Valor a ser pago:%f",valor);
    }

    if(quant>100){
        valor==quant*0,20;
        //impressao de resultado
        printf("Valor a ser pago:%f",valor);
    }
}
