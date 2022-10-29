//Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o correspondente em minutos e segundos destas horas.
#include<stdio.h>
int main(){
    //declaracao de variaveis
    int hora, minuto, segundo;//%d=int
    //definicao de valores
    printf("Digite as horas: ");
    scanf("%d", &hora);
    minuto=hora*60;
    segundo=minuto*3600;
    //impressao de resultado
    printf("%d horas tem %d minutos e %d segundos",hora, minuto,segundo);

return 0;
}