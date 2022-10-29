//Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
//média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
//dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.
#include<stdio.h>
int main(){
//declaracao de variaveis
int a, b, media;//%d=int
//definicao de valores
printf("Digite a primeira nota de 1 a 10: ");
scanf("%d", &a);
printf("Digite a segunda nota de 1 a 10: ");
scanf("%d", &b);
printf("\n");
//operacoes para resultad0
media=(a*3.5+b*7.5)/11;
//impressao de resultado
printf("Media de notas:%d", media);

return 0;
}