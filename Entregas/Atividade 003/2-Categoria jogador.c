/*Escreva um programa que informe a categoria de um jogador de futebol,
considerando sua idade: (infantil=ate 13 anos),juvenil(ate 17 anos),
ou senior(acima de 17)*/
#include<stdio.h>
int main(){
    int idade;

    printf("Informe a idade:");
    scanf("%d",&idade);

    if(idade<=13){
        printf("Categoria=Infantil");
    }
        if(idade<=17){
            printf("Categoria=Juvenil");
        }
            if(idade>17){
                printf("Categoria=Senior");
            }
}