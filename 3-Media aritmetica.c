//algoritmo que calcule a média aritmética de 3 números quaisquer
#include<stdio.h>
int main(){
//declaracao de variveis 
float n1, n2, n3, media;
//definicao de valores
printf("Informe o primeiro numero: ");
scanf("%f", &n1);
printf("Informe o segundo numero: ");
scanf("%f", &n2);
printf("Informe o terceiro numero: ");
scanf("%f", &n3);
printf("\n");
//operacao para resolucao 
media=n1*n2*n3/3;
//impressao de resultados
printf("Media aritmetica: %.0f", media);

return 0;
}