/*Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa, octal e binario.*/
#include<stdio.h>
#include<math.h>

int main(){
//declaracao de variaveis
int decimal,hexa,octal,binario,opcao;

printf("Digite o numero decimal:");
scanf("%d",&decimal);

printf("\n-----OPCOES DE CONVERSAO-----\n");
printf("Hexadecimal digite 1\nOctal digite 2\nBinario digite 3");
printf("\nDigite a opcao desejada:");
scanf("%d",&opcao);

    switch (opcao){
    case 1:
    printf("Hexadecimal=%d",hexa);
    break;

        case 2:
        printf("Octal=%d",octal);
        break;

            case 3:
            if(decimal==0){
                
            }
            printf("Binario=%d",binario);
            break;
    }


}

