/*Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.*/
#include<stdio.h>
int main(){
int decimal,hexa,octal,opcao;
printf("Digite o numero decimal:");
scanf("%d",&decimal);

printf("\n-----OPCOES-----\n");
printf("Conversao para hexadecimal digite 1\nConversao para octal digite 2\n");
prntf("Digite a opcao desejada:");
scanf("%d",&opcao);

switch (opcao){
case 1:
printf("Hexadecimal=%d",hexa);
break;

case 2:
printf("Octal=%d",octal);
break;
}
}