/*Escreva um programa que diga qual e o maior de dois numeros distintos*/
#include<stdio.h>
int main(){
    int n1,n2;

    printf("Informe o primeiro numero:");
    scanf("%d",&n1);

    printf("Informe o segundo numero:");
    scanf("%d",&n2);

    if(n1>n2){
        printf("Maior numero:%d",n1);
    }else if(n2>n1){
        printf("Maior numero:%d",n2);
    }

}